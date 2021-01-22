%{
#include <iostream>

using namespace std;

int x =1;
int y =1;
%}

DIGIT[0-9]

%%
        /*------Reserved Words------*/
function    {cout <<"FUNCTION\n"; y =y +yyleng;};
beginparams {cout <<"BEGIN_PARAMS\n"; y =y +yyleng;};
endparams   {cout <<"END_PARAMS\n"; y =y +yyleng;};
beginlocals {cout <<"BEGIN_LOCALS\n"; y =y +yyleng;};
endlocals   {cout <<"END_LOCALS\n"; y =y +yyleng;};
beginbody   {cout <<"BEGIN_BODY\n"; y =y +yyleng;};
endbody     {cout <<"END_BODY\n"; y =y +yyleng;};
integer     {cout <<"INTEGER\n"; y =y +yyleng;};
array       {cout <<"ARRAY\n"; y =y +yyleng;};
of          {cout <<"OF\n"; y =y +yyleng;};
if		    {cout <<"IF\n"; y =y +yyleng;}
then		{cout <<"THEN\n"; y =y +yyleng;}
endif		{cout <<"ENDIF\n"; y =y +yyleng;}
else		{cout <<"ELSE\n"; y =y +yyleng;}
while		{cout <<"WHILE\n"; y =y +yyleng;}
do		    {cout <<"DO\n"; y =y +yyleng;}
for		    {cout <<"FOR\n"; y =y +yyleng;}
beginloop	{cout <<"BEGINLOOP\n"; y =y +yyleng;}
endloop		{cout <<"ENDLOOP\n"; y =y +yyleng;}
continue	{cout <<"CONTINUE\n"; y =y +yyleng;}
read		{cout <<"READ\n"; y =y +yyleng;}
write		{cout <<"WRITE\n"; y =y +yyleng;}
and		    {cout <<"AND\n"; y =y +yyleng;}
or		    {cout <<"OR\n"; y =y +yyleng;}
not		    {cout <<"NOT\n"; y =y +yyleng;}
true		{cout <<"TRUE\n"; y =y +yyleng;}
false		{cout <<"FALSE\n"; y =y +yyleng;}
return		{cout <<"RETURN\n"; y =y +yyleng;}
break       {cout <<"BREAK\n"; y =y +yyleng;}

        /*------Arithmetic Operators------*/
"+"         {cout <<"ADD\n"; y =y +yyleng;}
"-"         {cout <<"SUB\n"; y =y +yyleng;}
"*"         {cout <<"MULT\n"; y =y +yyleng;}
"/"         {cout <<"DIV\n"; y =y +yyleng;}
"%"         {cout <<"MOD\n"; y =y +yyleng;}

        /*------Comparison Operators------*/
"=="        {cout <<"EQ\n"; y =y +yyleng;}
"<>"        {cout <<"NEQ\n"; y =y +yyleng;}
"<"         {cout <<"LT\n"; y =y +yyleng;}
">"         {cout <<"GT\n"; y =y +yyleng;}
"<="        {cout <<"LTE\n"; y =y +yyleng;}
">="        {cout <<"GTE\n"; y =y +yyleng;}

        /*------Special Symbols------*/
";"	        {cout <<"SEMICOLON\n"; y =y +yyleng;}
":"         {cout <<"COLON\n"; y =y +yyleng;}
","         {cout <<"COMMA\n"; y =y +yyleng;}
"("         {cout <<"L_PAREN\n"; y =y +yyleng;}
")"         {cout <<"R_PAREN\n"; y =y +yyleng;}
"="         {cout <<"EQUAL\n"; y =y +yyleng;}
"["	        {cout <<"L_SQUARE_BRACKET\n"; y =y +yyleng;}
"]"         {cout <<"R_SQUARE_BRACKET\n"; y =y +yyleng;}
":="        {cout <<"ASSIGN\n"; y =y +yyleng;}

        /*------Comments------*/
(##).*\n {x =x +1; y =1;}

        /*------Number------*/
{DIGIT}+ {cout <<"NUMBER " <<yytext <<"\n"; y =y +yyleng;}

        /*------Spaces & Newlines------*/
[ \t]+ {y =y +yyleng;}
"\n"  {x =x +1; y =1;}

        /*------Identifiers------*/
([a-zA-Z])|([a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9]) {cout <<"IDENT " <<yytext <<"\n"; y =y + yyleng;}

        /*------Unrecognized Identifier Errors------*/
[0-9_][a-zA-Z0-9_]*     {cout <<"Error at line " <<x <<", column " <<y <<": Identifier \"" <<yytext <<"\" must start with a letter\n"; exit(0);}
[a-zA-Z][a-zA-Z0-9_]*   {cout <<"Error at line " <<x <<", column " <<y <<": Identifier \"" <<yytext <<"\" can't end with an underscore \n"; exit(0);}
.                       {cout <<"Error at line " <<x <<", column " <<y <<": unrecognized symbol \"" <<yytext <<"\"\n";}
%%

int main(int argc, char **argv) {
    if(argc >=2) {
        yyin =fopen(argv[1], "r");

        if(yyin ==NULL) {
            yyin =stdin;
        }
    }
    else {
        yyin =stdin;
    }

    yylex();
}