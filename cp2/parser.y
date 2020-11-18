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

#define CHILDREN_LIMIT 20

void lex_init(void);
int yylex(void);
int yylex_destroy(void);
void yyerror(char const *s);

void check_var(char*);
void new_var(void);

typedef struct {
    char* last_text[100];
    int count;
} mdl;

extern char *yytext;
extern int yylineno;
extern mdl names_list;

int position = 0;
int position_f = 0;

StrTable *st;
VarTable *vt;

AST *root;
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

// comma_argument_star: %empty
// 				   | comma_argument_star COMMA argument
// ;

opt_assign_test: %empty
	       | EQUAL test
;

opt_comma: %empty
         | COMMA
;

opt_colon_test: %empty
			  | COLON test
;

// semi_small_stmt_star: %empty
//                     | semi_small_stmt_star SEMICOLON small_stmt
// ;
// REMOVIDA POR CONSIDERARMOS UMA FUNCIONALIDADE POUCO UTILIZADA

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

// comma_test_star_expr_star: %empty { $$ = new_node(NOOP_NODE, 0, NO_TYPE); }
//                          | comma_test_star_expr_star COMMA test { add_child($1, $3); $$ = $1; }
//                      //  | comma_test_star_expr_star COMMA star_expr
// ;


opt_testlist_star_expr: %empty { $$ = new_node(NOOP_NODE, 0, NO_TYPE); }
                      | testlist_star_expr { $$ = $1; }
;

opt_as_name: %empty
           | AS NAME { new_var(); }
;

comma_import_as_name_star: %empty
                         | comma_import_as_name_star COMMA import_as_name
;

comma_dotted_as_name_star: %empty
                         | comma_dotted_as_name_star COMMA dotted_as_name
;

dot_name_star: %empty
             | dot_name_star DOT NAME { new_var(); }
;

comma_name_star: %empty
               | comma_name_star COMMA NAME { new_var(); }
;

opt_comma_test: %empty
              | COMMA test
;

elif_test_suite_plus: ELIF namedexpr_test COLON suite { $$ = new_subtree(ELIF_NODE, NO_TYPE, 2, $2, $4); }
                    | elif_test_suite_plus ELIF namedexpr_test COLON suite { add_child($1, new_subtree(ELIF_NODE, NO_TYPE, 2, $3, $5)); $$ = $1; }
;

// opt_else_suite: %empty { $$ = new_node(NOOP_NODE, 0, NO_TYPE); }
//               | ELSE COLON suite { $$ = $3; }
// ;

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

opt_colonass_test: %empty
                 | COLONEQUAL test
;

// or_and_test_star: %empty { $$ = new_node(NOOP_NODE, 0, NO_TYPE); }
//                 | or_and_test_star OR and_test { add_child($1, $2); }
// ;

// and_not_test_star: %empty
//                  | and_not_test_star AND not_test
// ;

// comp_op_expr_star: %empty
//                  | comp_op_expr_star comp_op expr
// ;

or_xor_expr_star: %empty
                | or_xor_expr_star VBAR xor_expr
;

xor_and_expr_star: %empty
                 | xor_and_expr_star CIRCUMFLEX and_expr
;

and_shift_expr_star: %empty
                   | and_shift_expr_star AMPER shift_expr
;

// shift_arith_expr_star: %empty
//                      | shift_arith_expr_star LEFTSHIFT arith_expr
//                      | shift_arith_expr_star RIGHTSHIFT arith_expr
// ;

// op_term_star: %empty
//             | op_term_star PLUS term
//             | op_term_star MINUS term
// ;

// op_factor_star: %empty
//               | op_factor_star STAR factor
//               | op_factor_star AT factor
//               | op_factor_star SLASH factor
//               | op_factor_star PERCENT factor
//               | op_factor_star DOUBLESLASH factor
// ;

opt_await: %empty
         | AWAIT
;

trailer_plus: trailer { $$ = $1; }
			| trailer_plus trailer { add_child($1, $2); $$ = $1; }
;

// trailer_star: %empty 
// 			| trailer_star trailer
// ;

// string_plus: STRING { $$ = new_subtree(STRING_NODE, STR_TYPE, 0); }
//            | string_plus STRING { add_child($1,$2); $$ = $1; }
// ;

// comma_namedexpr_test_star_expr_star: %empty
//                                    | comma_namedexpr_test_star_expr_star COMMA namedexpr_test
//                              //    | comma_namedexpr_test_star_expr_star COMMA star_expr
// ;

// comma_subscript_star: %empty
//                     | comma_subscript_star COMMA subscript
// ;

opt_test: %empty
        | test
;

opt_sliceop: %empty
           | sliceop
;

// comma_expr_star_expr_star: %empty
//                          | comma_expr_star_expr_star COMMA expr
//                      //  | comma_expr_star_expr_star COMMA star_expr
// ;

comma_test_star: %empty
               | comma_test_star COMMA test
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
   //  | single_input // Removida de acordo com sugestão do professor
   //  | eval_input   // Removida de acordo com sugestão do professor
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

// arguments: argument comma_argument_star
// ;

arguments: argument COMMA arguments { add_child($3, $1); $$ = $3; }
         | argument { $$ = new_subtree(PARS_NODE, NO_TYPE, 1, $1); }
;

argument: tfpdef EQUAL test { $$ = new_subtree(ASSIGN_NODE, NO_TYPE, 2, $1, $3); }
        | tfpdef { $$ = $1; }
;

// typedargslist: arguments
// ;

tfpdef: NAME opt_colon_test { $$ = new_node(NAME_NODE, 0, NO_TYPE); }
;

// ---

stmt: simple_stmt   { $$ = $1; }
    | compound_stmt { $$ = $1; }
;

simple_stmt: small_stmt opt_semi NEWLINE { $$ = $1; }
;

small_stmt: expr_stmt  { $$ = $1; }
		  | del_stmt  { $$ = $1; } //FOI
		  | pass_stmt  { $$ = $1; } //FOI
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
             //   | test comma_test_star_expr_star opt_comma
	     //   | star_expr comma_test_star_expr_star opt_comma
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

flow_stmt: break_stmt { $$ = $1; } //FOI
         | continue_stmt { $$ = $1; } //FOI
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

// ('.' | '...')* dotted_name | ('.' | '...')+)
// from_part:
//   dot_ellipsis_star dotted_name
// | DOT dot_ellipsis_star
// | ELLIPSIS dot_ellipsis_star
// ;
// EZ: This rule is not the same as the one commented, but the original Python
// rule is too annoying... I will wait if some test case needs this.
from_part: DOT
		 | ELLIPSIS
		 | dotted_name
;

import_part: STAR
		   | LPAR import_as_names RPAR
		   | import_as_names
;

import_as_name: NAME { new_var(); } opt_as_name
;

dotted_as_name: dotted_name opt_as_name
;

import_as_names: import_as_name comma_import_as_name_star opt_comma
;

dotted_as_names: dotted_as_name comma_dotted_as_name_star
;

dotted_name: NAME  { new_var(); } dot_name_star
;

global_stmt: GLOBAL NAME { new_var(); } comma_name_star
;

nonlocal_stmt: NONLOCAL NAME { new_var(); } comma_name_star
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

// namedexpr_test: test opt_colonass_test 
// ;

namedexpr_test: test { $$ = $1; }
;

test: or_test
    | or_test IF or_test ELSE test
//  | LAMBDA COLON test 
;

test_nocond: or_test
//         | LAMBDA COLON test_nocond
;

// SIMPLIFICADAS (LEVADAS PARA O LOCAL ONDE ERAM CHAMADAS):
//lambdef: LAMBDA COLON test
//     | LAMBDA varargslist COLON test // Varargslist removida de acordo com indicação do professor.
//;

//lambdef_nocond: LAMBDA COLON test_nocond
//            | LAMBDA varargslist COLON test_nocond // Varargslist removida de acordo com indicação do professor.
//;

or_test: and_test OR or_test { $$ = new_subtree(OR_NODE, BOOL_TYPE, 2, $1, $3); printf("or_test_1\n"); }
       | and_test { $$ = $1;}
;
        //     OR_NODE
        //     or_test
        //     /      \ 
        //    /        \
        // and_test    or_test

and_test: not_test AND and_test { $$ = new_subtree(AND_NODE, BOOL_TYPE, 2, $1, $3); }
        | not_test { $$ = $1; }
        // | not_test and_not_test_star
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

// comparison: expr comp_op comparison { $$ = new_subtree}
//           | expr { $$ = $1; }
// ;

// comp_op: LESS
//        | GREATER
//        | EQEQUAL
//        | GREATEREQUAL
//        | LESSEQUAL
//        | NOTEQUAL
//        | IN
//        | NOT IN
//        | IS
//        | IS NOT
// ;

// star_expr: STAR expr
// ;
// SIMPLIFICADO POIS NÃO SABEMOS O QUE SIGNIFICA
// star_expr: expr
// ;

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

//x = []   name < equal > list_node
// x[]     name > list_node

atom: LPAR RPAR { $$ = new_node(PARS_NODE, 0, NO_TYPE); }
    | LPAR yield_expr RPAR { $$ = new_subtree(PARS_NODE, NO_TYPE, 1, $2); }
    | LPAR testlist_comp RPAR { $$ = new_subtree(PARS_NODE, NO_TYPE, 1, $2); }
    | LSQB RSQB { $$ = new_node(LIST_NODE, 0, NO_TYPE); }
    //| LSQB testlist_comp RSQB { $$ = new_subtree(LIST_NODE, NO_TYPE, 1, $2); }
    | LSQB subscriptlist RSQB { $$ = $2; }
    | LBRACE RBRACE { $$ = new_node(DICT_NODE, 0, NO_TYPE); }
    | LBRACE dictorsetmaker RBRACE { $$ = new_subtree(DICT_NODE, NO_TYPE, 1, $2); }
    | NAME { $$ = new_node(NAME_NODE, 0, NO_TYPE); }
    | NUMBER { $$ = new_node(NUMBER_NODE, 0, NO_TYPE); set_node_data($$, yytext);}
    // | string_plus { $$ = $1; }
    | STRING { $$ = new_node(STRING_NODE, 0, STR_TYPE); }
    | ELLIPSIS { $$ = new_node(ELLIPSIS_NODE, 0, NO_TYPE); }
    | NONE { $$ = new_node(NONE_NODE, 0, NO_TYPE); }
    | TRUE { $$ = new_node(BOOL_VAL_NODE, 1, BOOL_TYPE); }
    | FALSE { $$ = new_node(BOOL_VAL_NODE, 0, BOOL_TYPE); }
;

// testlist_comp: namedexpr_test comp_for
//              | testlist
//             //  | star_expr comp_for
//             //  | star_expr comma_namedexpr_test_star_expr_star opt_comma
// ;

testlist_comp: namedexpr_test comp_for
             | testlist { $$ = $1; }
;

// o tipo do trailer define o tipo do nó
trailer: LPAR RPAR { $$ = new_node(ARGLIST_NODE, 0, NO_TYPE); } //funcao
       | LPAR arglist RPAR { $$ = $2; } // funcao
       | LSQB subscriptlist RSQB { $$ = $2; }
       | DOT NAME { $$ = new_subtree(LIST_NODE, NO_TYPE, 1, $2); }
;

// subscriptlist: subscript comma_subscript_star opt_comma;

subscriptlist: subscript COMMA subscriptlist { add_child($3, $1); $$ = $3; printf("Adiciona comma subscript\n");}
             | subscript opt_comma { $$ = new_subtree(LIST_NODE, NO_TYPE, 1, $1); printf("Fecha recursão subscript"); }
;

subscript: test
	 | opt_test COLON opt_test opt_sliceop
;

sliceop: COLON opt_test 
;

// exprlist: expr comma_expr_star_expr_star opt_comma
// ;

exprlist: expr COMMA exprlist { add_child($3, $1); $$ = $3; }
        | expr opt_comma { $$ = new_subtree(EXPRLIST_NODE, NO_TYPE, 1, $1); }
;

// testlist: test comma_test_star opt_comma
// ;

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
            //    | test comma_test_star_expr_star opt_comma
            //    | star_expr comp_for
            //    | star_expr comma_test_star_expr_star opt_comma
;

classdef: CLASS NAME { new_var(); } opt_par_arglist COLON suite
;

// arglist: argument1 comma_argument_star opt_comma
// ;

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

void check_var(char* rule_name) {
    // printf("Regra: %s\n", rule_name);
    // printf("variable '%s'\n", yytext);
    // int idx = lookup_var(vt, yytext);
    // if (idx == -1) {
    //     print_str_table(st);
    //     print_var_table(vt);
    //     printf("SEMANTIC ERROR (%d): variable '%s' was not declared.\n",
    //             yylineno, yytext);
    //     exit(EXIT_FAILURE);
    // }
}

void new_var() {
    // int idx = lookup_var(vt, yytext);
    // printf("Chegueeei %s\n",yytext);
    // if (idx != -1) {
    //     printf("SEMANTIC ERROR (%d): variable '%s' already declared at line %d.\n",
    //             yylineno, yytext, get_line(vt, idx));
    //     exit(EXIT_FAILURE);
    // }
    // add_var(vt, yytext, yylineno, NO_TYPE);
}

// Primitive error handling.
void yyerror (char const *s) {
    printf("SYNTAX ERROR (%d): %s\n", yylineno, s);
    exit(EXIT_FAILURE);
}


// Type unify_type(AST* root){
    
// }

void quarta_passada(AST* root) {
    // if(get_kind_node(root) == ASSIGN_NODE){
    //     int pos = lookup_var(get_name_node(get_node_child(root,0))
    //     if(pos == -1){
    //         //Insere na tabela
    //     }
    //     else{
    //         Type aux_type = get_type(vt, pos);
    //         if(unify_type(get_node_child(root,1)) != aux_type){
    //             printf("TypeError, variable %s expects type '%s'", get_name_node(get_node_child(root,0)), aux_type);
    //         }
    //     }
    //     //Unifica os tipos do que estiver a direita
    //     Type aux_type = unify_type(get_node_child(root,0), get_node_child(root,1))    
    // }
    // if(get_kind_node(root) == STRING_NODE){ return STR_TYPE; };
    // if(get_kind_node(root) == LIST_NODE){ return LIST_TYPE; };
    // if(get_kind_node(root) == BOOL_VAL_NODE){ return BOOL_TYPE; };
    // if(get_kind_node(root) == NUMBER_NODE){
    //     float num = atof(get_data(root));
    //     if (num  == floor(num)){
    //         return INT_TYPE;
    //     }
    //     else{
    //         return REAL_TYPE;
    //     }
    // }
    // int children_count = get_node_count(root);
    
	// for(i = 0; i < children_count; i++){
	// 	quarta_passada(get_node_child(root, i));
	// }
    
}

void segunda_passada(AST* root) {
    if(get_kind_node(root) == NAME_NODE){
        set_name_node(root, names_list.last_text[position_f++]);
    }
    // Se estiver na direita e for um NAME e não estiver na tabela, dá erro
    // Se estiver na direita e for string, atribui esse value e o TYPE na tabela
    
	if(get_kind_node(root) == FUNCDEF_NODE){
        set_name_node(root, names_list.last_text[position_f++]);
        //add_var(vt, get_name_node(root), 0, NO_TYPE, 1, get_node_count(get_node_child(root, 1)));
	}

    if(get_kind_node(root) == STRING_NODE){
        set_node_string_data(root, get_string(st,position++));
    }

    int i = 0;
    int children_count = get_node_count(root);
	for(i = 0; i < children_count; i++){
		segunda_passada(get_node_child(root, i));
	}
}

void verify_func_calls(AST* root) {
    
    // Se é uma função
	if( (get_kind_node(root) == NAME_NODE) && (get_node_count(root) > 0) ){
        if( get_kind_node(get_node_child(root, 0)) == ARGLIST_NODE ){
            // Verifica se está na tabela de símbolos (VarTable)
            int pos = lookup_var(vt, get_name_node(root));
            if (pos == -1){
                printf("ERROR: Function \"%s\" is not defined.\n",get_name_node(root));
                exit(EXIT_FAILURE);
            }
        }
	}
    
    int i = 0;
    int children_count = get_node_count(root);
	for(i = 0; i < children_count; i++){
		verify_func_calls(get_node_child(root, i));
    }  
}

// Mas então, testa com mais strings, vê se dá bom
//Nem eu
int main() {
    vt = create_var_table();
    st = create_str_table();

    lex_init();
    yyparse();

    printf("PARSE SUCCESSFUL!\n");

    // Tá bom
    
    printf("Size da st: %d", get_size_st(st));

    for(int i = 0; i < names_list.count; i++){
        printf("Index:%d, %s\n",i,names_list.last_text[i]);
    }

	segunda_passada(root);
    verify_func_calls(root);

    print_dot(root);

    print_str_table(st);
    print_var_table(vt);
    free_str_table(st);
    free_var_table(vt);
    yylex_destroy();    // To avoid memory leaks within flex...

    return 0;
}
