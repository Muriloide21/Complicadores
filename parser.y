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

%%

start_program: start_program func_type_input
             | %empty
;
// single_input: NEWLINE
//             | simple_stmt
//             | compound_stmt NEWLINE
// ;
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
// decorator: AT dotted_name opt opt_arglist opt_rpar NEWLINE
// ;
// decorator_fecho_plus: decorator_fecho_plus decorator
//                     | decorator
// ;
// decorators: decorator_fecho_plus
// ;
// decorated: decorators classdef
//          | decorators funcdef
//          | decorators async_funcdef
// ;

// async_funcdef: ASYNC funcdef;

// opt_arrow_test: ARROW test| %empty
// ;
// opt_typecomment: TYPE_COMMENT | %empty
// ;
// funcdef: DEF NAME parameters opt_arrow_test COLON opt_typecomment func_body_suite
// ;
// opt_typedargslist: typedargslist | %empty
// ;
// parameters: LPAR opt_typedargslist RPAR
// ;
// typedargslist: (
//   (tfpdef opt_equal_test (',' opt_typecomment tfpdef opt_equal_test)* ',' opt_typecomment '/' [',' [ opt_typecomment tfpdef opt_equal_test (
//         ',' opt_typecomment tfpdef opt_equal_test)* (TYPE_COMMENT | [',' opt_typecomment [
//         '*' [tfpdef] (',' opt_typecomment tfpdef opt_equal_test)* (TYPE_COMMENT | [',' opt_typecomment ['**' tfpdef opt_comma opt_typecomment]])
//       | '**' tfpdef opt_comma opt_typecomment]])
//   | '*' [tfpdef] (',' opt_typecomment tfpdef opt_equal_test)* (TYPE_COMMENT | [',' opt_typecomment ['**' tfpdef opt_comma opt_typecomment]])
//   | '**' tfpdef opt_comma opt_typecomment]] )
// |  (tfpdef opt_equal_test (',' opt_typecomment tfpdef opt_equal_test)* (TYPE_COMMENT | [',' opt_typecomment [
//    '*' [tfpdef] (',' opt_typecomment tfpdef opt_equal_test)* (TYPE_COMMENT | [',' opt_typecomment ['**' tfpdef opt_comma opt_typecomment]])
//   | '**' tfpdef opt_comma opt_typecomment]])
//   | '*' [tfpdef] (',' opt_typecomment tfpdef opt_equal_test)* (TYPE_COMMENT | [',' opt_typecomment ['**' tfpdef opt_comma opt_typecomment]])
//   | '**' tfpdef opt_comma opt_typecomment)
// )
// tfpdef: NAME [':' test]

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
                              | STAR opt_vfpdef comma_vfpdef_opt_equal_test_kleene opt_comma_e_o_de_cima
                              | DOUBLESTAR vfpdef opt_comma
                              | %empty
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
// stmt: simple_stmt | compound_stmt
// ;
// semicolon_smallstmt_fecho: semicolon_smallstmt_fecho  SEMICOLON small_stmt
//                           |%empty
// ;
// opt_semicolon: SEMICOLON | %empty
// ;
// simple_stmt: small_stmt semicolon_smallstmt_fecho opt_semicolon NEWLINE
// ;
// small_stmt: expr_stmt
//           | del_stmt
//           | pass_stmt
//           | flow_stmt
//           | import_stmt
//           | global_stmt
//           | nonlocal_stmt
//           | assert_stmt
// ;

// eq_yieldexpr_testliststar_kleene: eq_yieldexpr_testliststar_kleene

// expr_stmt: testlist_star_expr (annassign | augassign (yield_expr|testlist) |
//                      [('=' (yield_expr|testlist_star_expr))+ opt_typecomment] )

// annassign: ':' test ['=' (yield_expr|testlist_star_expr)]

comma_or_test_star_expr_kleene: comma_or_test_star_expr_kleene COMMA or_test_star_expr
                                | %empty
;
testlist_star_expr: or_test_star_expr comma_or_test_star_expr_kleene opt_comma
;

// augassign: ('+=' | '-=' | '*=' | '@=' | '/=' | '%=' | '&=' | '|=' | '^=' |
//             '<<=' | '>>=' | '**=' | '//=')
// # For normal and annotated assignments, additional restrictions enforced by the interpreter
// del_stmt: 'del' exprlist
// pass_stmt: 'pass'
// flow_stmt: break_stmt | continue_stmt | return_stmt | raise_stmt | yield_stmt
// break_stmt: 'break'
// continue_stmt: 'continue'
// return_stmt: 'return' [testlist_star_expr]
// yield_stmt: yield_expr
// raise_stmt: 'raise' [test ['from' test]]
// import_stmt: import_name | import_from
// import_name: 'import' dotted_as_names
// # note below: the ('.' | '...') is necessary because '...' is tokenized as ELLIPSIS
// import_from: ('from' (('.' | '...')* dotted_name | ('.' | '...')+)
//               'import' ('*' | LPAR import_as_names RPAR | import_as_names))
// import_as_name: NAME ['as' NAME]
// dotted_as_name: dotted_name ['as' NAME]
// import_as_names: import_as_name (',' import_as_name)* opt_comma
// dotted_as_names: dotted_as_name (',' dotted_as_name)*
// dotted_name: NAME ('.' NAME)*
// global_stmt: 'global' NAME (',' NAME)*
// nonlocal_stmt: 'nonlocal' NAME (',' NAME)*
// assert_stmt: 'assert' test [',' test]

// compound_stmt: if_stmt
//             | while_stmt
//             | for_stmt
//             | try_stmt
//             | with_stmt
//             | funcdef
//             | classdef
//             | decorated
//             | async_stmt
// ;

// async_stmt: ASYNC funcdef
//          | ASYNC with_stmt
//          | ASYNC for_stmt
// ;

// if_stmt: IF namedexpr_test COLON suite elif_colon_suite_kleene
//       | IF namedexpr_test COLON suite elif_colon_suite_kleene ELSE COLON suite
// ;

// elif_colon_suite_kleene: elif_colon_suite_kleene ELIF namedexpr_test COLON suite
//                         | %empty
// ;

// while_stmt: WHILE namedexpr_test COLON suite ELSE COLON suite
//           | WHILE namedexpr_test COLON suite
// ;

// for_in_colon_prefix: FOR exprlist IN testlist COLON;

// for_stmt: for_in_colon_prefix TYPE_COMMENT suite ELSE COLON suite
//         | for_in_colon_prefix TYPE_COMMENT suite
//         | for_in_colon_prefix suite ELSE COLON suite
//         | for_in_colon_prefix suite

// try_stmt: ('try' ':' suite
//            ((except_clause ':' suite)+
//             ['else' ':' suite]
//             ['finally' ':' suite] |
//            'finally' ':' suite))

// comma_with_item_kleene: comma_with_item_kleene COMMA with_item
//                       | %empty
// ;
// with_stmt: WITH with_item comma_with_item_kleene COLON TYPE_COMMENT suite
//          | WITH with_item comma_with_item_kleene COLON suite
// ;
// with_item: test AS expr
//         | test
// ;

// # NB compile.c makes sure that the default except clause is last
// except_clause: 'except' [test ['as' NAME]]
// suite: simple_stmt | NEWLINE INDENT stmt+ DEDENT;

namedexpr_test: test COLONEQUAL test
              | test
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
arith_expr: term plus_or_minus_term_kleene
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
opt_double_star: DOUBLESTAR factor | %empty
;
power: atom_expr opt_double_star
;
opt_await: AWAIT | %empty
;

// EZ: Quero que essa regra seja usada o quanto for possível, por isso a prioridade.
// Dessa forma, da para consumir coisas como 'f()()()', o que é possível porque
// o Python permite funções anônimas.
trailer_kleene:
  %empty
| trailer_kleene trailer %prec LPAR
;

// EZ: Já essa regra eu só quero que seja usada quando aos trailers acabarem,
// por isso a baixa prioridade.
atom_expr:
  opt_await atom trailer_kleene %prec LOW
;

opt_yieldex_or_testlist_comp: yield_expr | testlist_comp | %empty
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
// testlist: test comma_test_fecho opt_comma
// ;
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

// classdef: 'class' NAME [LPAR [arglist] RPAR] ':' suite;
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

yield_expr: YIELD yield_arg
          | YIELD
;
yield_arg: FROM test
         | testlist_star_expr
;

// # the TYPE_COMMENT in suites is only parsed for funcdefs,
// # but can't go elsewhere due to ambiguity
// func_body_suite: simple_stmt | NEWLINE [TYPE_COMMENT NEWLINE] INDENT stmt+ DEDENT;

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