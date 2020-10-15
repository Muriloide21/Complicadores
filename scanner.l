%option yylineno

%{
#include <stdio.h>
#include "parser.h" 
#define yyterminate() return token::ENDMARKER

void imprime(const char* token) {
    printf("%d| %15.15s -> %-15.15s |%d\n", yylineno, yytext, token, yylineno); 
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

int process_indent();
%}


%option noyywrap
%option outfile="scanner.c"

inteiro [0-9]+
float1 [0-9]*\.{inteiro}
float2 {inteiro}\.[0-9]*

%%

^[ ]*#.*\n { return(TYPE_COMMENT); }
^[ ]*\n    { /* Ignore blank lines. */ }
[#]            
^[ ]       {  process_indent(); }
[\n]         { printf("NEWLINE\n"); return (NEWLINE);}
False        { printf("FALSE\n"); return (FALSE);}
await        { printf("AWAIT\n"); return (AWAIT);}
else         { printf("ELSE\n"); return (ELSE);}
import       { printf("IMPORT\n"); return (IMPORT);}
pass         { printf("PASS\n");return (PASS);}
None         { printf("NONE\n");return (NONE);}
break        { printf("BREAK\n");return (BREAK);}
except       {printf("EXCEPT\n");return (EXCEPT);}
in           { printf("IN\n");return (IN);}
raise        { printf("RAISE\n");return (RAISE);}
True         { printf("TRUE\n");return (TRUE);}
class        { printf("CLASS\n");return (CLASS);}
finally      { printf("FINALLY");return (FINALLY);}
is           { printf("IS\n"); return (IS);}
return       { printf("RETURN\n");return (RETURN);}
and          { printf("AND\n");return (AND);}
continue     { printf("CONTINUE\n");return (CONTINUE);}
for          { printf("FOR\n");return (FOR);}
lambda       { printf("LAMBDA");return (LAMBDA);}
try          { printf("TRY\n"); return (TRY);}
as           { printf("AS\n");return (AS);}
def          { printf("DEF\n");return (DEF);}
from         { printf("FROM \n");return (FROM);}
nonlocal     { printf("NONLOCAL\n");return (NONLOCAL);}
while        { printf("WHILE\n");return (WHILE);}
assert       { printf("ASSERT\n");return (ASSERT);}
del          { printf("DEL\n");return (DEL);}
global       { printf("GLOBAL\n");return (GLOBAL);}
not          { printf("NOT\n");return (NOT);}
with         { printf("WITH\n");return (WITH);}
async        { printf("ASYNC\n"); return (ASYNC);}
elif         { printf("ELIF\n");return (ELIF);}
if           { printf("IF\n");return (IF);}
or           { printf("OR\n");return (OR);}
yield        { printf("YIELD\n");return (YIELD);}

==      	 { printf("EQEQUAL\n");return (EQEQUAL);}
!=      	 { printf("NOTEQUAL\ns");return (NOTEQUAL);}
"<<"      	 { printf("LEFTSHIFT\n");return (LEFTSHIFT);}
">>"      	 { printf("RIGHTSHIFT\n");return (RIGHTSHIFT);}
"<="      	 { printf("LESSEQUAL\n");return (LESSEQUAL);}
">="      	 { printf("GREATEREQUAL\n");return (GREATEREQUAL);}
"<"      	 { printf("LESS\n");return (LESS);}
">"        	 { printf("GREATER\n");return (GREATER);}
"->"         { printf("ARROW\n");return (ARROW);}
~         	 { printf("TILDE\n");return (TILDE);}
%         	 { printf("PERCENT\n");return (PERCENT);}
"|"      	 { printf("VBAR\n");return (VBAR);}
[&]      	 { printf("AMPER\n");return (AMPER);}
"//"      	 { printf("DOUBLESLASH\n");return (DOUBLESLASH);}
"/"      	 { printf("SLASH\n");return (SLASH);}
"**"      	 { printf("DOUBLESTAR\n"); return (DOUBLESTAR);}
[*]      	 { printf("STAR\n");return (STAR);}
[-]      	 { printf("MINUS\n");return (MINUS);}
[+]      	 { printf("PLUS\n");return (PLUS);}
"^"          { printf("CIRCUMFLEX\n");return (CIRCUMFLEX);}

"="      	     { printf("EQUAL\n");return (EQUAL); }
","        	 { printf("COMMA\n");return (COMMA);}
":"          	 { printf("COLON\n");return (COLON); }
"("         	 { printf("LPAR\n");return(LPAR);}
")"          	 { printf("RPAR\n");return(RPAR);}
"["       	 { printf("LSQB\n");return(LSQB);}
"]"        	 { printf("RSQB\n");return(RSQB);}
"{"       	 { printf("LBRACE\n");return(LBRACE);}
"}"        	 { printf("RBRACE\n");return(RBRACE);}
@         	 { printf("AT\n");return(AT);}
"."        	 { printf("DOT\n");return(DOT);}
"..."        { printf("ELLIPSIS\n");return(ELLIPSIS);}
;         	 { printf("SEMICOLON");return(SEMICOLON);}
"+="      	 { printf("PLUSEQUAL\n"); return(PLUSEQUAL);}
-=      	 { printf("MINUSEQUAL\n");return(MINUSEQUAL);}
":="         { printf("COLONEQUAL\n");return(COLONEQUAL);}
"**="      	 { printf("DOUBLESLASHEQUAL\n");return(DOUBLESTAREQUAL);}
"*="      	 { printf("STAREQUAL\n");return(STAREQUAL);}
"//="      	 { printf("DOUBLESLASHEQUAL\n");return(DOUBLESLASHEQUAL);}
"/="      	 { printf("SLASHEQUAL\n");return(SLASHEQUAL);}
"@="         { printf("ATEQUAL\n");return(ATEQUAL);}
%=      	 { printf("PERCENTEQUAL\n");return(PERCENTEQUAL);}
"&="      	 { printf("GREATER\n");return(AMPEREQUAL);}
"|="      	 { printf("VBAREQUAL\n");return(VBAREQUAL);}
"^="      	 { printf("CIRCUMFLEXEQUAL\n");return(CIRCUMFLEXEQUAL);}
">>="      	 { printf("RIGHTSHIFTEQUAL\n"); return(RIGHTSHIFTEQUAL);}
"<<="      	 { printf("LEFTSHIFTEQUAL\n");return(LEFTSHIFTEQUAL);}

["'`].*["'`]                        { printf("STRING\n");return(STRING); }
[a-zA-Z_]+[0-9a-zA-Z_]*             {printf("NAME\n");return(NAME); }

{inteiro}                           {printf("NUMBER\n");return(NUMBER); }
{float1}                            {printf("NUMBER\n"); return(NUMBER); }
{float2}                            {printf("NUMBER\n");return(NUMBER); }
[{float1}{inteiro}][e][-]?{inteiro} {printf("NUMBER\n"); return(NUMBER); }
[{float2}{inteiro}][e][-]?{inteiro} {printf("NUMBER\n");return(NUMBER); }
0b[10]+                             { printf("NUMBER\n");return(NUMBER); }
0x[abcdef]+                         {printf("NUMBER\n"); return(NUMBER); }

<<EOF>>    { while (sp > 0) { pop(); printf("DEDENT\n");} return (ENDMARKER); }

.          { ECHO; }

%%



int process_indent() {
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
        printf("INDENT\n");
        return (INDENT);
        //return;
    } else if (ws < peek()) {
        // Going back...
        do {
            pop();
            printf("DEDENT\n");
            return (DEDENT);
            //return;
        } while (ws < peek());
    }
}

// int main() {
//   push(0);
//   yylex();
//   return 0;
// }