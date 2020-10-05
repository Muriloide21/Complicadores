%{
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int yylex(void);
void yyerror(char const *s);

%}

%token FALSE AWAIT ELSE IMPORT PASS NONE BREAK EXCEPT IN RAISE TRUE CLASS FINALLY IS RETURN AND 
CONTINUE FOR LAMBDA TRY AS DEF FROM NONLOCAL WHILE ASSERT DEL GLOBAL NOT WITH ASYNC ELIF IF YIELD 
EQEQUAL NOTEQUAL LEFTSHIFT RIGHTSHIFT LESSEQUAL GREATEREQUAL LESS GREATER TILDE PERCENT VBAR AMPER 
DOUBLESLASH  SLASH DOUBLESTAR STAR MINUS PLUS CIRCUMFLEX EQUAL COMMA COLON LPAR RPAR LSQB RSQB 
LBRACE RBRACE AT DOT ELLIPSIS PLUSEQUAL MINEQUAL COLONEQUAL DOUBLESTAREQUAL STAREQUAL DOUBLESLASHEQUAL 
SLASHEQUAL ATEQUAL PERCENTEQUAL AMPEREQUAL VBAREQUAL CIRCUMFLEXEQUAL RIGHTSHIFTEQUAL LEFTSHIFTEQUAL STRING NAME NUMBER INDENT DEDENT
ARROW NEWLINE OR TYPE_COMMENT SEMICOLON

%%

start_program: start_program single_input
			 | start_program file_input
			 | start_program func_type_input
			 | start_program eval_input
			 | %empty
;
single_input: NEWLINE 
            | simple_stmt 
            | compound_stmt NEWLINE
;

newline_kleene: newline_kleene NEWLINE
         	  | NEWLINE
              | %empty
;

file_input: file_input NEWLINE
          | file_input stmt
          | NEWLINE
          | stmt
          | %empty
;

eval_input: testlist newline_kleene
;   

decorator: AT dotted_name NEWLINE
        | AT dotted_as_name LPAR RPAR NEWLINE
        | AT dotted_name LPAR arglist RPAR  NEWLINE
;

decorators_fecho: decorators_fecho decorator
                | decorator
;

decorators: decorators_fecho
;

decorated: decorators classdef  
         | decorators funcdef 
         | decorators async_funcdef
;

async_funcdef: ASYNC funcdef
;

funcdef: DEF NAME parameters COLON func_body_suite
        |DEF NAME parameters ARROW test COLON func_body_suite
        |DEF NAME parameters COLON TYPE_COMMENT func_body_suite
        |DEF NAME parameters ARROW test COLON TYPE_COMMENT func_body_suite
;
parameters:LPAR RPAR
          |LPAR typedargslist RPAR
;

// comma_type_argument_fecho: comma_type_argument_fecho COMMA TYPE_COMMENT argument
//                          | comma_type_argument_fecho COMMA argument
//                          | COMMA TYPE_COMMENT argument
//                          | COMMA argument 
//                          | %empty
// ;

// typedargslist: (
//   (tfpdef ['=' test] (',' [TYPE_COMMENT] tfpdef ['=' test])* ',' [TYPE_COMMENT] '/' [',' [ [TYPE_COMMENT] tfpdef ['=' test] (
//         ',' [TYPE_COMMENT] tfpdef ['=' test])* (TYPE_COMMENT | [',' [TYPE_COMMENT] [
//         '*' [tfpdef] (',' [TYPE_COMMENT] tfpdef ['=' test])* (TYPE_COMMENT | [',' [TYPE_COMMENT] ['**' tfpdef [','] [TYPE_COMMENT]]])
//       | '**' tfpdef [','] [TYPE_COMMENT]]])
//   | '*' [tfpdef] (',' [TYPE_COMMENT] tfpdef ['=' test])* (TYPE_COMMENT | [',' [TYPE_COMMENT] ['**' tfpdef [','] [TYPE_COMMENT]]])
//   | '**' tfpdef [','] [TYPE_COMMENT]]] )
// |  (tfpdef ['=' test] (',' [TYPE_COMMENT] tfpdef ['=' test])* (TYPE_COMMENT | [',' [TYPE_COMMENT] [
//    '*' [tfpdef] (',' [TYPE_COMMENT] tfpdef ['=' test])* (TYPE_COMMENT | [',' [TYPE_COMMENT] ['**' tfpdef [','] [TYPE_COMMENT]]])
//   | '**' tfpdef [','] [TYPE_COMMENT]]])
//   | '*' [tfpdef] (',' [TYPE_COMMENT] tfpdef ['=' test])* (TYPE_COMMENT | [',' [TYPE_COMMENT] ['**' tfpdef [','] [TYPE_COMMENT]]])
//   | '**' tfpdef [','] [TYPE_COMMENT])
// )

// tfpdef: NAME COLON test
// 	  | NAME
// ;

// varargslist: vfpdef ['=' test ](',' vfpdef ['=' test])* ',' '/' [',' [ (vfpdef ['=' test] (',' vfpdef ['=' test])* [',' [
//         '*' [vfpdef] (',' vfpdef ['=' test])* [',' ['**' vfpdef [',']]]
//       | '**' vfpdef [',']]]
//   | '*' [vfpdef] (',' vfpdef ['=' test])* [',' ['**' vfpdef [',']]]
//   | '**' vfpdef [',']) ]] | (vfpdef ['=' test] (',' vfpdef ['=' test])* [',' [
//         '*' [vfpdef] (',' vfpdef ['=' test])* [',' ['**' vfpdef [',']]]
//       | '**' vfpdef [',']]]
//   | '*' [vfpdef] (',' vfpdef ['=' test])* [',' ['**' vfpdef [',']]]
//   | '**' vfpdef [',']
// )
// vfpdef: NAME;
stmt: simple_stmt 
    | compound_stmt 
;
semicolon_smallstmt_kleene: semicolon_smallstmt_kleene SEMICOLON small_stmt
                          | SEMICOLON small_stmt
                          | %empty
;
simple_stmt: small_stmt semicolon_smallstmt_kleene NEWLINE
           | small_stmt semicolon_smallstmt_kleene SEMICOLON NEWLINE
;
small_stmt: expr_stmt 
          | del_stmt 
		  | pass_stmt 
		  | flow_stmt 
          | import_stmt 
		  | global_stmt 
		  | nonlocal_stmt 
		  | assert_stmt
;

eq_yieldexpr_or_teststr_kleene_plus: eq_yieldexpr_or_teststr_kleene_plus EQUAL yield_expr
									| eq_yieldexpr_or_teststr_kleene_plus EQUAL testlist_star_expr
									| EQUAL yield_expr
									| EQUAL testlist_star_expr
;
expr_stmt: testlist_star_expr annassign yield_expr
	 | testlist_star_expr annassign testlist
	 | testlist_star_expr augassign yield_expr
	 | testlist_star_expr augassign testlist
         | eq_yieldexpr_or_teststr_kleene_plus
	 | eq_yieldexpr_or_teststr_kleene_plus TYPE_COMMENT
;
annassign: COLON test EQUAL yield_expr
		 | COLON test EQUAL testlist_star_expr
		 | COLON test
	;
testlist_star_expr: test comma_test_or_star_expr_kleene COMMA
                  | star_expr comma_test_or_star_expr_kleene COMMA
		  | test comma_test_or_star_expr_kleene
                  | star_expr comma_test_or_star_expr_kleene
	;
augassign: PLUSEQUAL 
         | MINEQUAL 
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
del_stmt: DEL exprlist
;
pass_stmt: PASS
;
flow_stmt: break_stmt 
        | continue_stmt 
        | return_stmt 
        | raise_stmt 
        | yield_stmt
;

break_stmt: BREAK
;

continue_stmt: CONTINUE
;

return_stmt: RETURN testlist_star_expr
           | RETURN
;

yield_stmt: yield_expr;

raise_stmt: RAISE test FROM test
          | RAISE test
          | RAISE
;

import_stmt: import_name 
           | import_from
;
import_name: IMPORT dotted_as_names;

dots_kleene: dots_kleene DOT
           | dots_kleene ELLIPSIS
           | DOT
           | ELLIPSIS
           | %empty
;

dots_kleene_plus: dots_kleene_plus DOT
                | dots_kleene_plus ELLIPSIS
                | DOT
                | ELLIPSIS
;

import_from: FROM dots_kleene dotted_name IMPORT STAR
           | FROM dots_kleene dotted_name IMPORT import_as_names
           | FROM dots_kleene dotted_name IMPORT LPAR import_as_names RPAR
           | FROM dots_kleene_plus IMPORT STAR
           | FROM dots_kleene_plus IMPORT import_as_names
           | FROM dots_kleene_plus IMPORT LPAR import_as_names RPAR
;

import_as_name: NAME AS NAME
              | NAME
;

dotted_as_name: dotted_name AS NAME
              | dotted_name
;

comma_import: comma_import COMMA import_as_name
            | COMMA import_as_name
            | %empty
;

import_as_names: import_as_name comma_import COMMA
               | import_as_name comma_import
;
comma_dotted: comma_dotted COMMA dotted_as_name
            | COMMA dotted_as_name
            | %empty
;
dotted_as_names: dotted_as_name comma_dotted
;
dot_name_kleene: dot_name_kleene DOT NAME
               | DOT NAME
               | %empty
;
dotted_name: NAME dot_name_kleene
;
comma_name_kleene: comma_name_kleene COMMA NAME
                 | COMMA NAME
                 | %empty
;
global_stmt: GLOBAL NAME comma_name_kleene
;
nonlocal_stmt: NONLOCAL NAME comma_name_kleene
;
assert_stmt: ASSERT test COMMA test
           | ASSERT test
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
    
elif_stmt: elif_stmt ELIF namedexpr_test COLON suite
         | ELIF namedexpr_test COLON suite
         | %empty
;
if_stmt: IF namedexpr_test COLON suite elif_stmt 
       | IF namedexpr_test COLON suite elif_stmt ELSE COLON suite
;
while_stmt: WHILE namedexpr_test COLON suite 
        | WHILE namedexpr_test COLON suite ELSE COLON suite
;
for_stmt: FOR exprlist IN testlist COLON suite
        |FOR exprlist IN testlist COLON suite ELSE COLON suite
        |FOR exprlist IN testlist COLON TYPE_COMMENT suite    
        |FOR exprlist IN testlist COLON TYPE_COMMENT suite ELSE COLON suite
;

expect_clause_suite: expect_clause_suite EXCEPT test AS NAME
                   | expect_clause_suite EXCEPT test
                   | expect_clause_suite EXCEPT
                   | EXCEPT test AS NAME COLON suite
                   | EXCEPT test COLON suite
                   | EXCEPT COLON suite
        ;   
try_stmt: TRY COLON suite expect_clause_suite
        | TRY COLON suite expect_clause_suite FINALLY COLON suite 
        | TRY COLON suite expect_clause_suite ELSE COLON suite
        | TRY COLON suite expect_clause_suite ELSE COLON suite FINALLY COLON suite 
        | TRY COLON suite expect_clause_suite FINALLY COLON suite
;
comma_with_item: comma_with_item COMMA with_item
                |COMMA with_item
                |%empty
;
with_stmt: WITH with_item comma_with_item COLON suite
         | WITH with_item comma_with_item COLON TYPE_COMMENT suite
;
with_item: test 
         |test AS expr
;
stmt_kleene_plus: stmt_kleene_plus stmt
                | stmt
;
suite: simple_stmt 
     | NEWLINE INDENT stmt_kleene_plus DEDENT
;
namedexpr_test: test COLONEQUAL test
              | test
;
test: or_test IF or_test ELSE test
    | or_test
    | lambdef
;
test_nocond: or_test 
           | lambdef_nocond
;
lambdef: LAMBDA varargslist COLON test
       | LAMBDA COLON test
;
lambdef_nocond: LAMBDA varargslist COLON test_nocond
               LAMBDA COLON test_nocond
;
or_and_test_kleene: or_and_test_kleene OR and_test
                  | OR and_test
                  | %empty
;
or_test: and_test or_and_test_kleene;

and_not_test_kleene: and_not_test_kleene AND not_test
                   | AND not_test
                   | %empty
;
and_test: not_test and_not_test_kleene
;
not_test: NOT not_test 
        | comparison
;
comp_op_expr_kleene: comp_op_expr_kleene comp_op expr
                   | comp_op expr
                   | %empty
;
comparison: expr comp_op_expr_kleene
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
vbar_xor_kleene: vbar_xor_kleene VBAR xor_expr
               | VBAR xor_expr
               | %empty
;
expr: xor_expr vbar_xor_kleene
;
circumflex_and_expr_kleene: circumflex_and_expr_kleene CIRCUMFLEX and_expr
                          | CIRCUMFLEX and_expr
                          | %empty
;
xor_expr: and_expr circumflex_and_expr_kleene
;
amper_shift_kleene: amper_shift_kleene AMPER shift_expr
                  | AMPER shift_expr
                  | %empty
;
and_expr: shift_expr amper_shift_kleene
;
shifts_arith_expr: shifts_arith_expr LEFTSHIFT arith_expr
                 | shifts_arith_expr RIGHTSHIFT arith_expr
                 | LEFTSHIFT arith_expr
                 | RIGHTSHIFT arith_expr
                 | %empty
;
shift_expr: arith_expr shifts_arith_expr
;
plus_minus_term_kleene: plus_minus_term_kleene PLUS term
                      | plus_minus_term_kleene MINUS term
                      | PLUS term
                      | MINUS term
                      | %empty
;
arith_expr: term plus_minus_term_kleene
;
varias_coisas_factor_kleene: varias_coisas_factor_kleene STAR factor
                           | varias_coisas_factor_kleene AT factor
                           | varias_coisas_factor_kleene SLASH factor
                           | varias_coisas_factor_kleene PERCENT factor
                           | varias_coisas_factor_kleene DOUBLESLASH factor
                           | STAR factor
                           | AT factor
                           | SLASH factor
                           | PERCENT factor
                           | DOUBLESLASH factor
                           | %empty
;
term: factor varias_coisas_factor_kleene
;
factor: PLUS factor
      | MINUS factor
      | TILDE factor
      | power
;
power: atom_expr DOUBLESTAR factor
     | atom_expr
;
trailer_kleene: trailer_kleene trailer
              | trailer
              | %empty
;
atom_expr: AWAIT atom trailer_kleene
         | atom trailer_kleene
;
string_kleene_plus: string_kleene_plus STRING
                  | STRING
;
atom: LPAR yield_expr RPAR
    | LPAR testlist_comp RPAR
    | LPAR RPAR
    | LSQB testlist_comp RSQB
    | LSQB RSQB
    | LBRACE dictorsetmaker RBRACE
    | LBRACE RBRACE
    | NAME 
    | NUMBER 
    | string_kleene_plus
    | ELLIPSIS 
    | NONE 
    | TRUE 
    | FALSE
;
comma_e_o_de_cima_kleene: comma_e_o_de_cima_kleene COMMA namedexpr_test
						| comma_e_o_de_cima_kleene COMMA star_expr
                        | COMMA namedexpr_test
                        | COMMA star_expr
                        | %empty
;
testlist_comp: namedexpr_test comp_for
             | star_expr comp_for
             | namedexpr_test comma_e_o_de_cima_kleene COMMA
             | star_expr comma_e_o_de_cima_kleene COMMA
             | namedexpr_test comma_e_o_de_cima_kleene
             | star_expr comma_e_o_de_cima_kleene
;

trailer: LPAR arglist RPAR
       | LPAR RPAR
       | LSQB subscriptlist RSQB 
       | DOT NAME
;
comma_subscript_kleene: comma_subscript_kleene COMMA subscript
                      | COMMA subscript
                      | %empty
;
subscriptlist: subscript comma_subscript_kleene COMMA
             | subscript comma_subscript_kleene
;
subscript: test 
         | test COLON test sliceop 
         | test COLON test 
         | test COLON sliceop
         | COLON test sliceop 
         | test COLON 
         | COLON test 
         | COLON sliceop 
         | COLON  
;
sliceop: COLON test
       | COLON
;
comma_e_o_de_baixo_kleene: comma_e_o_de_baixo_kleene COMMA expr
                         | comma_e_o_de_baixo_kleene COMMA star_expr
                         | COMMA expr
                         | COMMA star_expr
                         | %empty
;
exprlist: expr comma_e_o_de_baixo_kleene COMMA
        | star_expr comma_e_o_de_baixo_kleene COMMA
        | expr comma_e_o_de_baixo_kleene
        | star_expr comma_e_o_de_baixo_kleene
;
comma_test_kleene: comma_test_kleene COMMA test
                 | COMMA test
                 | %empty
;
testlist: test comma_test_kleene COMMA
        | test comma_test_kleene
;
comma_test_colon_test_or_doublestar_expr_kleene: comma_test_colon_test_or_doublestar_expr_kleene COMMA test COLON test
                                               | comma_test_colon_test_or_doublestar_expr_kleene COMMA DOUBLESTAR expr
                                               | COMMA test COLON test
                                               | COMMA DOUBLESTAR expr
                                               | %empty
;
comma_test_or_star_expr_kleene: comma_test_or_star_expr_kleene COMMA test
                              | comma_test_or_star_expr_kleene COMMA star_expr
                              | COMMA test
                              | COMMA star_expr
                              | %empty
;
dictorsetmaker: test COLON test comp_for
			  | DOUBLESTAR expr comp_for
              | test COLON test comma_test_colon_test_or_doublestar_expr_kleene COMMA
              | DOUBLESTAR expr comma_test_colon_test_or_doublestar_expr_kleene COMMA
              | test COLON test comma_test_colon_test_or_doublestar_expr_kleene
              | DOUBLESTAR expr comma_test_colon_test_or_doublestar_expr_kleene
              | test comp_for
              | star_expr comp_for
              | test comma_test_or_star_expr_kleene COMMA
              | star_expr comma_test_or_star_expr_kleene COMMA
              | test comma_test_or_star_expr_kleene
              | star_expr comma_test_or_star_expr_kleene
;
classdef: CLASS NAME LPAR arglist RPAR COLON suite
        | CLASS NAME LPAR RPAR COLON suite
        | CLASS NAME COLON suite
;
comma_argument_kleene: comma_argument_kleene COMMA argument
                     | COMMA argument
                     | %empty
;
arglist: argument comma_argument_kleene
       | argument comma_argument_kleene COMMA
;

argument:  test comp_for
         | test
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
comp_for: ASYNC sync_comp_for
        | sync_comp_for
;
comp_if: IF test_nocond 
        |IF test_nocond comp_iter
;
yield_expr: YIELD
        | YIELD yield_arg
;
yield_arg: FROM test 
        | testlist_star_expr
;

func_body_suite: simple_stmt 
                |NEWLINE TYPE_COMMENT NEWLINE INDENT stmt_kleene_plus DEDENT
                |NEWLINE INDENT stmt_kleene_plus DEDENT
;

func_type_input: func_type newline_kleene
;

func_type: LPAR typelist RPAR ARROW test
        |LPAR RPAR ARROW test
;

typelist:test comma_test_kleene
        |test comma_test_kleene COMMA
        |test comma_test_kleene COMMA STAR test comma_test_kleene COMMA DOUBLESTAR test
        |test comma_test_kleene COMMA DOUBLESTAR test
        |test comma_test_kleene COMMA STAR comma_test_kleene
        |test comma_test_kleene COMMA STAR test comma_test_kleene
        |test comma_test_kleene COMMA STAR comma_test_kleene COMMA DOUBLESTAR test
        |test comma_test_kleene DOUBLESTAR test
        |test comma_test_kleene STAR test comma_test_kleene COMMA DOUBLESTAR test
        |test comma_test_kleene STAR comma_test_kleene COMMA DOUBLESTAR test
        |test comma_test_kleene STAR test comma_test_kleene
        |test comma_test_kleene STAR comma_test_kleene      
        |STAR test comma_test_kleene COMMA DOUBLESTAR test 
        |STAR comma_test_kleene COMMA DOUBLESTAR test
        |STAR test comma_test_kleene 
        |DOUBLESTAR test
;

