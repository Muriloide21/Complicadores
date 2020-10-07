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

// EZ: Criei dois níveis de prioridades distintos para poder usar nas regras mais para baixo.
%precedence LOW // Acabei criando um 'token' para a prioridade baixa, mas poderia usar outro.
%precedence LPAR // Aqui tem de ser '(' porque queremos que o parser seja guloso.
%precedence PLUS
%%

start_program: start_program func_type_input
             | start_program single_input
             | %empty
;
single_input: NEWLINE
            | simple_stmt
            | compound_stmt NEWLINE
;
// newline_or_stmt_fecho: newline_or_stmt_fecho NEWLINE
//                     | newline_or_stmt_fecho stmt
//                     | %empty
// ;
// file_input: newline_or_stmt_fecho
// ;
newline_fecho: newline_fecho NEWLINE
             | %empty
;
// eval_input: testlist newline_fecho
// ;
opt_arglist: arglist | %empty
;
// opt_lpar: LPAR | %empty
// ;
// opt_rpar: RPAR | %empty
// ;
decorator: AT dotted_name NEWLINE
          |  AT dotted_name LPAR opt_arglist RPAR NEWLINE
;
decorator_fecho_plus: decorator_fecho_plus decorator
                    | decorator
;
decorators: decorator_fecho_plus
;
decorated: decorators classdef
         | decorators funcdef
         | decorators async_funcdef
;

async_funcdef: ASYNC funcdef;

opt_arrow_test: ARROW test| %empty
;
opt_typecomment: TYPE_COMMENT | %empty
;
funcdef: DEF NAME parameters opt_arrow_test COLON opt_typecomment func_body_suite
;
opt_typedargslist: typedargslist | %empty
;
parameters: LPAR opt_typedargslist RPAR
;
opt_tfpdef: tfpdef | %empty;

kleene_gigante: kleene_gigante COMMA opt_typecomment tfpdef opt_equal_test
			  | %empty
;
opt_mediano: DOUBLESTAR tfpdef opt_comma opt_typecomment | %empty
;
opt_maiorzin: COMMA opt_typecomment opt_mediano | %empty
;
typecomment_or_maiorzin: TYPE_COMMENT | opt_maiorzin
;
star_e_outros_or_doublestar_e_outros: STAR opt_tfpdef kleene_gigante typecomment_or_maiorzin
									| DOUBLESTAR tfpdef opt_comma opt_typecomment
;
opt_das_estrelas: star_e_outros_or_doublestar_e_outros | %empty
;
opt_comma_opts: COMMA opt_typecomment opt_das_estrelas | %empty
;

type_comment_or_opt_comma_opts: TYPE_COMMENT | opt_comma_opts
;
or_enorme: opt_typecomment tfpdef opt_equal_test kleene_gigante type_comment_or_opt_comma_opts
  		 | star_e_outros_or_doublestar_e_outros
;
opt_enorme: or_enorme | %empty
;
opt_comma_enorme: COMMA opt_enorme | %empty
;
typedargslist: tfpdef opt_equal_test kleene_gigante COMMA opt_typecomment SLASH opt_comma_enorme
			 | tfpdef opt_equal_test kleene_gigante type_comment_or_opt_comma_opts star_e_outros_or_doublestar_e_outros
;
opt_colon_test: COLON test
;
tfpdef: NAME opt_colon_test
;
opt_equal_test: EQUAL test | %empty
;
opt_comma: COMMA | %empty
;
opt_vfpdef: vfpdef | %empty
;
opt_doublestar_vfpdef_comma: DOUBLESTAR vfpdef opt_comma | %empty
;
opt_comma_e_o_de_cima: COMMA opt_doublestar_vfpdef_comma | %empty
;
comma_vfpdef_opt_equal_test_kleene: comma_vfpdef_opt_equal_test_kleene COMMA vfpdef opt_equal_test
                                  | %empty
;
// Equivale a [STAR opt_vfpdef comma_vfpdef_opt_equal_test_kleene opt_comma_e_o_de_cima | DOUBLESTAR vfpdef opt_comma]
opt_menor_varargslist: STAR opt_vfpdef comma_vfpdef_opt_equal_test_kleene opt_comma_e_o_de_cima
                     | DOUBLESTAR vfpdef opt_comma
                     | %empty
;
opt_segundo_menor_varargslist: COMMA opt_menor_varargslist | %empty
;
opt_terceiro_menor_varargslist: vfpdef opt_equal_test comma_vfpdef_opt_equal_test_kleene opt_segundo_menor_varargslist
                              | opt_menor_varargslist
;
comma_slash: COMMA SLASH;
varargslist: vfpdef opt_equal_test comma_vfpdef_opt_equal_test_kleene comma_slash COMMA opt_terceiro_menor_varargslist
           | vfpdef opt_equal_test comma_vfpdef_opt_equal_test_kleene comma_slash
           | vfpdef opt_equal_test comma_vfpdef_opt_equal_test_kleene opt_segundo_menor_varargslist
           | STAR opt_vfpdef comma_vfpdef_opt_equal_test_kleene opt_comma_e_o_de_cima
           | DOUBLESTAR vfpdef opt_comma
;
vfpdef: NAME
;
stmt: simple_stmt | compound_stmt
;
semicolon_smallstmt_fecho: semicolon_smallstmt_fecho  SEMICOLON small_stmt
                          |%empty
;
opt_semicolon: SEMICOLON | %empty
;
simple_stmt: small_stmt semicolon_smallstmt_fecho opt_semicolon NEWLINE
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

// eq_yieldexpr_testliststar_kleene: eq_yieldexpr_testliststar_kleene

yield_expr_or_testlist: yield_expr | testlist 
;

yield_expr_or_testlist_star_expr: yield_expr | testlist_star_expr
;

equal_yield_expr_or_testlist_star_expr_plus: equal_yield_expr_or_testlist_star_expr_plus EQUAL yield_expr_or_testlist_star_expr
                                            | EQUAL yield_expr_or_testlist_star_expr
;

expr_stmt: testlist_star_expr annassign
           testlist_star_expr augassign yield_expr_or_testlist
           testlist_star_expr equal_yield_expr_or_testlist_star_expr_plus opt_typecomment
           testlist_star_expr
;

annassign: COLON test EQUAL yield_expr_or_testlist_star_expr
        | COLON test
;

comma_or_test_star_expr_kleene: comma_or_test_star_expr_kleene COMMA or_test_star_expr
                                | %empty
;
testlist_star_expr: or_test_star_expr comma_or_test_star_expr_kleene opt_comma
;

augassign: PLUSEQUAL | MINEQUAL | STAREQUAL | ATEQUAL | SLASHEQUAL | PERCENTEQUAL | AMPEREQUAL | VBAREQUAL | CIRCUMFLEXEQUAL | LEFTSHIFTEQUAL | RIGHTSHIFTEQUAL | DOUBLESTAREQUAL | DOUBLESLASHEQUAL
;
// # For normal and annotated assignments, additional restrictions enforced by the interpreter
del_stmt: DEL exprlist
;
pass_stmt: PASS
;
flow_stmt: break_stmt | continue_stmt | return_stmt | raise_stmt | yield_stmt
;
break_stmt: BREAK
;
continue_stmt: CONTINUE
;
opt_testlist_star_expr: testlist_star_expr | %empty
;
return_stmt: RETURN opt_testlist_star_expr
;
yield_stmt: yield_expr
;
opt_from_test: FROM test | %empty
;
opt_test_opt_from_test: test opt_from_test | %empty
;
raise_stmt:RAISE opt_test_opt_from_test
;
import_stmt: import_name | import_from
;
import_name: IMPORT dotted_as_names
// # note below: the ('.' | '...') is necessary because '...' is tokenized as ELLIPSIS;

dot_or_ellipsis_kleene: dot_or_ellipsis_plus
                      | %empty
;
dot_or_ellipsis_plus: dot_or_ellipsis_plus DOT
					| dot_or_ellipsis_plus ELLIPSIS
					| DOT
					| ELLIPSIS
;
dot_or_ellipsis_kleene_dotted_name_or_dot_or_ellipsis_plus: dot_or_ellipsis_kleene dotted_name | dot_or_ellipsis_plus
;
star_or_lpar_import_as_names_rpar_or_import_as_names: STAR 
												  | LPAR import_as_names RPAR 
												  | import_as_names
;      
import_from: FROM dot_or_ellipsis_kleene_dotted_name_or_dot_or_ellipsis_plus IMPORT star_or_lpar_import_as_names_rpar_or_import_as_names
;
opt_as_name: AS NAME | %empty;
import_as_name: NAME opt_as_name
;
dotted_as_name: dotted_name opt_as_name
;
comma_import_as_name_kleene: comma_import_as_name_kleene COMMA import_as_name
						   | %empty
;			
import_as_names: import_as_name comma_import_as_name_kleene opt_comma
;
comma_dotted_as_name_kleene: comma_dotted_as_name_kleene COMMA dotted_as_name | %empty
;
dotted_as_names: dotted_as_name comma_dotted_as_name_kleene
;
dot_name_kleene: dot_name_kleene DOT NAME | %empty
;
dotted_name: NAME dot_name_kleene
;
comma_name_kleene: comma_name_kleene COMMA NAME | %empty
;
global_stmt: GLOBAL NAME comma_name_kleene
;
nonlocal_stmt: NONLOCAL NAME comma_name_kleene
;
opt_comma_test: COMMA test | %empty
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

if_stmt: IF namedexpr_test COLON suite elif_colon_suite_kleene opt_else_colon_suite
;

elif_colon_suite_kleene: elif_colon_suite_kleene ELIF namedexpr_test COLON suite
                        | %empty
;

while_stmt: WHILE namedexpr_test COLON suite opt_else_colon_suite
;

for_in_colon_prefix: FOR exprlist IN testlist COLON
;

for_stmt: for_in_colon_prefix opt_typecomment suite opt_else_colon_suite
;

opt_else_colon_suite: ELSE COLON suite | %empty
;
opt_finally_colon_suite: FINALLY COLON suite | %empty
;
exceptclausecolonsuite_plus: exceptclausecolonsuite_plus except_clause COLON suite
                            | except_clause COLON suite
;
start_try_stmt: TRY COLON suite
;
try_stmt: start_try_stmt exceptclausecolonsuite_plus opt_else_colon_suite opt_finally_colon_suite
        | start_try_stmt FINALLY COLON suite
;

comma_with_item_kleene: comma_with_item_kleene COMMA with_item
                      | %empty
;

with_stmt: WITH with_item comma_with_item_kleene COLON opt_typecomment suite
;

opt_as_expr: AS expr | %empty
;
with_item: test opt_as_expr
;

opt_test_opt_as_name: test opt_as_name | %empty
;
except_clause: EXCEPT opt_test_opt_as_name
;
suite: simple_stmt 
     | NEWLINE INDENT stmt_kleene_plus DEDENT;

opt_colonequal_test: COLONEQUAL test | %empty
;

namedexpr_test: test opt_colonequal_test
;

opt_if_ortest_else_test: IF or_test ELSE test
                       | %empty
;
test: or_test opt_if_ortest_else_test
    | lambdef
;
test_nocond: or_test
           | lambdef_nocond
;
opt_varargslist: varargslist | %empty
;
lambdef: LAMBDA opt_varargslist COLON test
;
lambdef_nocond: LAMBDA opt_varargslist COLON test_nocond
;
or_and_test_kleene: or_and_test_kleene OR and_test
                  | %empty
;
or_test: and_test or_and_test_kleene
;
and_not_test_kleene: and_not_test_kleene AND not_test
                    | %empty
;
and_test: not_test and_not_test_kleene
;
not_test: NOT not_test
        | comparison
;
comp_op_kleene: comp_op_kleene comp_op expr
              | %empty
;
comparison: expr comp_op_kleene
;
// # <> isn't actually a valid comparison operator in Python. It's here for the
// # sake of a __future__ import described in PEP 401 (which really works :-)
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
star_expr: STAR expr;
vbar_xor_expr_kleene: vbar_xor_expr_kleene VBAR xor_expr
                    | %empty
;
expr: xor_expr vbar_xor_expr_kleene
;
circumflex_and_expr_kleene: circumflex_and_expr_kleene CIRCUMFLEX and_expr
                          | %empty
;
xor_expr: and_expr circumflex_and_expr_kleene
;
amper_shift_expr_kleene: amper_shift_expr_kleene AMPER shift_expr
                       | %empty
;
and_expr: shift_expr amper_shift_expr_kleene
;
left_shift_or_right_shift: LEFTSHIFT | RIGHTSHIFT
;
left_shift_or_right_shift_arith_expr_kleene: left_shift_or_right_shift_arith_expr_kleene left_shift_or_right_shift arith_expr
                                           | %empty
;
shift_expr: arith_expr left_shift_or_right_shift_arith_expr_kleene
;
plus_or_minus_term_kleene: plus_or_minus_term_kleene PLUS term
                         | plus_or_minus_term_kleene MINUS term
                         | %empty
;
// arith_expr: term (('+'|'-') term)*;
arith_expr: term plus_or_minus_term_kleene %prec LPAR
;
varias_coisas_factor_kleene: varias_coisas_factor_kleene STAR factor
                           | varias_coisas_factor_kleene AT factor
                           | varias_coisas_factor_kleene SLASH factor
                           | varias_coisas_factor_kleene PERCENT factor
                           | varias_coisas_factor_kleene DOUBLESLASH factor
                           | %empty
;
term: factor varias_coisas_factor_kleene
;
factor: PLUS factor
	  | MINUS factor
      | TILDE factor
      | power
;
opt_double_star_factor: DOUBLESTAR factor | %empty
;
power: atom_expr opt_double_star_factor
;
opt_await: AWAIT | %empty
;

// EZ: Quero que essa regra seja usada o quanto for possível, por isso a prioridade.
// Dessa forma, da para consumir coisas como 'f()()()', o que é possível porque
// o Python permite funções anônimas.;
trailer_kleene:
  %empty
| trailer_kleene trailer %prec LPAR
;

// EZ: Já essa regra eu só quero que seja usada quando aos trailers acabarem,
// por isso a baixa prioridade.;
atom_expr:
  opt_await atom trailer_kleene %prec LOW
;

opt_yieldex_or_testlist_comp: yield_expr | opt_testlist_comp
;
opt_testlist_comp: testlist_comp | %empty
;
opt_dictorsetmaker:dictorsetmaker | %empty
;
string_plus: string_plus STRING | STRING
;
atom: LPAR opt_yieldex_or_testlist_comp RPAR
    | LSQB opt_testlist_comp RSQB
    | LBRACE opt_dictorsetmaker RBRACE
    | NAME
    | NUMBER
    | string_plus
    | ELLIPSIS
    | NONE
    | TRUE
    | FALSE
;
or_namedaexpr_test_star_expr: namedexpr_test
                             | star_expr
;
comma_opt_namedaexpr_test_star_expr_kleene: comma_opt_namedaexpr_test_star_expr_kleene COMMA or_namedaexpr_test_star_expr
                                          | %empty
;
comma_subscript_kleene: comma_subscript_kleene COMMA subscript
                        | %empty
;
testlist_comp: or_namedaexpr_test_star_expr comp_for
                |  or_namedaexpr_test_star_expr comma_opt_namedaexpr_test_star_expr_kleene opt_comma
;
trailer: LPAR opt_arglist RPAR
       | LSQB subscriptlist RSQB
       | DOT NAME
;
subscriptlist: subscript comma_subscript_kleene opt_comma
;
opt_sliceop: sliceop | %empty
;
subscript: test | opt_test COLON opt_test opt_sliceop
;
sliceop: COLON opt_test
;
expr_or_star_expr: expr | star_expr
;
comma_expr_or_star_expr_kleene: comma_expr_or_star_expr_kleene COMMA expr_or_star_expr
                              | %empty
;
exprlist: expr_or_star_expr comma_expr_or_star_expr_kleene opt_comma
;
testlist: test comma_test_fecho opt_comma
;
or_test_star_expr: test | star_expr
;
comma_e_o_de_cima2_kleene: comma_e_o_de_cima2_kleene COMMA or_test_star_expr | %empty
;
opt_test_colon_test_doublestar_expr: test COLON test | DOUBLESTAR expr
;
comma_e_o_de_cima3_kleene: comma_e_o_de_cima3_kleene COMMA opt_test_colon_test_doublestar_expr | %empty
;
opt_primeiro_menor_dictorsetmaker: comp_for
                                 | comma_e_o_de_cima3_kleene opt_comma
;
opt_segundo_menor_dictorsetmaker: comp_for
                                 | comma_e_o_de_cima2_kleene opt_comma
;
dictorsetmaker: opt_test_colon_test_doublestar_expr opt_primeiro_menor_dictorsetmaker
                | or_test_star_expr opt_segundo_menor_dictorsetmaker
;
opt_lpar_opt_arglist_rpar: LPAR opt_arglist RPAR | %empty
;
classdef: CLASS NAME opt_lpar_opt_arglist_rpar COLON suite
;
opt_comma_argument_kleene: opt_comma_argument_kleene COMMA argument
                         | %empty
;
arglist: argument opt_comma_argument_kleene opt_comma
;
opt_comp_for: comp_for | %empty
;
argument: test opt_comp_for
        | test COLONEQUAL test
        | test EQUAL test
        | DOUBLESTAR test
        | STAR test
;
comp_iter: comp_for
         | comp_if
;
opt_comp_iter: comp_iter | %empty
;
sync_comp_for: FOR exprlist IN or_test opt_comp_iter
;
comp_for: ASYNC sync_comp_for
        | sync_comp_for
;
comp_if: IF test_nocond opt_comp_iter
;

// encoding_decl: NAME;

opt_yield_arg: yield_arg | %empty
;
yield_expr: YIELD opt_yield_arg
;
yield_arg: FROM test
         | testlist_star_expr
;

// # the TYPE_COMMENT in suites is only parsed for funcdefs,
// # but can't go elsewhere due to ambiguity
opt_type_comment_newline: TYPE_COMMENT NEWLINE | %empty
;

stmt_kleene_plus: stmt_kleene_plus stmt
				| stmt
;
func_body_suite: simple_stmt 
			   | NEWLINE opt_type_comment_newline INDENT stmt_kleene_plus DEDENT;

func_type_input: func_type newline_fecho
;
opt_typelist: typelist | %empty
;
func_type: LPAR opt_typelist RPAR ARROW test
;
comma_test_fecho: comma_test_fecho COMMA test
                | %empty
                ;
// # typelist is a modified typedargslist (see above)
opt_comma_doublestar_test: COMMA DOUBLESTAR test | %empty
;
opt_test: test | %empty
;
opt_maluco: STAR opt_test comma_test_fecho opt_comma_doublestar_test
          | DOUBLESTAR test
          | %empty
;
opt_comma_maluco: COMMA opt_maluco | %empty
;
typelist: test comma_test_fecho opt_comma_maluco
        | STAR opt_test comma_test_fecho opt_comma_doublestar_test
        | DOUBLESTAR test