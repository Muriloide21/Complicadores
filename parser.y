%{
#include <stdio.h>
#include <stdlib.h>
#include "parser.h"

int yylex(void);
int yylex_destroy(void);
void yyerror(char const *s);

extern char *yytext;
extern int yylineno;
%}

%token AND AMPER AMPEREQUAL ARROW AS ASSERT EQUAL ASYNC AT ATEQUAL AWAIT BREAK CLASS COLON COLONEQUAL COMMA CONTINUE DEDENT DEF DEL DOT DOUBLESLASH DOUBLESLASHEQUAL DOUBLESTAR DOUBLESTAREQUAL EQEQUAL ELIF ELLIPSIS ELSE ENDMARKER EXCEPT FALSE FOR FINALLY FROM GREATEREQUAL GLOBAL GREATER IF IMPORT IN INDENT IS LAMBDA LSQB LBRACE LESSEQUAL LPAR LEFTSHIFT LEFTSHIFTEQUAL LESS MINUS MINUSEQUAL NAME NOTEQUAL NEWLINE NONE NONLOCAL NOT NUMBER OR VBAR VBAREQUAL PASS PERCENT PERCENTEQUAL PLUS PLUSEQUAL RAISE RSQB RBRACE RETURN RPAR RIGHTSHIFT RIGHTSHIFTEQUAL SEMICOLON SLASH SLASHEQUAL STAR STAREQUAL STRING TILDE TRUE TRY TYPE_COMMENT WITH WHILE CIRCUMFLEX CIRCUMFLEXEQUAL YIELD

%start program

%%

// REGRAS COMPLEMENTARES

newline_or_stmt_star: %empty
                    | newline_or_stmt_star NEWLINE
                    | newline_or_stmt_star stmt
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

comma_argument_star: %empty
				           | comma_argument_star COMMA opt_type_comment argument

opt_assign_test: %empty
			   | EQUAL test
;

opt_comma: %empty
         | COMMA
;

opt_colon_test: %empty
			        | COLON test
;

semi_small_stmt_star: %empty
                    | semi_small_stmt_star SEMICOLON small_stmt
;

opt_semi: %empty
		    | SEMICOLON
;

assing_yield_or_test_plus: EQUAL yield_expr
                          | EQUAL testlist_star_expr
                          | assing_yield_or_test_plus EQUAL yield_expr
                          | assing_yield_or_test_plus EQUAL testlist_star_expr
;

opt_assing_yield_or_test: %empty
                        | EQUAL yield_expr
                        | EQUAL testlist_star_expr
;

comma_test_star_expr_star: %empty
                          | comma_test_star_expr_star COMMA test
                          | comma_test_star_expr_star COMMA star_expr
;

opt_testlist_star_expr: %empty
                      | testlist_star_expr
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

elif_test_suite_star: %empty
                    | elif_test_suite_star ELIF namedexpr_test COLON suite
;

opt_else_suite: %empty
              | ELSE COLON suite
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

stmt_plus: stmt
         | stmt_plus stmt
;

opt_colonass_test: %empty
                 | COLONEQUAL test
;

or_and_test_star: %empty
                | or_and_test_star OR and_test
;

and_not_test_star: %empty
                 | and_not_test_star AND not_test
;

comp_op_expr_star: %empty
                 | comp_op_expr_star comp_op expr
;

or_xor_expr_star: %empty
                | or_xor_expr_star VBAR xor_expr
;

xor_and_expr_star: %empty
                 | xor_and_expr_star CIRCUMFLEX and_expr
;

and_shift_expr_star: %empty
                   | and_shift_expr_star AMPER shift_expr
;

shift_arith_expr_star: %empty
                     | shift_arith_expr_star LEFTSHIFT arith_expr
                     | shift_arith_expr_star RIGHTSHIFT arith_expr
;

op_term_star: %empty
            | op_term_star PLUS term
            | op_term_star MINUS term
;

op_factor_star: %empty
              | op_factor_star STAR factor
              | op_factor_star AT factor
              | op_factor_star SLASH factor
              | op_factor_star PERCENT factor
              | op_factor_star DOUBLESLASH factor
;

opt_await: %empty
         | AWAIT
;

trailer_star: %empty
			      | trailer_star trailer
;

string_plus: STRING
           | string_plus STRING
;

comma_namedexpr_test_star_expr_star: %empty
                                   | comma_namedexpr_test_star_expr_star COMMA namedexpr_test
                                   | comma_namedexpr_test_star_expr_star COMMA star_expr
;

comma_subscript_star: %empty
                    | comma_subscript_star COMMA subscript
;

opt_test: %empty
        | test
;

opt_sliceop: %empty
           | sliceop
;

comma_expr_star_expr_star: %empty
                         | comma_expr_star_expr_star COMMA expr
                         | comma_expr_star_expr_star COMMA star_expr
;

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

program: file_input
   //  | single_input // Removida de acordo com sugestão do professor
   //  | eval_input   // Removida de acordo com sugestão do professor
;

file_input: newline_or_stmt_star ENDMARKER
;

decorator: AT dotted_name opt_par_arglist NEWLINE
;

decorators: decorator_plus
;

decorated: decorators classdef
         | decorators funcdef
         | decorators async_funcdef
;

// async_funcdef: ASYNC funcdef
async_funcdef: ASYNC funcdef
;

// funcdef: 'def' NAME parameters ['->' test] ':' [TYPE_COMMENT] func_body_suite
funcdef: DEF NAME parameters opt_arrow_test COLON opt_type_comment func_body_suite
;

// ---
// EZ: Simplified version of function parameters and arguments.

// parameters: '(' [typedargslist] ')'
parameters: LPAR RPAR
		  | LPAR typedargslist RPAR
;

// arguments: argument (',' [TYPE_COMMENT] argument)*
arguments: argument comma_argument_star
;

// argument: tfpdef ['=' test]
argument: tfpdef opt_assign_test
;

typedargslist: arguments
;

// tfpdef: NAME [':' test]
tfpdef: NAME opt_colon_test
;

// ---

// stmt: simple_stmt | compound_stmt
stmt: simple_stmt
	| compound_stmt
;

// simple_stmt: small_stmt (';' small_stmt)* [';'] NEWLINE
simple_stmt: small_stmt semi_small_stmt_star opt_semi NEWLINE
;

// small_stmt: (expr_stmt | del_stmt | pass_stmt | flow_stmt |
//              import_stmt | global_stmt | nonlocal_stmt | assert_stmt)
small_stmt: expr_stmt
		  | del_stmt
		  | pass_stmt
		  | flow_stmt
		  | import_stmt
		  | global_stmt
		  | nonlocal_stmt
		  | assert_stmt
;

// expr_stmt: testlist_star_expr (annassign | augassign (yield_expr|testlist) |
//                      [('=' (yield_expr|testlist_star_expr))+ [TYPE_COMMENT]] )
expr_stmt: testlist_star_expr annassign
		 | testlist_star_expr augassign yield_expr
		 | testlist_star_expr augassign testlist
		 | testlist_star_expr
		 | testlist_star_expr assing_yield_or_test_plus opt_type_comment
;

// annassign: ':' test ['=' (yield_expr|testlist_star_expr)]
annassign: COLON test opt_assing_yield_or_test
;

// testlist_star_expr: (test|star_expr) (',' (test|star_expr))* [',']
testlist_star_expr: test comma_test_star_expr_star opt_comma
				  | star_expr comma_test_star_expr_star opt_comma
;

// augassign: ('+=' | '-=' | '*=' | '@=' | '/=' | '%=' | '&=' | '|=' | '^=' |
//             '<<=' | '>>=' | '**=' | '//=')
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

// del_stmt: 'del' exprlist
del_stmt: DEL exprlist
;

// pass_stmt: 'pass'
pass_stmt: PASS
;

// flow_stmt: break_stmt | continue_stmt | return_stmt | raise_stmt | yield_stmt
flow_stmt: break_stmt
		 | continue_stmt
		 | return_stmt
		 | raise_stmt
		 | yield_stmt
;

// break_stmt: 'break'
break_stmt: BREAK
;

// continue_stmt: 'continue'
continue_stmt: CONTINUE
;

// return_stmt: 'return' [testlist_star_expr]
return_stmt: RETURN opt_testlist_star_expr
;

// yield_stmt: yield_expr
yield_stmt: yield_expr
;

// raise_stmt: 'raise' [test ['from' test]]
raise_stmt: RAISE
		  | RAISE test
		  | RAISE test FROM test
;

// import_stmt: import_name | import_from
import_stmt: import_name
		   | import_from
;

// import_name: 'import' dotted_as_names
import_name: IMPORT dotted_as_names
;

// import_from: ('from' (('.' | '...')* dotted_name | ('.' | '...')+)
//               'import' ('*' | '(' import_as_names ')' | import_as_names))
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

// ('*' | '(' import_as_names ')' | import_as_names)
import_part: STAR
		   | LPAR import_as_names RPAR
		   | import_as_names
;

// import_as_name: NAME ['as' NAME]
import_as_name: NAME opt_as_name
;

// dotted_as_name: dotted_name ['as' NAME]
dotted_as_name: dotted_name opt_as_name
;

// import_as_names: import_as_name (',' import_as_name)* [',']
import_as_names: import_as_name comma_import_as_name_star opt_comma
;

// dotted_as_names: dotted_as_name (',' dotted_as_name)*
dotted_as_names: dotted_as_name comma_dotted_as_name_star
;

// dotted_name: NAME ('.' NAME)*
dotted_name: NAME dot_name_star
;

// global_stmt: 'global' NAME (',' NAME)*
global_stmt: GLOBAL NAME comma_name_star
;

// nonlocal_stmt: 'nonlocal' NAME (',' NAME)*
nonlocal_stmt: NONLOCAL NAME comma_name_star
;

assert_stmt: ASSERT test opt_comma_test
;

compound_stmt: if_stmt
             | while_stmt
             | for_stmt
             | try_stmt
             | with_stmt
             | funcdef
             | classdef
             | decorated
             | async_stmt
;

async_stmt: ASYNC funcdef
          | ASYNC with_stmt
          | ASYNC for_stmt
;

if_stmt: IF namedexpr_test COLON suite elif_test_suite_star opt_else_suite
;

while_stmt: WHILE namedexpr_test COLON suite opt_else_suite
;

for_stmt: FOR exprlist IN testlist COLON opt_type_comment suite opt_else_suite
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

suite: simple_stmt
     | NEWLINE INDENT stmt_plus DEDENT
;

namedexpr_test: test opt_colonass_test
;

test: or_test
    | or_test IF or_test ELSE test
    | lambdef
;

test_nocond: or_test
           | lambdef_nocond
;

lambdef: LAMBDA COLON test
//     | LAMBDA varargslist COLON test // Varargslist removida de acordo com indicação do professor.
;

lambdef_nocond: LAMBDA COLON test_nocond
//            | LAMBDA varargslist COLON test_nocond // Varargslist removida de acordo com indicação do professor.
;

or_test: and_test or_and_test_star
;

and_test: not_test and_not_test_star
;

not_test: NOT not_test
        | comparison
;

comparison: expr comp_op_expr_star
;

comp_op: LESS
       | GREATER
       | EQEQUAL
       | GREATEREQUAL
       | LESSEQUAL
       | NOTEQUAL
       | IN
       | NOT IN
       | IS
       | IS NOT
;

star_expr: STAR expr
;

expr: xor_expr or_xor_expr_star
;

xor_expr: and_expr xor_and_expr_star
;

and_expr: shift_expr and_shift_expr_star
;

shift_expr: arith_expr shift_arith_expr_star
;

arith_expr: term op_term_star
;

term: factor op_factor_star
;

factor: PLUS factor
      | MINUS factor
      | TILDE factor
      | power
;

power: atom_expr
     | atom_expr DOUBLESTAR factor
;

atom_expr: opt_await atom trailer_star
;

atom: LPAR RPAR
    | LPAR yield_expr RPAR
    | LPAR testlist_comp RPAR
    | LSQB RSQB
    | LSQB testlist_comp RSQB
    | LBRACE RBRACE
    | LBRACE dictorsetmaker RBRACE
    | NAME
    | NUMBER
    | string_plus
    | ELLIPSIS
    | NONE
    | TRUE
    | FALSE
;

testlist_comp: namedexpr_test comp_for
             | namedexpr_test comma_namedexpr_test_star_expr_star opt_comma
             | star_expr comp_for
             | star_expr comma_namedexpr_test_star_expr_star opt_comma
;

trailer: LPAR RPAR
       | LPAR arglist RPAR
       | LSQB subscriptlist RSQB
       | DOT NAME
;

subscriptlist: subscript comma_subscript_star opt_comma
;

subscript: test
		     | opt_test COLON opt_test opt_sliceop
;

sliceop: COLON opt_test
;

exprlist: expr comma_expr_star_expr_star opt_comma
;

testlist: test comma_test_star opt_comma
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
               | test comma_test_star_expr_star opt_comma
               | star_expr comp_for
               | star_expr comma_test_star_expr_star opt_comma
;

classdef: CLASS NAME opt_par_arglist COLON suite
;

arglist: argument1 comma_argument_star opt_comma
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

func_body_suite: simple_stmt
			         | NEWLINE INDENT stmt_plus DEDENT
  			       | NEWLINE TYPE_COMMENT NEWLINE INDENT stmt_plus DEDENT
;

%%

// Primitive error handling.
void yyerror (char const *s) {
    printf("SYNTAX ERROR (%d): %s\n", yylineno, s);
    exit(EXIT_FAILURE);
}

int main() {
    yyparse();
    printf("PARSE SUCCESSFUL!\n");
    yylex_destroy();    // To avoid memory leaks within flex...
    return 0;
}
