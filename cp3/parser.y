%output "parser.c"
%defines "parser.h"
%define parse.error verbose
%define parse.lac full
%define parse.trace

%code requires {
typedef enum yytokentype yytoken_kind_t;
}

%{
#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "tables.h"
#include "ast.h"
#include "parser.h"
#include "string.h"

#define CHILDREN_LIMIT 20

void lex_init(void);
int yylex(void);
int yylex_destroy(void);
void yyerror(char const *s);

typedef struct {
    char* last_text[100];
    int count;
} mdl;

extern char *yytext;
extern int yylineno;
extern mdl names_list;
extern mdl numbers_list;
extern mdl bool_list;

int position = 0;
int position_f = 0;
int position_numbers = 0;
int position_boolean = 0;

StrTable *st;
VarTable *vt;
AST *root;

int builtin_funcs_n = 16;
char **builtin_funcs = (char *[]){"print","input","abs","float","len","int","max","min","pow","range","round","slice","str","tuple","type"};

%}

%define api.value.type {AST*}

%token ENDMARKER
%token AND AMPER AMPEREQUAL ARROW AS ASSERT EQUAL ASYNC AT ATEQUAL AWAIT BREAK CLASS COLON COLONEQUAL COMMA CONTINUE DEDENT DEF DEL DOT DOUBLESLASH DOUBLESLASHEQUAL DOUBLESTAR DOUBLESTAREQUAL EQEQUAL ELIF ELLIPSIS ELSE EXCEPT FALSE FOR FINALLY FROM GREATEREQUAL GLOBAL GREATER IF IMPORT IN INDENT IS LAMBDA LSQB LBRACE LESSEQUAL LPAR LEFTSHIFT LEFTSHIFTEQUAL LESS MINUS MINUSEQUAL NAME NOTEQUAL NEWLINE NONE NONLOCAL NOT NUMBER OR VBAR VBAREQUAL PASS PERCENT PERCENTEQUAL PLUS PLUSEQUAL RAISE RSQB RBRACE RETURN RPAR RIGHTSHIFT RIGHTSHIFTEQUAL SEMICOLON SLASH SLASHEQUAL STAR STAREQUAL STRING TILDE TRUE TRY TYPE_COMMENT WITH WHILE CIRCUMFLEX CIRCUMFLEXEQUAL YIELD

%start program

%%

// REGRAS COMPLEMENTARES

newline_or_stmt_star: %empty { $$ = new_subtree(BLOCK_NODE, NO_TYPE, 0); }
                    | newline_or_stmt_star NEWLINE { $$ = $1; }
                    | newline_or_stmt_star stmt { add_child($1, $2); $$ = $1; }
;

opt_par_arglist: %empty
               | LPAR RPAR
			   | LPAR arglist RPAR
;

decorator_plus: decorator
              | decorator_plus decorator
;

opt_arrow_test: %empty
              | ARROW test
;

opt_type_comment: %empty
                | TYPE_COMMENT
;

opt_comma: %empty
         | COMMA
;

opt_colon_test: %empty
			  | COLON test
;

opt_semi: %empty
		    | SEMICOLON
;

assing_yield_or_test_plus: EQUAL yield_expr { $$ = $2; }
                         | EQUAL testlist_star_expr { $$ = $2; }
                         | assing_yield_or_test_plus EQUAL yield_expr { $$ = new_subtree(ASSIGN_NODE, NO_TYPE, 2, $1, $3); }
                         | assing_yield_or_test_plus EQUAL testlist_star_expr { $$ = new_subtree(ASSIGN_NODE, NO_TYPE, 2, $1, $3); }
;
            
opt_assing_yield_or_test: %empty
                        | EQUAL yield_expr
                        | EQUAL testlist_star_expr
;

opt_as_name: %empty
           | AS NAME 
;

comma_import_as_name_star: %empty
                         | comma_import_as_name_star COMMA import_as_name
;

comma_dotted_as_name_star: %empty
                         | comma_dotted_as_name_star COMMA dotted_as_name
;

dot_name_star: %empty
             | dot_name_star DOT NAME
;

comma_name_star: %empty
               | comma_name_star COMMA NAME 
;

opt_comma_test: %empty
              | COMMA test
;

elif_test_suite_plus: ELIF namedexpr_test COLON suite { $$ = new_subtree(ELIF_NODE, NO_TYPE, 2, $2, $4); }
                    | elif_test_suite_plus ELIF namedexpr_test COLON suite { add_child($1, new_subtree(ELIF_NODE, NO_TYPE, 2, $3, $5)); $$ = $1; }
;

opt_else_suite: %empty { $$ = new_node(NOOP_NODE, 0, NO_TYPE); }
              | ELSE COLON suite { $$ = new_subtree(ELSE_NODE, NO_TYPE, 1, $3); }
;

comma_with_item_star: %empty
                    | comma_with_item_star COMMA with_item
;

opt_as_expr: %empty
           | AS expr
;

opt_test_as_name: %empty
                | test opt_as_name
;

stmt_plus: stmt { $$ = new_subtree(BLOCK_NODE, NO_TYPE, 1, $1); }
         | stmt_plus stmt { add_child($1, $2); }
;

opt_await: %empty
         | AWAIT
;

trailer_plus: trailer { $$ = $1; }
			| trailer_plus trailer { add_child($1, $2); $$ = $1; }
;

opt_test: %empty
        | test
;

opt_sliceop: %empty
           | sliceop
;

comma_dict1_star: %empty
                | comma_dict1_star COMMA test COLON test
                | comma_dict1_star COMMA DOUBLESTAR expr
;

except_suite_plus: except_clause COLON suite
                | except_suite_plus except_clause COLON suite
;

opt_finally_suite: %empty
                 | FINALLY COLON suite
;

// REGRAS

program: file_input { root = new_subtree(PROGRAM_NODE, NO_TYPE, 1, $1); }
;

file_input: newline_or_stmt_star ENDMARKER { $$ = $1; }
;

decorator: AT dotted_name opt_par_arglist NEWLINE
;

decorators: decorator_plus
;

decorated: decorators classdef
         | decorators funcdef
         | decorators async_funcdef
;

async_funcdef: ASYNC funcdef { $$ = $2; }
;

funcdef: DEF NAME parameters opt_arrow_test COLON opt_type_comment func_body_suite { $$ = new_subtree(FUNCDEF_NODE, NO_TYPE, 3, new_node(FUNCNAME_NODE, 0, NO_TYPE), $3, $7); }
;

parameters: LPAR RPAR { $$ = new_node(PARS_NODE, 0, NO_TYPE); }
          | LPAR arguments RPAR { $$ = $2; }
;

arguments: argument COMMA arguments { add_child($3, $1); $$ = $3; }
         | argument { $$ = new_subtree(PARS_NODE, NO_TYPE, 1, $1); }
;

argument: tfpdef EQUAL test { $$ = new_subtree(ASSIGN_NODE, NO_TYPE, 2, $1, $3); }
        | tfpdef { $$ = $1; }
;

tfpdef: NAME opt_colon_test { $$ = new_node(NAME_NODE, 0, NO_TYPE); }
;

// ---

stmt: simple_stmt   { $$ = $1; }
    | compound_stmt { $$ = $1; }
;

simple_stmt: small_stmt opt_semi NEWLINE { $$ = $1; }
;

small_stmt: expr_stmt  { $$ = $1; }
		  | del_stmt  { $$ = $1; }
		  | pass_stmt  { $$ = $1; }
		  | flow_stmt { $$ = $1; }
		  | import_stmt { $$ = $1; }
		  | global_stmt { $$ = $1; }
		  | nonlocal_stmt { $$ = $1; }
		  | assert_stmt { $$ = $1; }
;

expr_stmt: testlist_star_expr annassign
		 | testlist_star_expr augassign yield_expr
		 | testlist_star_expr augassign testlist
		 | testlist_star_expr
		 | testlist_star_expr assing_yield_or_test_plus opt_type_comment { $$ = new_subtree(ASSIGN_NODE, NO_TYPE, 2, $1, $2); }
;

annassign: COLON test opt_assing_yield_or_test
;

testlist_star_expr: test opt_comma { $$ = $1; }
;

augassign: PLUSEQUAL
		 | MINUSEQUAL
		 | STAREQUAL
		 | ATEQUAL
		 | SLASHEQUAL
		 | PERCENTEQUAL
		 | AMPEREQUAL
		 | VBAREQUAL
		 | CIRCUMFLEXEQUAL
		 | LEFTSHIFTEQUAL
		 | RIGHTSHIFTEQUAL
		 | DOUBLESTAREQUAL
		 | DOUBLESLASHEQUAL
;

del_stmt: DEL exprlist { $$ = new_subtree(DEL_NODE, NO_TYPE, 1, $2); }
;

pass_stmt: PASS { $$ = new_subtree(PASS_NODE, NO_TYPE, 0); }
;

flow_stmt: break_stmt { $$ = $1; }
         | continue_stmt { $$ = $1; }
         | return_stmt { $$ = $1; }
         | raise_stmt { $$ = $1; }
         | yield_stmt { $$ = $1; }
;

break_stmt: BREAK { $$ = new_subtree(BREAK_NODE, NO_TYPE, 0); }
;

continue_stmt: CONTINUE { $$ = new_node(CONTINUE_NODE, 0, NO_TYPE); }
;

return_stmt: RETURN testlist_star_expr { $$ = new_subtree(RETURN_NODE, NO_TYPE, 1, $2); }
           | RETURN { $$ = new_node(RETURN_NODE, 0, NO_TYPE); }
;

yield_stmt: yield_expr
;

raise_stmt: RAISE
	  | RAISE test
          | RAISE test FROM test
;

import_stmt: import_name
		   | import_from
;

import_name: IMPORT dotted_as_names {}
;

import_from: FROM from_part IMPORT import_part
;

from_part: DOT
		 | ELLIPSIS
		 | dotted_name
;

import_part: STAR
		   | LPAR import_as_names RPAR
		   | import_as_names
;

import_as_name: NAME opt_as_name
;

dotted_as_name: dotted_name opt_as_name
;

import_as_names: import_as_name comma_import_as_name_star opt_comma
;

dotted_as_names: dotted_as_name comma_dotted_as_name_star
;

dotted_name: NAME dot_name_star
;

global_stmt: GLOBAL NAME comma_name_star
;

nonlocal_stmt: NONLOCAL NAME comma_name_star
;

assert_stmt: ASSERT test opt_comma_test
;

compound_stmt: if_stmt { $$ = $1; }
             | while_stmt { $$ = $1; }
             | for_stmt { $$ = $1; }
             | try_stmt { $$ = $1; }
             | with_stmt { $$ = $1; }
             | funcdef { $$ = $1; }
             | classdef { $$ = $1; }
             | decorated { $$ = $1; }
             | async_stmt { $$ = $1; }
;

async_stmt: ASYNC funcdef
          | ASYNC with_stmt
          | ASYNC for_stmt
;                

if_stmt: IF namedexpr_test COLON suite elif_test_suite_plus opt_else_suite { $$ = new_subtree(IF_NODE, NO_TYPE, 4, $2, $4, $5, $6); }
       | IF namedexpr_test COLON suite opt_else_suite { $$ = new_subtree(IF_NODE, NO_TYPE, 3, $2, $4, $5); }
;

while_stmt: WHILE namedexpr_test COLON suite ELSE COLON suite { $$ = new_subtree(WHILE_NODE, NO_TYPE, 3, $2, $4, new_subtree(ELSE_NODE, NO_TYPE, 1, $7)); }
          | WHILE namedexpr_test COLON suite { $$ = new_subtree(WHILE_NODE, NO_TYPE, 2, $1, $4); }
;

for_stmt: FOR exprlist IN testlist COLON opt_type_comment suite ELSE COLON suite { $$ = new_subtree(FOR_NODE, NO_TYPE, 4, $2, $4, $7, new_subtree(ELSE_NODE, NO_TYPE, 1, $10)); }
        | FOR exprlist IN testlist COLON opt_type_comment suite { $$ = new_subtree(FOR_NODE, NO_TYPE, 3, $2, $4, $7); }
;

try_stmt: TRY COLON suite except_suite_plus opt_else_suite opt_finally_suite
        | TRY COLON suite FINALLY COLON suite
;

with_stmt: WITH with_item comma_with_item_star COLON opt_type_comment suite
;

with_item: test opt_as_expr
;

except_clause: EXCEPT opt_test_as_name
;

suite: simple_stmt { $$ = $1; }
     | NEWLINE INDENT stmt_plus DEDENT { $$ = $3; }
;

namedexpr_test: test { $$ = $1; }
;

test: or_test
    | or_test IF or_test ELSE test
;

test_nocond: or_test
;

or_test: and_test OR or_test { $$ = new_subtree(OR_NODE, BOOL_TYPE, 2, $1, $3); }
       | and_test { $$ = $1;}
;

and_test: not_test AND and_test { $$ = new_subtree(AND_NODE, BOOL_TYPE, 2, $1, $3); }
        | not_test { $$ = $1; }
;

not_test: NOT not_test { $$ = new_subtree(NOT_NODE, BOOL_TYPE, 1, $2); }
        | comparison { $$ = $1; }
;

comparison: expr LESS comparison { $$ = new_subtree(LESS_NODE, BOOL_TYPE, 2, $1, $3); }
          | expr GREATER comparison { $$ = new_subtree(GREATER_NODE, BOOL_TYPE, 2, $1, $3); }
          | expr EQEQUAL comparison { $$ = new_subtree(EQEQ_NODE, BOOL_TYPE, 2, $1, $3); }
          | expr GREATEREQUAL comparison { $$ = new_subtree(GREATEREQUAL_NODE, BOOL_TYPE, 2, $1, $3); }
          | expr LESSEQUAL comparison { $$ = new_subtree(LESSEQUAL_NODE, BOOL_TYPE, 2, $1, $3); }
          | expr NOTEQUAL comparison { $$ = new_subtree(NOTEQUAL_NODE, BOOL_TYPE, 2, $1, $3); }
          | expr IN comparison { $$ = new_subtree(IN_NODE, BOOL_TYPE, 2, $1, $3); }
          | expr NOT IN comparison { $$ = new_subtree(NOTIN_NODE, BOOL_TYPE, 2, $1, $3); }
          | expr IS comparison { $$ = new_subtree(IS_NODE, BOOL_TYPE, 2, $1, $3); }
          | expr IS NOT comparison { $$ = new_subtree(ISNOT_NODE, BOOL_TYPE, 2, $1, $3); }
          | expr { $$ = $1; }
;

expr: xor_expr VBAR expr { $$ = new_subtree(BIT_OR_NODE, NO_TYPE, 2, $1, $3); }
    | xor_expr { $$ = $1; }
;

xor_expr: and_expr CIRCUMFLEX xor_expr { $$ = new_subtree(BIT_XOR_NODE, NO_TYPE, 2, $1, $3); }
        | and_expr { $$ = $1; }
;

and_expr: shift_expr AMPER and_expr { $$ = new_subtree(BIT_AND_NODE, NO_TYPE, 2, $1, $3); }
        | shift_expr { $$ = $1; }
;

shift_expr: arith_expr LEFTSHIFT shift_expr { $$ = new_subtree(LEFTSHIFT_NODE, NO_TYPE, 2, $1, $3); }
          | arith_expr RIGHTSHIFT shift_expr { $$ = new_subtree(RIGHTSHIFT_NODE, NO_TYPE, 2, $1, $3); }
          | arith_expr { $$ = $1; }
;

arith_expr: term PLUS arith_expr { $$ = new_subtree(PLUS_NODE, NO_TYPE, 2, $1, $3); }
          | term MINUS arith_expr { $$ = new_subtree(MINUS_NODE, NO_TYPE, 2, $1, $3); }
          | term  { $$ = $1; }
;

term: factor STAR term { $$ = new_subtree(MULTIPLY_NODE, NO_TYPE, 2, $1, $3); }
    | factor AT term { $$ = new_subtree(MATRIXMULTIPLY_NODE, NO_TYPE, 2, $1, $3); }
    | factor SLASH term { $$ = new_subtree(DIVISION_NODE, NO_TYPE, 2, $1, $3); }
    | factor PERCENT term { $$ = new_subtree(MOD_NODE, NO_TYPE, 2, $1, $3); }
    | factor DOUBLESLASH term { $$ = new_subtree(INTEGERDIVISION_NODE, NO_TYPE, 2, $1, $3); }
    | factor { $$ = $1; }
;

factor: PLUS factor { $$ = new_subtree(PLUS_NODE, NO_TYPE, 1, $2); }
      | MINUS factor { $$ = new_subtree(MINUS_NODE, NO_TYPE, 1, $2); }
      | TILDE factor { $$ = new_subtree(TILDE_NODE, NO_TYPE, 1, $2); }
      | power { $$ = $1; }
;

power: atom_expr  { $$ = $1; }
     | atom_expr DOUBLESTAR factor { $$ = new_subtree(POWER_NODE, NO_TYPE, 2, $1, $3); }
;

atom_expr: opt_await atom trailer_plus { add_child($2, $3); $$ = $2; }
         | opt_await atom { $$ = $2; }
;

atom: LPAR RPAR { $$ = new_node(PARS_NODE, 0, NO_TYPE); }
    | LPAR yield_expr RPAR { $$ = new_subtree(PARS_NODE, NO_TYPE, 1, $2); }
    | LPAR testlist_comp RPAR { $$ = new_subtree(PARS_NODE, NO_TYPE, 1, $2); }
    | LSQB RSQB { $$ = new_node(LIST_NODE, 0, NO_TYPE); }
    | LSQB subscriptlist RSQB { $$ = $2; }
    | LBRACE RBRACE { $$ = new_node(DICT_NODE, 0, NO_TYPE); }
    | LBRACE dictorsetmaker RBRACE { $$ = new_subtree(DICT_NODE, NO_TYPE, 1, $2); }
    | NAME { $$ = new_node(NAME_NODE, 0, NO_TYPE); }
    | NUMBER { $$ = new_node(NUMBER_NODE, 0, NO_TYPE); set_node_string_data($$, yytext);}
    | STRING { $$ = new_node(STRING_NODE, 0, STR_TYPE); }
    | ELLIPSIS { $$ = new_node(ELLIPSIS_NODE, 0, NO_TYPE); }
    | NONE { $$ = new_node(NONE_NODE, 0, NO_TYPE); }
    | TRUE { $$ = new_node(BOOL_VAL_NODE, 1, BOOL_TYPE); }
    | FALSE { $$ = new_node(BOOL_VAL_NODE, 0, BOOL_TYPE); }
;

testlist_comp: namedexpr_test comp_for
             | testlist { $$ = $1; }
;

trailer: LPAR RPAR { $$ = new_node(ARGLIST_NODE, 0, NO_TYPE); }
       | LPAR arglist RPAR { $$ = $2; }
       | LSQB subscriptlist RSQB { $$ = $2; }
       | DOT NAME { $$ = new_subtree(LIST_NODE, NO_TYPE, 1, $2); }
;

subscriptlist: subscript COMMA subscriptlist { add_child($3, $1); $$ = $3; printf("Adiciona comma subscript\n");}
             | subscript opt_comma { $$ = new_subtree(LIST_NODE, NO_TYPE, 1, $1); }
;

subscript: test
	 | opt_test COLON opt_test opt_sliceop
;

sliceop: COLON opt_test 
;

exprlist: expr COMMA exprlist { add_child($3, $1); $$ = $3; }
        | expr opt_comma { $$ = new_subtree(EXPRLIST_NODE, NO_TYPE, 1, $1); }
;

testlist: test COMMA testlist { add_child($3, $1); $$ = $3; }
        | test opt_comma { $$ = new_subtree(TESTLIST_NODE, NO_TYPE, 1, $1); }
;

dictorsetmaker: dictorsetmaker1
              | dictorsetmaker2
;

dictorsetmaker1: test COLON test comp_for
               | test COLON test comma_dict1_star opt_comma
               | DOUBLESTAR expr comp_for
               | DOUBLESTAR expr comma_dict1_star opt_comma
;

dictorsetmaker2: test comp_for
               | test 
;

classdef: CLASS NAME  opt_par_arglist COLON suite
;

arglist: argument1 COMMA arglist { add_child($3, $1); $$ = $3; }
       | argument1 opt_comma { $$ = new_subtree(ARGLIST_NODE, NO_TYPE, 1, $1); }
;

argument1: test
         | test comp_for
         | test COLONEQUAL test
         | test EQUAL test
         | DOUBLESTAR test
         | STAR test
;

comp_iter: comp_for
		 | comp_if
;

sync_comp_for: FOR exprlist IN or_test
			 | FOR exprlist IN or_test comp_iter
;

comp_for: sync_comp_for
		| ASYNC sync_comp_for
;

comp_if: IF test_nocond
	   | IF test_nocond comp_iter
;

yield_expr: YIELD 
		  | YIELD yield_arg
;

yield_arg: FROM test
		 | testlist_star_expr
;

func_body_suite: simple_stmt { $$ = $1; }
	       | NEWLINE INDENT stmt_plus DEDENT { $$ = $3; }
  	       | NEWLINE TYPE_COMMENT NEWLINE INDENT stmt_plus DEDENT { $$ = $5; }
;

%%

// Primitive error handling.
void yyerror (char const *s) {
    printf("SYNTAX ERROR (%d): %s\n", yylineno, s);
    exit(EXIT_FAILURE);
}

void segunda_passada(AST* root) {
    if(get_kind_node(root) == NAME_NODE){
        set_name_node(root, names_list.last_text[position_f++]);
    }
    
	if(get_kind_node(root) == FUNCDEF_NODE){
        set_name_node(root, names_list.last_text[position_f++]);
        add_var(vt, get_name_node(root), 0, NO_TYPE, 1, get_node_count(get_node_child(root, 1)));
	}

    if(get_kind_node(root) == STRING_NODE){
        set_node_string_data(root, get_string(st,position++));
    }

    if(get_kind_node(root) == NUMBER_NODE){
        set_node_string_data(root, numbers_list.last_text[position_numbers++]);
    }

    if(get_kind_node(root) == BOOL_VAL_NODE){
        set_node_string_data(root, bool_list.last_text[position_boolean++]);
    }

    int i = 0;
    int children_count = get_node_count(root);
	for(i = 0; i < children_count; i++){
		segunda_passada(get_node_child(root, i));
	}
}

char* verify_builtin_func(char* name){
    int i = 0;
    for(i = 0; i < builtin_funcs_n ; i++){
        if(strcmp(builtin_funcs[i],name) == 0)
            return name;
    }
    return NULL;
}
//terceira passada
void verify_func_calls(AST* root) {
    
    // Se é uma função
	if( (get_kind_node(root) == NAME_NODE) && (get_node_count(root) > 0) ){
        if( get_kind_node(get_node_child(root, 0)) == ARGLIST_NODE ){
            if (verify_builtin_func(get_name_node(root)) != NULL){
                set_kind_node(root, FUNC_BUILTIN_NODE);
            }else{
                // Verifica se está na tabela de símbolos (VarTable)
                int pos = lookup_var(vt, get_name_node(root));
                if (pos == -1){
                    printf("ERROR: Function \"%s\" is not defined.\n",get_name_node(root));
                    exit(EXIT_FAILURE);
                }else{
                    if(get_child_count(get_node_child(root,0)) != get_n_args(vt, pos)){
                        printf("ERROR: Wrong number of pars on function \"%s\". Expected %d, but received %d.\n",get_name_node(root),get_n_args(vt, pos),get_child_count(get_node_child(root,0)));
                        exit(EXIT_FAILURE);
                    }
                }
            } 
        }
	}
    
    int i = 0;
    int children_count = get_node_count(root);
	for(i = 0; i < children_count; i++){
		verify_func_calls(get_node_child(root, i));
    }  
}

// para operadores do tipo PLUS e MINUS
Type verifica_precedencia_tipo_1(Type t1, Type t2){
    if(t1 == NO_TYPE || t2 == NO_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
        exit(EXIT_FAILURE);
    }
    if(t1 == INT_TYPE){
        switch(t2){
            case INT_TYPE:
                return INT_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return INT_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == REAL_TYPE){
        switch(t2){
            case INT_TYPE:
                return REAL_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return REAL_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == BOOL_TYPE){
        switch(t2){
            case INT_TYPE:
                return INT_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return INT_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == STR_TYPE){
        if(t2 == STR_TYPE){
            return STR_TYPE;
        }else{
            printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
            exit(EXIT_FAILURE);
        }
    }
    printf("TYPE ERROR: compilation error(1).");
    exit(EXIT_FAILURE);
}

// para operadores do tipo MULTIPLY
Type verifica_precedencia_tipo_2(Type t1, Type t2){
    if(t1 == NO_TYPE || t2 == NO_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
        exit(EXIT_FAILURE);
    }
    if(t1 == INT_TYPE){
        switch(t2){
            case INT_TYPE:
                return INT_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return INT_TYPE;
            case STR_TYPE:
                return STR_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == REAL_TYPE){
        switch(t2){
            case INT_TYPE:
                return REAL_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return REAL_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == BOOL_TYPE){
        switch(t2){
            case INT_TYPE:
                return INT_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return INT_TYPE;
            case STR_TYPE:
                return STR_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == STR_TYPE){
        switch(t2){
            case INT_TYPE:
                return STR_TYPE;
            case BOOL_TYPE:
                return STR_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    printf("TYPE ERROR: compilation error(2).");
    exit(EXIT_FAILURE);
}

// para operadores do tipo DIVISION
Type verifica_precedencia_tipo_3(Type t1, Type t2){
    if(t1 == NO_TYPE || t2 == NO_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
        exit(EXIT_FAILURE);
    }
    if(t1 == STR_TYPE || t2 == STR_TYPE){
        printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
        exit(EXIT_FAILURE);
    }
    return REAL_TYPE;
}

// para operadores do tipo INTEGERDIVISION
Type verifica_precedencia_tipo_4(Type t1, Type t2){
    if(t1 == NO_TYPE || t2 == NO_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
        exit(EXIT_FAILURE);
    }
    if(t1 == STR_TYPE || t2 == STR_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
        exit(EXIT_FAILURE);
    }
    if(t1 == REAL_TYPE || t2 == REAL_TYPE){
        return REAL_TYPE;
    }
    return INT_TYPE;
}


// Verifica variáveis agora retornará o tipo
Type verifica_variaveis(AST* root) {
    
    NodeKind type_of_root = get_kind_node(root);
    // printf("Verificando tipo: %d - %s\n",type_of_root,kind2str(type_of_root));

    if(type_of_root == ASSIGN_NODE){
        // Infere Tipo do que estiver a direita
        Type t = verifica_variaveis(get_node_child(root,1));

        //Atualiza o name a esquerda
        int aux = lookup_var(vt, get_name_node(get_node_child(root,0)));
        if(aux == -1){
            //Adiciona na tabela
            add_var(vt, get_name_node(get_node_child(root,0)), 0, t, 0, 0);
        }
        else{
            //Verifica se o tipo é igual a t
            if(get_type(vt,aux) != t){
                printf("TYPE ERROR: variable expects type %s but received type %s.\n", get_text(get_type(vt,aux)), get_text(t));
                exit(EXIT_FAILURE);
            }
        }

        return t;
    }   

    if(type_of_root == PLUS_NODE || type_of_root == MINUS_NODE || type_of_root == MULTIPLY_NODE || type_of_root == DIVISION_NODE){
        int count = get_child_count(root);
        if (count == 1){
            Type t1 = verifica_variaveis(get_node_child(root,0));
            return t1;
        }
        else{
            Type t1 = verifica_variaveis(get_node_child(root,0));
            Type t2 = verifica_variaveis(get_node_child(root,1));
            if(type_of_root == PLUS_NODE || type_of_root == MINUS_NODE)
                return verifica_precedencia_tipo_1(t1,t2);
            if(type_of_root == MULTIPLY_NODE)
                return verifica_precedencia_tipo_2(t1,t2);
            if(type_of_root == DIVISION_NODE)
                return verifica_precedencia_tipo_3(t1,t2);
        } 
    }

    if(type_of_root == NUMBER_NODE){
        if(strchr(get_data(root), '.') != NULL){
            return REAL_TYPE;
        }
        return INT_TYPE;
    }

    if(type_of_root == STRING_NODE){
        return STR_TYPE;
    }

    //Se for um NAME (como já tratamos o caso em que está a esquerda de um ASSIGN, agora é só dar lookup sempre que aparecer um NAME)
    if(type_of_root == NAME_NODE){
        int aux = lookup_var(vt, get_name_node(root));
        if(aux == -1){
            printf("ERROR: variable %s not declared\n", get_name_node(root));
            exit(EXIT_FAILURE);
        }
        return get_type(vt,aux);
    }

    if(type_of_root == FOR_NODE){
        AST* exprlist = get_node_child(root,0); 
        int exprlist_count = get_node_count(exprlist);
        for(int i = 0; i < exprlist_count; i++){
            add_var(vt, get_name_node(get_node_child(exprlist, i)), 0, NO_TYPE, 0, 0);
        }
    }

    if(type_of_root == FUNCDEF_NODE){
        AST* arglist = get_node_child(root,1);
        //Adiciona cada um dos filhos na tabela
        int arglist_count = get_node_count(arglist);
        for(int i = 0; i < arglist_count; i++){
            add_var(vt, get_name_node(get_node_child(arglist, i)), 0, NO_TYPE, 0, 0);
        }
    }

    int children_count = get_node_count(root);
    for(int i = 0; i < children_count; i++){
        verifica_variaveis(get_node_child(root, i));
    }
    return NO_TYPE; 
}

int main() {
    vt = create_var_table();
    st = create_str_table();

    lex_init();
    yyparse();
    
    // for(int i = 0; i < names_list.count; i++){
    //     printf("Index:%d, %s\n",i,names_list.last_text[i]);
    // }

	segunda_passada(root);
    verify_func_calls(root);
    verifica_variaveis(root);

    printf("PARSE SUCCESSFUL!\n");

    print_dot(root);

    print_str_table(st);
    print_var_table(vt);
    free_str_table(st);
    free_var_table(vt);
    yylex_destroy();    // To avoid memory leaks within flex...

    return 0;
}
