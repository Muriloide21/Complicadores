%option yylineno
%option noyywrap
%option outfile="scanner.c"

%{
#include <stdio.h>
#include "parser.h"
#define SIZE 
/* #define process_token(t) \
   return t */

// EZ: Troque as definições se quiser remover o printf dos tokens.
#define process_token(t) \
  printf(#t "\n");    \
  return t

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

int process_indent();

int endmarker = 0;
%}

inteiro [0-9]+
float1 [0-9]*\.{inteiro}
float2 {inteiro}\.[0-9]*

%%

 /* ^[ ]*#.*\n   { process_token(TYPE_COMMENT); } */
^[ ]*#.*\n   {  }
#.*          {  }
^[ ]*\n      {  }

^[ ]         { return process_indent(); }

"\n"         { process_token(NEWLINE); }

 /* "\n"         { return process_indent();  } */

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

["].*["]                        { process_token(STRING); }
[`].*[`]                        { process_token(STRING); }
['].*[']                        { process_token(STRING); }

[a-zA-Z_][0-9a-zA-Z_]*              { process_token(NAME); }

{inteiro}                           { process_token(NUMBER); }
{float1}                            { process_token(NUMBER); }
{float2}                            { process_token(NUMBER); }

 /* EZ: Essas duas expressões de notação científica estão erradas... */
{inteiro}e[-]?{inteiro}             { process_token(NUMBER); }
{float1}e[-]?{inteiro}             { process_token(NUMBER); }
{float2}e[-]?{inteiro}             { process_token(NUMBER); }

0b[10]+                               { process_token(NUMBER); }

0x[a-fA-F0-9]+                         { process_token(NUMBER); }

 /* Vide o comentário sobre DEDENT abaixo.
    <<EOF>>    { while (sp > 0) { pop(); printf("DEDENT\n");} return (ENDMARKER); } */

 /* Para essa gramática do Python o Bison precisa de dois marcadores distintos.
    Um é o token ENDMARKER que aparece na gramática. O outro é o indicador de fim
    de arquivo propriamente dito. É uma gambiarra bem tosca, mas parece resolver...
  */
<<EOF>>    { if (!endmarker) { endmarker = 1; unput(yytext[0]); process_token (ENDMARKER); }
             else            { return EOF; }
           }

.          { printf("Caracter conhecido"); } // EZ: Aqui deveria dar um erro léxico...

%%

int process_indent() {
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
            // EZ: Aqui é certo que vai dar problema porque o bison só aceita
            // um token por vez do flex, e a gente quer retornar mais de um
            // DEDENT em alguns casos. Vamos ter de pensar em algum "recurso
            // técnico", vulgo gambi para resolver isso...
            pop();
            process_token(DEDENT);
        } while (ws < peek());
    }
    // EZ: Vamos retornar um valor de token inválido para garantir que não
    // há um fall-through até aqui.
    return -1;
}
