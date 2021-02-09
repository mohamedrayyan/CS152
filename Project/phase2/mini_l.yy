%{
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 void yyerror(const char *msg);
 int yylex();
 extern int x;
 extern int y;
 FILE * yyin;
%}

%union{
  int ival;
  char* cval;
}

%error-verbose
%start program

%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY INTEGER ARRAY OF IF THEN ENDIF ELSE WHILE DO FOR BEGINLOOP ENDLOOP CONTINUE READ WRITE AND OR NOT TRUE FALSE RETURN
%token ADD SUB MULT DIV MOD EQ NEQ LT GT LTE GTE
%token SEMICOLON COLON COMMA L_PAREN R_PAREN EQUAL L_SQUARE_BRACKET R_SQUARE_BRACKET ASSIGN
%token IDENT NUMBER
%type<ival> NUMBER
%type<cval> IDENT
%right ASSIGN
%left OR
%left AND
%right NOT
%left EQ NEQ LT GT LTE GTE
%left ADD SUB
%left MULT DIV MOD
%right UMINUS
%left L_SQUARE_BRACKET R_SQUARE_BRACKET
%left L_PAREN R_PAREN

%%
program: /* epsilon */ {printf("program -> epsilon\n");}
        | program function {printf("program -> program function\n");}
	    ;
function: FUNCTION IDENT SEMICOLON
          BEGIN_PARAMS Declarations END_PARAMS
		  BEGIN_LOCALS Declarations END_LOCALS
		  BEGIN_BODY Statements END_BODY{printf("function -> FUNCTION IDENT %s SEMICOLON BEGIN_PARAMS Declarations END_PARAMS BEGIN_LOCALS Declarations END_LOCALS BEGIN_BODY Statements END_BODY\n",$2);}
		| FUNCTION IDENT error
          BEGIN_PARAMS Declarations END_PARAMS
		  BEGIN_LOCALS Declarations END_LOCALS
		  BEGIN_BODY Statements END_BODY
        ;

Declarations: /* epsilon */ {printf("Declarations -> epsilon\n");}
        | Declarations DeclarationDef SEMICOLON {printf("Declarations -> Declarations DeclarationDef SEMICOLON\n");}
		| Declarations DeclarationDef error
        ;

DeclarationDef: identifier COLON INTEGER {printf("DeclarationDef -> identifier COLON INTEGER\n");}
        | identifier COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {
		printf("DeclarationDef -> identifier COLON ARRAY L_SQUARE_BRACKET NUMBER %d R_SQUARE_BRACKET OF INTEGER\n", $5);}
        | identifier COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {
		printf("DeclarationDef -> identifier COLON ARRAY L_SQUARE_BRACKET NUMBER %d R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER %d R_SQUARE_BRACKET OF INTEGER\n", $5, $8);}
		| identifier error INTEGER
		| identifier error ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
		| identifier error ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
		;

identifier: IDENT {printf("identifier -> IDENT %s\n", $1);}
        | identifier COMMA IDENT {printf("identifier -> identifier COMMA IDENT %s\n", $3);}
		| identifier error IDENT
		;

Statements: StatementDef SEMICOLON {printf("Statements -> StatementDef SEMICOLON\n");}
        | Statements StatementDef SEMICOLON {printf("Statements -> Statements StatementDef SEMICOLON\n");}
		| StatementDef error
		| Statements StatementDef error
        ;

StatementDef: Var ASSIGN Expression {printf("StatementDef -> Var ASSIGN Expression\n");}
        | IF Bool_Exp THEN Statements ENDIF {printf("StatementDef -> IF Bool_Exp THEN Statements ENDIF\n");}
		| IF Bool_Exp THEN Statements ELSE Statements ENDIF {printf("StatementDef -> IF Bool_Exp THEN Statements ELSE Statements ENDIF\n");}
		| WHILE Bool_Exp BEGINLOOP Statements ENDLOOP {printf("StatementDef -> WHILE Bool_Exp BEGINLOOP Statements ENDLOOP\n");}
		| DO BEGINLOOP Statements ENDLOOP WHILE Bool_Exp {printf("StatementDef -> DO BEGINLOOP Statements ENDLOOP WHILE Bool_Exp\n");}
		| FOR Var ASSIGN NUMBER SEMICOLON Bool_Exp SEMICOLON Var ASSIGN Expression BEGINLOOP Statements ENDLOOP {
		printf("StatementDef -> FOR Var ASSIGN NUMBER SEMICOLON Bool_Exp SEMICOLON Var ASSIGN Expression BEGINLOOP Statements ENDLOOP\n");}
		| READ Var_loop {printf("StatementDef -> READ Var_loop\n");}
		| WRITE Var_loop {printf("StatementDef -> WRITE Var_loop\n");}
		| CONTINUE {printf("StatementDef -> CONTINUE\n");}
		| RETURN Expression {printf("StatementDef -> RETURN Expression\n");}
		| Var error Expression
		| FOR Var error NUMBER error Bool_Exp error Var error Expression BEGINLOOP Statements ENDLOOP
		;

Var_loop: Var {printf("Var_loop -> Var\n");}
        | Var_loop COMMA Var {printf("Var_loop -> Var_loop COMMA Var\n");}
        ;

Var: IDENT {printf("Var -> IDENT %s\n", $1);}
        | IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET {printf("Var -> IDENT %s L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n", $1);}
        | IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET L_SQUARE_BRACKET Expression R_SQUARE_BRACKET {
	    printf("Var -> IDENT %s L_SQUARE_BRACKET Expression R_SQUARE_BRACKET L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n", $1);}
        ;

Bool_Exp: Relation_And_Expr {printf("Bool_Exp -> Relation_And_Expr\n");}
        | Bool_Exp OR Relation_And_Expr {printf("Bool_Exp -> Bool_Exp OR Relation_And_Expr\n");}
        ;

Relation_And_Expr: Relation_Expr {printf("Relation_And_Expr -> Relation_Expr\n");}
        | Relation_And_Expr AND Relation_Expr {printf("Relation_And_Expr -> Relation_And_Expr AND Relation_Expr\n");}
        ;

Relation_Expr: Expression Comp Expression {printf("Relation_Expr -> Expression Comp Expression\n");}
        | NOT Expression Comp Expression {printf("Relation_Expr -> NOT Expression Comp Expression\n");}
        | TRUE {printf("Relation_Expr -> TRUE\n");}
        | NOT TRUE {printf("Relation_Expr -> NOT TRUE\n");}
		| FALSE {printf("Relation_Expr -> FALSE\n");}
		| NOT FALSE {printf("Relation_Expr -> NOT FALSE\n");}
		| L_PAREN Bool_Exp R_PAREN {printf("Relation_Expr -> L_PAREN Bool_Exp R_PAREN\n");}
		| NOT L_PAREN Bool_Exp R_PAREN {printf("Relation_Expr -> NOT L_PAREN Bool_Exp R_PAREN\n");}
		| Expression error Expression
		| NOT Expression error Expression
		;

Comp: EQ {printf("Comp -> EQ\n");}
        | NEQ {printf("Comp -> NEQ\n");}
        | LT {printf("Comp -> LT\n");}
        | GT {printf("Comp -> GT\n");}
        | LTE {printf("Comp -> LTE\n");}
        | GTE {printf("Comp -> GTE\n");}
        ;

Expression: Mutiplicative_Expr {printf("Expression -> Mutiplicative_Expr\n");}
        | Expression ADD Mutiplicative_Expr {printf("Expression -> Mutiplicative_Expr ADD Mutiplicative_Expr\n");}
        | Expression SUB Mutiplicative_Expr {printf("Expression -> Mutiplicative_Expr SUB Mutiplicative_Expr\n");}
        ;

Mutiplicative_Expr: Term {printf("Mutiplicative_Expr -> Term\n");}
        | Mutiplicative_Expr MULT Term {printf("Mutiplicative_Expr -> Mutiplicative_Expr MULT Term\n");}
        | Mutiplicative_Expr DIV Term {printf("Mutiplicative_Expr -> Mutiplicative_Expr DIV Term\n");}
        | Mutiplicative_Expr MOD Term {printf("Mutiplicative_Expr -> Mutiplicative_Expr MOD Term\n");}
		;

Term: Var {printf("Term -> Var\n");}
        | SUB Var %prec UMINUS {printf("Term -> SUB Var\n");}
		| NUMBER {printf("Term -> NUMBER %d\n", $1);}
		| SUB NUMBER %prec UMINUS{printf("Term -> SUB NUMBER %d\n", $2);}
		| L_PAREN Expression R_PAREN {printf("Term -> L_PAREN Expression R_PAREN\n");}
		| SUB L_PAREN Expression R_PAREN %prec UMINUS{printf("Term -> SUB L_PAREN Expression R_PAREN\n");}
		| IDENT L_PAREN Expression_loop R_PAREN {printf("Term -> IDENT %s L_PAREN Expression_loop R_PAREN\n", $1);}
		| IDENT L_PAREN /* epsilon */ R_PAREN {printf("Term -> IDENT %s L_PAREN /* epsilon */ R_PAREN\n", $1);}
		;

Expression_loop: Expression	{printf("Expression_loop -> Expression\n");}
        | Expression_loop COMMA Expression {printf("Expression_loop -> Expression_loop COMMA Expression\n");}
		| Expression_loop error Expression
        ;

%%
int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }
   }
   yyparse();
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", x, y, msg);
}