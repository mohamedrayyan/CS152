%{
 #include <iostream>
 #include "y.tab.hh"
 using namespace std;

 void yyerror(const char *msg);
 extern int x;
 extern int y;
%}

%union {
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

program: {cout <<"program -> epsilon\n";} |
          program function {cout <<"program -> program -> function\n";}
        ;
function: FUNCTION IDENT SEMICOLON
          BEGIN_PARAMS Declarations END_PARAMS
		  BEGIN_LOCALS Declarations END_LOCALS
		  BEGIN_BODY Statements END_BODY
		  {cout <<"function -> FUNCTION IDENT " <<$2 <<" SEMICOLON BEGIN_PARAMS Declarations END_PARAMS BEGIN_LOCALS Declarations END_LOCALS BEGIN_BODY Statements END_BODY\n";}
		| FUNCTION IDENT error
          BEGIN_PARAMS Declarations END_PARAMS
		  BEGIN_LOCALS Declarations END_LOCALS
		  BEGIN_BODY Statements END_BODY
        ;
Declarations: {cout <<"Declarations -> epsilon\n";}
        | Declarations DeclarationDef SEMICOLON {cout <<"Declarations -> Declarations DeclarationDef SEMICOLON\n";}
        | Declarations DeclarationDef error
        ;
DeclarationDef: identifier COLON INTEGER {cout <<"DeclarationDef -> identifier COLON INTEGER\n";}
        | identifier COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
		    {cout <<"DeclarationDef -> identifier COLON ARRAY L_SQUARE_BRACKET NUMBER " <<$5 <<" R_SQUARE_BRACKET OF INTEGER\n";}
        | identifier COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
            {cout <<"DeclarationDef -> identifier COLON ARRAY L_SQUARE_BRACKET NUMBER " <<$5 <<"R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER " <<$8 <<"R_SQUARE_BRACKET OF INTEGER\n";}
		| identifier error INTEGER
		| identifier error ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
		| identifier error ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
		;
identifier: IDENT {cout <<"identifier -> IDENT " <<$1 <<"\n";}
        | identifier COMMA IDENT {cout <<"identifier -> identifier COMMA IDENT " <<$3 <<"\n";}
		| identifier error IDENT
		;
Statements: StatementDef SEMICOLON {cout <<"Statements -> StatementDef SEMICOLON\n";}
        | Statements StatementDef SEMICOLON {cout <<"Statements -> Statements StatementDef SEMICOLON\n";}
		| StatementDef error
		| Statements StatementDef error
        ;
StatementDef: Var ASSIGN Expression {cout <<"StatementDef -> Var ASSIGN Expression\n";}
        | IF Bool_Exp THEN Statements ENDIF {cout <<"StatementDef -> IF Bool_Exp THEN Statements ENDIF\n";}
		| IF Bool_Exp THEN Statements ELSE Statements ENDIF {cout <<"StatementDef -> IF Bool_Exp THEN Statements ELSE Statements ENDIF\n";}
		| WHILE Bool_Exp BEGINLOOP Statements ENDLOOP {cout <<"StatementDef -> WHILE Bool_Exp BEGINLOOP Statements ENDLOOP\n";}
		| DO BEGINLOOP Statements ENDLOOP WHILE Bool_Exp {cout <<"StatementDef -> DO BEGINLOOP Statements ENDLOOP WHILE Bool_Exp\n";}
		| FOR Var ASSIGN NUMBER SEMICOLON Bool_Exp SEMICOLON Var ASSIGN Expression BEGINLOOP Statements ENDLOOP
		    {cout <<"StatementDef -> FOR Var ASSIGN NUMBER SEMICOLON Bool_Exp SEMICOLON Var ASSIGN Expression BEGINLOOP Statements ENDLOOP\n";}
		| READ Var_loop {cout <<"StatementDef -> READ Var_loop\n";}
		| WRITE Var_loop {cout <<"StatementDef -> WRITE Var_loop\n";}
		| CONTINUE {cout <<"StatementDef -> CONTINUE\n";}
		| RETURN Expression {cout <<"StatementDef -> RETURN Expression\n";}
		| Var error Expression
		| FOR Var error NUMBER error Bool_Exp error Var error Expression BEGINLOOP Statements ENDLOOP
		;
Var_loop: Var {cout <<"Var_loop -> Var\n";}
        | Var_loop COMMA Var {cout <<"Var_loop -> Var_loop COMMA Var\n";}
        ;
Var:      IDENT {cout <<"Var -> IDENT " <<$1 <<"\n";}
        | IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET {cout <<"Var -> IDENT " <<$1 <<" L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n";}
        | IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET L_SQUARE_BRACKET Expression R_SQUARE_BRACKET
            {cout <<"Var -> IDENT " <<$1 <<" L_SQUARE_BRACKET Expression R_SQUARE_BRACKET L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n";}
        ;
Bool_Exp: Relation_And_Expr {cout <<"Bool_Exp -> Relation_And_Expr\n";}
        | Bool_Exp OR Relation_And_Expr {cout <<"Bool_Exp -> Bool_Exp OR Relation_And_Expr\n";}
        ;
Relation_And_Expr: Relation_Expr {cout <<"Relation_And_Expr -> Relation_Expr\n";}
        | Relation_And_Expr AND Relation_Expr {cout <<"Relation_And_Expr -> Relation_And_Expr AND Relation_Expr\n";}
        ;
Relation_Expr: Expression Comp Expression {cout <<"Relation_Expr -> Expression Comp Expression\n";}
        | NOT Expression Comp Expression {cout <<"Relation_Expr -> NOT Expression Comp Expression\n";}
        | TRUE {cout <<"Relation_Expr -> TRUE\n";}
        | NOT TRUE {cout <<"Relation_Expr -> NOT TRUE\n";}
		| FALSE {cout <<"Relation_Expr -> FALSE\n";}
		| NOT FALSE {cout <<"Relation_Expr -> NOT FALSE\n";}
		| L_PAREN Bool_Exp R_PAREN {cout <<"Relation_Expr -> L_PAREN Bool_Exp R_PAREN\n";}
		| NOT L_PAREN Bool_Exp R_PAREN {cout <<"Relation_Expr -> NOT L_PAREN Bool_Exp R_PAREN\n";}
		| Expression error Expression
		| NOT Expression error Expression
		;
Comp: EQ {cout <<"Comp -> EQ\n";}
    | NEQ {cout <<"Comp -> NEQ\n";}
	| LT {cout <<"Comp -> LT\n";}
	| GT {cout <<"Comp -> GT\n";}
	| LTE {cout <<"Comp -> LTE\n";}
	| GTE {cout <<"Comp -> GTE\n";}
	;
Expression: Mutiplicative_Expr {cout <<"Expression -> Mutiplicative_Expr\n";}
        | Expression ADD Mutiplicative_Expr {cout <<"Expression -> Mutiplicative_Expr ADD Mutiplicative_Expr\n";}
        | Expression SUB Mutiplicative_Expr {cout <<"Expression -> Mutiplicative_Expr SUB Mutiplicative_Expr\n";}
        ;
Mutiplicative_Expr: Term {cout <<"Mutiplicative_Expr -> Term\n";}
        | Mutiplicative_Expr MULT Term {cout <<"Mutiplicative_Expr -> Mutiplicative_Expr MULT Term\n";}
        | Mutiplicative_Expr DIV Term {cout <<"Mutiplicative_Expr -> Mutiplicative_Expr DIV Term\n";}
        | Mutiplicative_Expr MOD Term {cout <<"Mutiplicative_Expr -> Mutiplicative_Expr MOD Term\n";}
		;
Term: Var {cout <<"Term -> Var\n";}
        | SUB Var %prec UMINUS {cout <<"Term -> SUB Var\n";}
		| NUMBER {cout <<"Term -> NUMBER " <<$1 <<"\n";}
		| SUB NUMBER %prec UMINUS{cout <<"Term -> SUB NUMBER " <<$2 <<"\n";}
		| L_PAREN Expression R_PAREN {cout <<"Term -> L_PAREN Expression R_PAREN\n";}
		| SUB L_PAREN Expression R_PAREN %prec UMINUS {cout <<"Term -> SUB L_PAREN Expression R_PAREN\n";}
		| IDENT L_PAREN Expression_loop R_PAREN {cout <<"Term -> IDENT " <<$1 <<" L_PAREN Expression_loop R_PAREN\n";}
		| IDENT L_PAREN /* epsilon */ R_PAREN {cout <<"Term -> IDENT " <<$1 <<" L_PAREN /* epsilon */ R_PAREN\n";}
		;
Expression_loop: Expression	{cout <<"Expression_loop -> Expression\n";}
        | Expression_loop COMMA Expression {cout <<"Expression_loop -> Expression_loop COMMA Expression\n";}
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
   cout <<"** Line " <<x <<", position " <<y <<": " <<msg <<"\n";
}


