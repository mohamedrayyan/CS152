%{
#include "y.tab.h"
int x = 1;
int y = 1;
%}

DIGIT[0-9]

%%
        /*------Reserved Words------*/
function    {y =y +yyleng; return FUNCTION;}
beginparams {y =y +yyleng; return BEGIN_PARAMS;}
endparams   {y =y +yyleng; return END_PARAMS;}
beginlocals {y =y +yyleng; return BEGIN_LOCALS;}
endlocals   {y =y +yyleng; return END_LOCALS;}
beginbody   {y =y +yyleng; return BEGIN_BODY;}
endbody     {y =y +yyleng; return END_BODY;}
integer     {y =y +yyleng; return INTEGER;}
array       {y =y +yyleng; return ARRAY;}
of          {y =y +yyleng; return OF;}
if		    {y =y +yyleng; return IF;}
then		{y =y +yyleng; return THEN;}
endif		{y =y +yyleng; return ENDIF;}
else		{y =y +yyleng; return ELSE;}
while		{y =y +yyleng; return WHILE;}
do		    {y =y +yyleng; return DO;}
beginloop	{y =y +yyleng; return BEGINLOOP;}
endloop		{y =y +yyleng; return ENDLOOP;}
read		{y =y +yyleng; return READ;}
write		{y =y +yyleng; return WRITE;}
and		    {y =y +yyleng; return AND;}
or		    {y =y +yyleng; return OR;}
not		    {y =y +yyleng; return NOT;}
true		{y =y +yyleng; return TRUE;}
false		{y =y +yyleng; return FALSE;}
return		{y =y +yyleng; return RETURN;}
break       {y =y +yyleng; return BREAK;}

        /*------Arithmetic Operators------*/
"+"         {y =y +yyleng; return ADD;}
"-"         {y =y +yyleng; return SUB;}
"*"         {y =y +yyleng; return MULT;}
"/"         {y =y +yyleng; return DIV;}
"%"         {y =y +yyleng; return MOD;}

        /*------Comparison Operators------*/
"=="        {y =y +yyleng; return EQ;}
"<>"        {y =y +yyleng; return NEQ;}
"<"         {y =y +yyleng; return LT;}
">"         {y =y +yyleng; return GT;}
"<="        {y =y +yyleng; return LTE;}
">="        {y =y +yyleng; return GTE;}

        /*------Special Symbols------*/
";"	        {y =y +yyleng; return SEMICOLON;}
":"         {y =y +yyleng; return COLON;}
","         {y =y +yyleng; return COMMA;}
"("         {y =y +yyleng; return L_PAREN;}
")"         {y =y +yyleng; return R_PAREN;}
"="         {y =y +yyleng; return EQUAL;}
"["	        {y =y +yyleng; return L_SQUARE_BRACKET;}
"]"         {y =y +yyleng; return R_SQUARE_BRACKET;}
":="        {y =y +yyleng; return ASSIGN;}

        /*------Comments------*/
(##).*\n {x =x +1; y =1;}

        /*------Number------*/
{DIGIT}+ {y =y +yyleng; yylval.ival =atoi(yytext); return NUMBER;}

        /*------Spaces & Newlines------*/
[ \t]+ {y =y +yyleng;}
"\n"  {x =x +1; y =1;}

        /*------Identifiers------*/
([a-zA-Z])|([a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9]) {y =y + yyleng; yylval.cval =strdup(yytext); return IDENT;}

        /*------Unrecognized Identifier Errors------*/
[0-9_][a-zA-Z0-9_]*     {printf("Error at line %d, column %d: Identifier \"%s\" must start with a letter\n",x,y,yytext);exit(0);}
[a-zA-Z][a-zA-Z0-9_]*   {printf("Error at line %d, column %d: Identifier \"%s\" can't end with an underscore\n",x,y,yytext);exit(0);}
.                       {printf("Error at line %d, column %d :unrecognized symbol \"%s\"\n",x,y,yytext);}
%%