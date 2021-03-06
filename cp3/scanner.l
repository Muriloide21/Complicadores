%option yylineno
%option noyywrap
%option outfile="scanner.c"

%{
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "tables.h"
#include "ast.h"
#include "parser.h"

#

#define YY_DECL int orig_yylex (void)

void process_token(yytoken_kind_t);
void process_indent(void);
void add_text(char*);
void add_number(char* number);
void add_boolean(char* number);

typedef struct {
    char* last_text[100];
    int count;
} mdl;

mdl names_list;
mdl names_list = { .count = 0 };

mdl numbers_list;
mdl numbers_list = { .count = 0 };

mdl bool_list;
mdl bool_list = { .count = 0 };

const char *const nomes_var[] =
{
  "$end", "error", "$undefined", "ENDMARKER", "AND", "AMPER",
  "AMPEREQUAL", "ARROW", "AS", "ASSERT", "EQUAL", "ASYNC", "AT", "ATEQUAL",
  "AWAIT", "BREAK", "CLASS", "COLON", "COLONEQUAL", "COMMA", "CONTINUE",
  "DEDENT", "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL",
  "DOUBLESTAR", "DOUBLESTAREQUAL", "EQEQUAL", "ELIF", "ELLIPSIS", "ELSE",
  "EXCEPT", "FALSE", "FOR", "FINALLY", "FROM", "GREATEREQUAL", "GLOBAL",
  "GREATER", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA", "LSQB",
  "LBRACE", "LESSEQUAL", "LPAR", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS",
  "MINUS", "MINUSEQUAL", "NAME", "NOTEQUAL", "NEWLINE", "NONE", "NONLOCAL",
  "NOT", "NUMBER", "OR", "VBAR", "VBAREQUAL", "PASS", "PERCENT",
  "PERCENTEQUAL", "PLUS", "PLUSEQUAL", "RAISE", "RSQB", "RBRACE", "RETURN",
  "RPAR", "RIGHTSHIFT", "RIGHTSHIFTEQUAL", "SEMICOLON", "SLASH",
  "SLASHEQUAL", "STAR", "STAREQUAL", "STRING", "TILDE", "TRUE", "TRY",
  "TYPE_COMMENT", "WITH", "WHILE", "CIRCUMFLEX", "CIRCUMFLEXEQUAL",
  "YIELD", "$accept", "newline_or_stmt_star", "opt_par_arglist",
  "decorator_plus", "opt_arrow_test", "opt_type_comment", "opt_comma",
  "opt_colon_test", "opt_semi", "assing_yield_or_test_plus",
  "opt_assing_yield_or_test", "opt_as_name", "comma_import_as_name_star",
  "comma_dotted_as_name_star", "dot_name_star", "comma_name_star",
  "opt_comma_test", "elif_test_suite_plus", "opt_else_suite",
  "comma_with_item_star", "opt_as_expr", "opt_test_as_name", "stmt_plus",
  "opt_await", "trailer_plus", "string_plus", "opt_test", "opt_sliceop",
  "comma_dict1_star", "except_suite_plus", "opt_finally_suite", "program",
  "file_input", "decorator", "decorators", "decorated", "async_funcdef",
  "funcdef", "parameters", "arguments", "argument", "tfpdef", "stmt",
  "simple_stmt", "small_stmt", "expr_stmt", "annassign",
  "testlist_star_expr", "augassign", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "import_stmt", "import_name", "import_from", "from_part", "import_part",
  "import_as_name", "$@1", "dotted_as_name", "import_as_names",
  "dotted_as_names", "dotted_name", "$@2", "global_stmt", "$@3",
  "nonlocal_stmt", "$@4", "assert_stmt", "compound_stmt", "async_stmt",
  "if_stmt", "while_stmt", "for_stmt", "try_stmt", "with_stmt",
  "with_item", "except_clause", "suite", "namedexpr_test", "test",
  "test_nocond", "or_test", "and_test", "not_test", "comparison", "expr",
  "xor_expr", "and_expr", "shift_expr", "arith_expr", "term", "factor",
  "power", "atom_expr", "atom", "testlist_comp", "trailer",
  "subscriptlist", "subscript", "sliceop", "exprlist", "testlist",
  "dictorsetmaker", "dictorsetmaker1", "dictorsetmaker2", "classdef",
  "$@5", "arglist", "argument1", "comp_iter", "sync_comp_for", "comp_for",
  "comp_if", "yield_expr", "yield_arg", "func_body_suite", "YY_NULLPTR"
};

extern StrTable *st;
%}

inteiro [0-9]+
float1 [0-9]*\.{inteiro}
float2 {inteiro}\.[0-9]*

%%

#.*          { /* Ignora comentários */ }
" "          { /* Ignora espaços em branco no meio do código */ }

"\n"         { process_token(NEWLINE); process_indent(); }

False        { add_boolean(yytext); process_token(FALSE); }
await        { process_token(AWAIT); }
else         { process_token(ELSE); }
import       { process_token(IMPORT); }
pass         { process_token(PASS); }
None         { process_token(NONE); }
break        { process_token(BREAK); }
except       { process_token(EXCEPT); }
in           { process_token(IN); }
raise        { process_token(RAISE); }
True         { add_boolean(yytext); process_token(TRUE); }
class        { process_token(CLASS); }
finally      { process_token(FINALLY); }
is           { process_token(IS); }
return       { process_token(RETURN); }
and          { process_token(AND); }
continue     { process_token(CONTINUE); }
for          { process_token(FOR); }
lambda       { process_token(LAMBDA); }
try          { process_token(TRY); }
as           { process_token(AS); }
def          { process_token(DEF); }
from         { process_token(FROM); }
nonlocal     { process_token(NONLOCAL); }
while        { process_token(WHILE); }
assert       { process_token(ASSERT); }
del          { process_token(DEL); }
global       { process_token(GLOBAL); }
not          { process_token(NOT); }
with         { process_token(WITH); }
async        { process_token(ASYNC); }
elif         { process_token(ELIF); }
if           { process_token(IF); }
or           { process_token(OR); }
yield        { process_token(YIELD); }

"=="         { process_token(EQEQUAL); }
"!="         { process_token(NOTEQUAL); }
"<<"         { process_token(LEFTSHIFT); }
">>"         { process_token(RIGHTSHIFT); }
"<="         { process_token(LESSEQUAL); }
">="         { process_token(GREATEREQUAL); }
"<"          { process_token(LESS); }
">"          { process_token(GREATER); }
"->"         { process_token(ARROW); }
"~"          { process_token(TILDE); }
"%"          { process_token(PERCENT); }
"|"          { process_token(VBAR); }
"&"          { process_token(AMPER); }
"//"         { process_token(DOUBLESLASH); }
"/"          { process_token(SLASH); }
"**"         { process_token(DOUBLESTAR); }
"*"          { process_token(STAR); }
"-"          { process_token(MINUS); }
"+"          { process_token(PLUS); }
"^"          { process_token(CIRCUMFLEX); }

"="          { process_token(EQUAL); }
","          { process_token(COMMA); }
":"          { process_token(COLON); }
"("          { process_token(LPAR); }
")"          { process_token(RPAR); }
"["          { process_token(LSQB); }
"]"          { process_token(RSQB); }
"{"          { process_token(LBRACE); }
"}"          { process_token(RBRACE); }
"@"          { process_token(AT); }
"."          { process_token(DOT); }
"..."        { process_token(ELLIPSIS); }
";"          { process_token(SEMICOLON); }
"+="         { process_token(PLUSEQUAL); }
"-="         { process_token(MINUSEQUAL); }
":="         { process_token(COLONEQUAL); }
"**="        { process_token(DOUBLESTAREQUAL); }
"*="         { process_token(STAREQUAL); }
"//="        { process_token(DOUBLESLASHEQUAL); }
"/="         { process_token(SLASHEQUAL); }
"@="         { process_token(ATEQUAL); }
"%="         { process_token(PERCENTEQUAL); }
"&="         { process_token(AMPEREQUAL); }
"|="         { process_token(VBAREQUAL); }
"^="         { process_token(CIRCUMFLEXEQUAL); }
">>="        { process_token(RIGHTSHIFTEQUAL); }
"<<="        { process_token(LEFTSHIFTEQUAL); }

["]([^\"]|\\.)*["]     { add_string(st, yytext); process_token(STRING); }
[`]([^\`]|\\.)*[`]     { add_string(st, yytext); process_token(STRING); }
[']([^\']|\\.)*[']     { add_string(st, yytext); process_token(STRING); }

[a-zA-Z_][0-9a-zA-Z_]*              { add_text(yytext); process_token(NAME); }

{inteiro}                           { add_number(yytext); process_token(NUMBER); }
{float1}                            { add_number(yytext); process_token(NUMBER); }
{float2}                            { add_number(yytext); process_token(NUMBER); }

{inteiro}e[-]?{inteiro}             { add_number(yytext); process_token(NUMBER); }
{float1}e[-]?{inteiro}              { add_number(yytext); process_token(NUMBER); }
{float2}e[-]?{inteiro}              { add_number(yytext); process_token(NUMBER); }

0b[10]+                             { add_number(yytext); process_token(NUMBER); }

0x[a-fA-F0-9]+                      { add_number(yytext); process_token(NUMBER); }

<<EOF>>    { process_token(ENDMARKER); return -1; /* O valor de retorno de orig_yylex é descartado. */}

%%

#define MAX_TOKEN_LEN 32

typedef struct {
    yytoken_kind_t type;
    char lexeme[MAX_TOKEN_LEN];
} Token;

#define MAX_TOKEN_COUNT 100

Token tokens[MAX_TOKEN_COUNT];
int token_count = 0;

void lex_init(void) {
    orig_yylex();
}

void process_token(yytoken_kind_t type) {
    //printf("Token: %d\n", type);
    //printf("Token: %s (%d)\n", nomes_var[type-255],type);

    if (type == ENDMARKER) {
        if (token_count > 0 && tokens[token_count-1].type != NEWLINE) {
            // Adiciona uma nova linha para deixar o parser feliz...
            tokens[token_count].type = NEWLINE;
            tokens[token_count].lexeme[0] = '\n';
            token_count++;
        }
    }

    tokens[token_count].type = type;
    if (type != INDENT && type != DEDENT && type != ENDMARKER) {
        strncpy(tokens[token_count].lexeme, yytext, yyleng);
    }
    token_count++;


}

int stack[100] = {[0] = 0};
int sp = 0;

void push(int x) {
    stack[++sp] = x;
}

int pop() {
    return stack[sp--];
}

int peek() {
    return stack[sp];
}

void process_indent(void) {
    int ws = 0;
    char c;
    while ( (c = input()) == ' ' ) {
        ws++;
    }
    unput(c);
    if (ws > peek()) {
        // New indentation level.
        push(ws);
        process_token(INDENT);
    } else if (ws < peek()) {
        // Going back...
        do {
            pop();
            process_token(DEDENT);
        } while (ws < peek());
    }
}

int next_token = 0;

void add_text(char* text){
    //printf("yytext: %s",yytext);
    names_list.last_text[names_list.count] = malloc(strlen(text) + 1);
    strcpy(names_list.last_text[names_list.count], text);
    names_list.count++;
}

void add_number(char* number){
    numbers_list.last_text[numbers_list.count] = malloc(strlen(number) + 1);
    strcpy(numbers_list.last_text[numbers_list.count], number);
    numbers_list.count++;
}

void add_boolean(char* boolean){
    bool_list.last_text[bool_list.count] = malloc(strlen(boolean) + 1);
    strcpy(bool_list.last_text[bool_list.count], boolean);
    bool_list.count++;
}

yytoken_kind_t yylex(void) {
    if (next_token < token_count) {
        return tokens[next_token++].type;
    } else {
        return EOF;
    }
}
