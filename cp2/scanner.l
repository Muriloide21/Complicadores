%option yylineno
%option noyywrap
%option outfile="scanner.c"

%{
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "tables.h"
#include "parser.h"
#

#define YY_DECL int orig_yylex (void)

void process_token(yytoken_kind_t);
void process_indent(void);

extern StrTable *st;
%}

inteiro [0-9]+
float1 [0-9]*\.{inteiro}
float2 {inteiro}\.[0-9]*

%%

#.*          { /* Ignora comentários */ }
" "          { /* Ignora espaços em branco no meio do código */ }

"\n"         { process_token(NEWLINE); process_indent(); }

False        { process_token(FALSE); }
await        { process_token(AWAIT); }
else         { process_token(ELSE); }
import       { process_token(IMPORT); }
pass         { process_token(PASS); }
None         { process_token(NONE); }
break        { process_token(BREAK); }
except       { process_token(EXCEPT); }
in           { process_token(IN); }
raise        { process_token(RAISE); }
True         { process_token(TRUE); }
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

["].*["]     { add_string(st, yytext); process_token(STRING); }
[`].*[`]     { add_string(st, yytext); process_token(STRING); }
['].*[']     { add_string(st, yytext); process_token(STRING); }

[a-zA-Z_][0-9a-zA-Z_]*              { process_token(NAME); }

{inteiro}                           { process_token(NUMBER); }
{float1}                            { process_token(NUMBER); }
{float2}                            { process_token(NUMBER); }

{inteiro}e[-]?{inteiro}             { process_token(NUMBER); }
{float1}e[-]?{inteiro}              { process_token(NUMBER); }
{float2}e[-]?{inteiro}              { process_token(NUMBER); }

0b[10]+                             { process_token(NUMBER); }

0x[a-fA-F0-9]+                      { process_token(NUMBER); }

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
    printf("Token: %d\n", type);

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

yytoken_kind_t yylex(void) {
    if (next_token < token_count) {
        return tokens[next_token++].type;
    } else {
        return EOF;
    }
}
