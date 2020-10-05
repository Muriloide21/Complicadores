
%{
#include <stdio.h>
#include "parser.h" 

void imprime(const char* token) {
    printf("%d| %15.15s -> %-15.15s |%d\n", yylineno, yytext, token, yylineno); 
}

int stack[100];
int sp = -1;

void push(int x) {
    stack[++sp] = x;
}

int pop() {
    return stack[sp--];
}

int peek() {
    return stack[sp];
}

void process_indent();
%}


%option noyywrap
%option outfile="scanner.c"

inteiro [0-9]+
float1 [0-9]*\.{inteiro}
float2 {inteiro}\.[0-9]*

%%

^[ ]*#.*\n { return(TYPE_COMMENT) }
^[ ]*\n    { /* Ignore blank lines. */ }
[#]            
^[ ]       { process_indent(); }
[\n]         { return (NEWLINE);}
False        { return (FALSE);}
await        { return (AWAIT);}
else         { return (ELSE);}
import       { return (IMPORT);}
pass         { return (PASS);}
None         { return (NONE);}
break        { return (BREAK);}
except       { return (EXCEPT);}
in           { return (IN);}
raise        { return (RAISE);}
True         { return (TRUE);}
class        { return (CLASS);}
finally      { return (FINALLY);}
is           { return (IS);}
return       { return (RETURN);}
and          { return (AND);}
continue     { return (CONTINUE);}
for          { return (FOR);}
lambda       { return (LAMBDA);}
try          { return (TRY);}
as           { return (AS);}
def          { return (DEF);}
from         { return (FROM);}
nonlocal     { return (NONLOCAL);}
while        { return (WHILE);}
assert       { return (ASSERT);}
del          { return (DEL);}
global       { return (GLOBAL);}
not          { return (NOT);}
with         { return (WITH);}
async        { return (ASYNC);}
elif         { return (ELIF);}
if           { return (IF);}
or           { return (OR);}
yield        { return (YIELD);}

==      	 { return (EQEQUAL);}
!=      	 { return (NOTEQUAL);}
"<<"      	 { return (LEFTSHIFT);}
">>"      	 { return (RIGHTSHIFT);}
"<="      	 { return (LESSEQUAL);}
">="      	 { return (GREATEREQUAL);}
"<"      	 { return (LESS);}
">"        	 { return (GREATER);}
"->"         {return (ARROW)}
~         	 { return (TILDE);}
%         	 { return (PERCENT);}
"|"      	 { return (VBAR);}
[&]      	 { return (AMPER);}
"//"      	 { return (DOUBLESLASH);}
"/"      	 { return (SLASH);}
"**"      	 { return (DOUBLESTAR);}
[*]      	 { return (STAR);}
[-]      	 { return (MINUS);}
[+]      	 { return (PLUS);}
"^"          { return (CIRCUMFLEX);}

"="      	     { return (EQUAL); }
","        	 { return (COMMA);}
":"          	 { return (COLON); }
"("         	 { return(LPAR);}
")"          	 { return(RPAR);}
"["       	 { return(LSQB);}
"]"        	 { return(RSQB);}
"{"       	 { return(LBRACE);}
"}"        	 { return(RBRACE);}
@         	 { return(AT);}
"."        	 { return(DOT);}
"..."        { return(ELLIPSIS);}
;         	 { return(SEMICOLON);}
"+="      	 { return(PLUSEQUAL);}
-=      	 { return(MINEQUAL);}
":="         { return(COLONEQUAL)}
"**="      	 { return(DOUBLESTAREQUAL);}
"*="      	 { return(STAREQUAL);}
"//="      	 { return(DOUBLESLASHEQUAL);}
"/="      	 { return(SLASHEQUAL);}
"@="         { return(ATEQUAL);}
%=      	 { return(PERCENTEQUAL);}
"&="      	 { return(AMPEREQUAL);}
"|="      	 { return(VBAREQUAL);}
"^="      	 { return(CIRCUMFLEXEQUAL);}
">>="      	 { return(RIGHTSHIFTEQUAL);}
"<<="      	 { return(LEFTSHIFTEQUAL);}

["'`].*["'`]                        { return(STRING); }
[a-zA-Z_]+[0-9a-zA-Z_]*             { return(NAME); }

{inteiro}                           { return(NUMBER); }
{float1}                            { return(NUMBER); }
{float2}                            { return(NUMBER); }
[{float1}{inteiro}][e][-]?{inteiro} { return(NUMBER); }
[{float2}{inteiro}][e][-]?{inteiro} { return(NUMBER); }
0b[10]+                             { return(NUMBER); }
0x[abcdef]+                         { return(NUMBER); }

<<EOF>>    { while (sp > 0) { pop(); printf("DEDENT{\}n"); } return 0; }

.          { ECHO; }

%%

void process_indent() {
    int ws = 1; // Because the rule already counted one white space.
    char c;
    while ( (c = input()) == ' ' ) {
        ws++;
    }
    unput(c);
    //printf("WS: %d\t", ws);
    if (ws > peek()) {
        // New indentation level.
        push(ws);
        return (INDENT);
    } else if (ws < peek()) {
        // Going back...
        do {
            pop();
            return (DEDENT);
        } while (ws < peek());
    }
}

int main() {
  push(0);
  yylex();
  return 0;
}