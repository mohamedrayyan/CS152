%{
%}

%skeleton "lalr1.cc"
%require "3.0.4"
%defines
%define api.token.constructor
%define api.value.type variant
%define parse.error verbose
%locations

%code requires {
    #include <list>
    #include <string>
    #include <functional>
    using namespace std;
	struct dec_type{
            string code;
            list<string> ids;
	};
    struct stat_type{
        string code;
        string id;
        bool array;
    };
}

%code
{
#include "parser.tab.hh"
#include <iostream>
#include <sstream>
#include <map>
#include <regex>
#include <set>
yy::parser::symbol_type yylex();
void yyerror(const char *msg);

  string _temp_() {
     static int i = 0;
     string temp = "__temp__" + to_string(i++);
     return temp;
  }
  string _label_(){
     static int i = 0;
     string temp = "__label__" + to_string(i++);
     return temp;
  }

map<string, int> tableVar;
map<string, int> tableFunc;
map<string, int> twoarray;
set<string> reservedKeywords = {"FUNCTION", "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER", "ARRAY",
"OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "BEGINLOOP", "ENDLOOP", "BREAK", "READ", "WRITE", "AND", "OR", "NOT", "TRUE", "FALSE", "RETURN",
"ADD", "SUB", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA", "L_PAREN", "R_PAREN", "EQUAL", "L_SQUARE_BRACKET",
"R_SQUARE_BRACKET", "ASSIGN", "IDENT", "NUMBER"};
}

%token END 0 "end of file";

%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY INTEGER ARRAY OF IF THEN ENDIF ELSE WHILE DO BEGINLOOP ENDLOOP BREAK READ WRITE AND OR NOT TRUE FALSE RETURN
%token ADD SUB MULT DIV MOD EQ NEQ LT GT LTE GTE
%token SEMICOLON COLON COMMA L_PAREN R_PAREN EQUAL L_SQUARE_BRACKET R_SQUARE_BRACKET ASSIGN
%token IDENT NUMBER
%type<int> NUMBER
%type<string> IDENT
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


%type <string> program function StatementDef Statements Comp ident
%type <dec_type> Declarations DeclarationDef
%type <stat_type> Var Var_loop Expression Expression_loop Mutiplicative_Expr Term Bool_Exp Relation_And_Expr Relation_Expr
%type <list<string>> identifier
%start start_prog
%%

start_prog: program {
        string temp ="main";
        // main not defined
        if(tableFunc.find(temp) ==tableFunc.end()) {
            yy::parser::error(@1, "Error: main not defined!");
        }
        cout <<$1 <<endl;
        }
        ;

program: /* epsilon */ {$$ ="";}
        | program function {
            if($1 =="") {
                $$ =$2;
            }
            else {
                $$ =$1 +"\n" +$2;
            }
          }
	    ;

function: FUNCTION ident SEMICOLON
          BEGIN_PARAMS Declarations END_PARAMS BEGIN_LOCALS Declarations END_LOCALS
		    BEGIN_BODY Statements END_BODY {
		        $$ ="func " +$2 +"\n";
		        $$ +=$5.code;
		        int i =0;
		        for(list<string>::iterator it =$5.ids.begin(); it !=$5.ids.end(); it++) {
		            $$ +="= " +*it +", $" +to_string(i) +"\n";
		            i++;
		        }
		        $$ +=$8.code;
		        $$ +=$11;
		        if($$.find("break") !=string::npos) {
		            yy::parser::error(@2, "Error: break statement not within a loop");
		        }
		        $$ +="endfunc";
		    }
	    | FUNCTION ident error BEGIN_PARAMS Declarations END_PARAMS BEGIN_LOCALS Declarations END_LOCALS
		    BEGIN_BODY Statements END_BODY {
		    }
        ;

Declarations: /* epsilon */ {
            $$.code ="";
            $$.ids =list<string>();
        }
        | Declarations DeclarationDef SEMICOLON {
            $$.code =$2.code +$1.code;
            $$.ids =$2.ids;
            for(list<string>::iterator it =$1.ids.begin(); it !=$1.ids.end(); it++) {
                $$.ids.push_back(*it);
            }
        }
	    | Declarations DeclarationDef error {
	    }
        ;

DeclarationDef: identifier COLON INTEGER {
            for(list<string>::iterator it =$1.begin(); it !=$1.end(); it++) {
                if(tableVar.find(std::string(*it)) !=tableVar.end()) {
                    yy::parser::error(@1, "Error: variable " +string(*it) +" is multiply-defined");
                }
                else if(tableFunc.find(std::string(*it)) !=tableFunc.end()){
                    yy::parser::error(@1, "Error: defined variable being used by function");
                }
                else if(reservedKeywords.find(std::string(*it)) !=reservedKeywords.end()) {
                    yy::parser::error(@1, "Error: the defined name is a reserved keyword");
                }
                else {
                    tableVar[*it] =0;
                    $$.code +". " +*it +"\n";
                    $$.ids.push_back(*it);
                }
            }
        }
        | identifier COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {
            if($5 <= 0){
                yy::parser::error(@5, "Error: Array size declared is less than <=0");
            }
            for(list<string>::iterator it =$1.begin(); it !=$1.end(); it++){
                if(tableVar.find(std::string(*it)) !=tableVar.end()){
                    yy::parser::error(@1, "Error: variable " +string(*it) +" is multiply-defined");
                }
                else if(tableFunc.find(std::string(*it)) !=tableFunc.end()){
                    yy::parser::error(@1, "Error: defined variable being used by function");
                }
                else if(reservedKeywords.find(std::string(*it)) !=reservedKeywords.end()){
                    yy::parser::error(@1, "Error: the defined name is a reserved keyword");
                }
                else{
                    tableVar[*it] = 1;
                    $$.code += ".[] " +*it +", " +to_string($5) +"\n";
                    $$.ids.push_back(*it);
                }
            }
		}
        | identifier error INTEGER {
        }
        | identifier error ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {
        }
        ;

identifier: IDENT {$$.push_front($1);}
        | identifier COMMA IDENT {
            $$ =$1;
            $$.push_back($3);
        }
        | identifier error IDENT{
        }
        ;

Statements: StatementDef SEMICOLON {
            $$ =$1;
        }
        | Statements StatementDef SEMICOLON {
            $$ =$1 +$2;
        }
        | StatementDef error {
        }
        | Statements StatementDef error {
        }
        ;

StatementDef: Var ASSIGN Expression {
            $$ =$1.code +$3.code;
            if($1.array) {
                $$ += "[]= " +$1.id +", " +$3.id +"\n";
            }
            else {
                $$ +="= " +$1.id +", " +$3.id +"\n";
            }
        }
        | IF Bool_Exp THEN Statements ENDIF {
            string L1 =_label_();
            string L2 =_label_();
            $$ =$2.code +"?:= " +L1 +", " +$2.id +"\n" +":= " +L2 +"\n" +": " +L1 +"\n" +$4 +": " +L2 +"\n";
        }
        | IF Bool_Exp THEN Statements ELSE Statements ENDIF {
            string L1 = _label_();
            string L2 = _label_();
            $$ = $2.code +"?:= " +L1 +", " +$2.id +"\n" +$6 +":= " +L2 +"\n" +": " +L1 +"\n" +$4 +": " +L2 +"\n";
        }
        | WHILE Bool_Exp BEGINLOOP Statements ENDLOOP {
            string whileStart =_label_();
            string L1 =_label_();
            string L2 =_label_();
            string jump;
            string statements =$4;
            jump =":= " +whileStart;

            while(statements.find("continue") != string::npos){
                statements.replace(statements.find("continue"), 8, jump);
            }
            $$ =": " +whileStart +"\n" +$2.code +"?:= " +L1 +", " +$2.id +"\n" +":= " +L2 +"\n"
                +": " +L1 +"\n" +statements +":= " +whileStart +"\n" +": " +L2 +"\n";
        }
        | DO BEGINLOOP Statements ENDLOOP WHILE Bool_Exp {
            string whileStart =_label_();
            string L1 =_label_();
            string L2 =_label_();
            string jump;
            string statements =$3;
            jump =":= " +whileStart;

            while(statements.find("continue") != string::npos){
                statements.replace(statements.find("continue"), 8, jump);
            }
            $$ =": " +L1 +"\n" +statements +":= " +whileStart +"\n " +$6.code +"?:= " +L1 +", " +$6.id +"\n" ;
        }
        | READ Var_loop {
            string temp;
            temp =$2.code;
            size_t pos =0;

            do {
                pos =temp.find("|", pos);
                if(pos ==string::npos) {
                    break;
                }
                temp.replace(pos, 1, "<");
            } while(true);
            $$ +=temp;
        }
        | WRITE Var_loop {
            string temp;
            temp =$2.code;
            size_t pos =0;

            do {
                pos =temp.find("|", pos);
                if(pos ==string::npos) {
                    break;
                }
                temp.replace(pos, 1, ">");
            } while(true);
            $$ +=temp;
        }
        | BREAK {$$ ="break\n";}
        | RETURN Expression {
            $$ =$2.code +"ret" +$2.id +"\n";
        }
        | Var error Expression {
        }
        ;

Var_loop: Var {
            string temp =$1.code;
            if($1.array) {
                temp +=".[]| ";
            }
            else {
                temp +=".| ";
            }

            temp +=$1.id +"\n";
            $$.code =temp;
            $$.id ="";
        }
        | Var_loop COMMA Var {
            string temp;
            temp =$3.code;
            if($3.array) {
                temp +=".[]| ";
            }
            else {
                temp +=".| ";
            }

            temp +=$3.id +"\n" +$1.code;
            $$.code =temp;
            $$.id ="";
        }
        ;

Var: IDENT {
            if(tableVar.find(std::string($1)) ==tableVar.end()) {
                yy::parser::error(@1, "Error: used was not previously declared");
            }
            else if(tableVar[$1] !=0) {
                yy::parser::error(@1, "Error: used array \"" +$1 +"\" variable is missing a specified index");
            }

            $$.code ="";
            $$.id =$1;
            $$.array =false;
        }
        | IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET {
            if(tableVar.find(std::string($1)) ==tableVar.end()) {
                yy::parser::error(@1, "Error: This is not 1D array, array is missing a specific index");
            }

            $$.code =$3.code;
            $$.id =$1 +", " +$3.id;
            $$.array =true;
        }
        ;

Bool_Exp: Relation_And_Expr {
            $$.id =$1.id;
            $$.code =$1.code;
        }
        | Bool_Exp OR Relation_And_Expr {
            $$.code =$3.code +$1.code +". " +_temp_() +"\n" +"|| " +_temp_() +", " +$3.id +", " +$1.id +"\n";
            $$.id =_temp_();
        }
        ;

Relation_And_Expr: Relation_Expr {
            $$.id =$1.id;
            $$.code =$1.code;
        }
        | Relation_And_Expr AND Relation_Expr {
            $$.code =$1.code +$3.code +", " +_temp_() +"\n" +"&& " +_temp_() +", " +$1.id +", " +$3.id +"\n";
            $$.id =_temp_();
        }
        ;

Relation_Expr: Expression Comp Expression {
            string temp =_temp_();
            $$.code =$1.code +$3.code +". " +temp +"\n" +$2 +temp +", " +$1.id +", " +$3.id +"\n";
            $$.id =temp;
        }
        | NOT Expression Comp Expression {
            string temp  =_temp_();
            $$.code =$2.code +$4.code +". " +temp +"\n" +$3 +temp +", " +$2.id +", " +$4.id +"\n" +". " +temp +"\n" +"! " +temp +", " +temp +"\n";
            $$.id =temp;
        }
        | TRUE {
            $$.id ="1";
            $$.code ="";
        }
        | NOT TRUE {
            string temp =_temp_();
            $$.id =". " +temp +"\n" +"! " +temp +", " +"1" +"\n";
            $$.code = "";
        }
        | FALSE {
            $$.id ="0";
            $$.code ="";
        }
        | NOT FALSE {
            string temp =_temp_();
            $$.id =". " +temp +"\n" +"! " +temp +", " +"0" +"\n";
            $$.code ="";
        }
        | L_PAREN Bool_Exp R_PAREN {
            $$.code =$2.code;
            $$.id =$2.id;
        }
        | NOT L_PAREN Bool_Exp R_PAREN {
            string temp =_temp_();
            $$.code =$3.code +". " +temp +"\n" +"! " +temp +", " +$3.id +"\n";
            $$.id =temp;
        }
        | Expression error Expression {
        }
        | NOT Expression error Expression {
        }
        ;

Comp: EQ {$$ ="== ";}
        | NEQ {$$ ="!= ";}
        | LT {$$ ="< ";}
        | GT {$$ ="> ";}
        | LTE {$$ ="<= ";}
        | GTE {$$ =">= ";}
        ;

Expression: Mutiplicative_Expr {
            $$.code =$1.code;
            $$.id =$1.id;
        }
        | Expression ADD Mutiplicative_Expr {
            $$.id =_temp_();
            $$.code =$1.code +$3.code +". " +$$.id +"\n" +"+ " +$$.id +", " +$1.id +", " +$3.id +"\n";
        }
        | Expression SUB Mutiplicative_Expr {
            $$.id =_temp_();
            $$.code =$1.code +$3.code +". " +$$.id +"\n" +"- " +$$.id +", " +$1.id +", " +$3.id +"\n";
        }
        ;

Mutiplicative_Expr: Term {
            $$.code =$1.code;
            $$.id =$1.id;
        }
        | Mutiplicative_Expr MULT Term {
            $$.id =_temp_();
            $$.code =$1.code +$3.code +". " +$$.id +"\n" +"* " +$$.id +", " +$1.id +", " +$3.id +"\n";
        }
        | Mutiplicative_Expr DIV Term {
            $$.id =_temp_();
            $$.code =$1.code +$3.code +". " +$$.id +"\n" +"/ " +$$.id +", " +$1.id +", " +$3.id +"\n";
        }
        | Mutiplicative_Expr MOD Term {
            $$.id =_temp_();
            $$.code =$1.code +$3.code +". " +$$.id +"\n" +"% " +$$.id +", " +$1.id +", " +$3.id +"\n";
        }
	;

Term: Var {
            if($1.array) {
                string ind =_temp_();
                $$.code =$1.code +". " +ind +"\n" +"=[] " +ind +", " +$1.id +"\n";
                $$.id =ind;
                $$.array =false;
            }
        }
        | SUB Var %prec UMINUS {
            $$.id =_temp_();
            string temp;
            temp =$2.code +". " +$$.id +"\n";
            if($2.array) {
                temp +="=[] " +$$.id +", " +$2.id +"\n";
            }
            else{
                temp +="= " +$$.id +", " +$2.id +"\n";
            }
            $$.code =temp +"* " +$$.id +", " +$$.id +", -1\n";
            $$.array =false;
        }
        | NUMBER {
            $$.id =_temp_();
            $$.code =". " +$$.id +"\n" +"= " +$$.id +", " +to_string($1) +"\n";
        }
        | SUB NUMBER %prec UMINUS {
            $$.code ="";
            $$.id ="-" +to_string($2);
        }
        | L_PAREN Expression R_PAREN {
            $$.code =$2.code;
            $$.id =$2.id;
        }
        | SUB L_PAREN Expression R_PAREN %prec UMINUS {
            $$.id =$3.id;
            $$.code =$3.code +"* " +$3.id +", " +$3.id +", -1\n";
        }
        | IDENT L_PAREN Expression_loop R_PAREN {
            if(tableFunc.find(std::string($1)) ==tableFunc.end()) {
                yy::parser::error(@1, "Error: used function is not declared");
            }
            $$.id =_temp_();
            $$.code =$3.code +". " +$$.id +"\n" +"call " +$1 +", " +$$.id +"\n";
        }
        | IDENT L_PAREN /* epsilon */ R_PAREN {
            if(tableFunc.find(std::string($1)) ==tableFunc.end()) {
                yy::parser::error(@1, "Error: used function is not declared");
            }
            $$.id =_temp_();
            $$.code =". " +$$.id +"\n" +"call " +$1 +", " +$$.id +"\n";
        }
        ;

Expression_loop: Expression	{
            $$.code =$1.code +"param " +$1.id +"\n";
        }
        | Expression_loop COMMA Expression {
            $$.code =$3.code +"param " +$3.id +"\n" +$1.code;
            $$.id ="";
        }
	    | Expression_loop error Expression {
	    }
        ;

ident: IDENT {
    tableFunc.insert(std::pair<std::string, int>($1, 0));
    $$ =$1;
}
%%

int main(int argc, char **argv) {
   yy::parser p;
   return p.parse();
}

void yy::parser::error(const yy::location &l, const std::string &m) {
    std::cerr <<l <<": " <<m <<std::endl;
}