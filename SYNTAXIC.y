%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void yyerror(const char *s);
%}
%union {
 int int_val;
 char* str_val;
 float float_val;
}
%token VAR DECLARATION INSTRUCTION FOR IF ELSE CONST READ WRITE  EOL

%token <str_val>IDF STRING_LITTERAL INT_TYPE FLOAT_TYPE CHAR_TYPE

%token <float_val>  FLOAT_CONST
 
%token <int_val> INTEGR_CONST 

%token INLINE_COMMENT BLOCK_COMMENT  

%token PLUS SUB EQUAL MUL DIVIDE MODULO EQ_COMP NEQ_COMP AND OR NEG SUP INF SUP_EQ INF_EQ ABS

%token VIRGULE SC ACC_G ACC_D PAR_G PAR_D BRA_G BRA_D SEP_FOR 

%type <float_val> EXP FACTOR TERM statement

%type <str_val> types

%start S
%%
S : S EXP SC                 { printf("Result = %d\n", $2); }
  | S loopstatement          
  | S IfStatement            
  | S instruction2
  | EXP SC                   { printf("Result = %d\n", $1); }
  | S VAR {printf("partie pour les variables globales .\n");}
  | S DECLARATION {printf("partie pour LA DECLARATION .\n");}
  | S INSTRUCTION {printf("partie pour LES INSTRUCTION .\n");}
  | /* Allow end-of-input here */
  ;

loopstatement : FOR PAR_G IDF EQUAL EXP2 SEP_FOR INTEGR_CONST SEP_FOR thing2 PAR_D ACC_G instruction ACC_D { printf("Valid FOR loop.\n"); }
              ;
IfStatement : IF PAR_G condition PAR_D ACC_G instruction ACC_D { printf("Valid IF statement\n"); }
            | IF PAR_G condition PAR_D ACC_G instruction ACC_D ELSE ACC_G instruction ACC_D { printf("Valid IF statement\n"); };


condition : IDF SUP thing | IDF INF thing | IDF SUP_EQ thing | IDF INF_EQ thing | IDF EQ_COMP thing | IDF NEQ_COMP thing | thing4 AND thing4 | thing4 OR thing4 | thing4 ;

thing : IDF | INTEGR_CONST | FLOAT_CONST;
thing4 : IDF | NEG IDF ;
thing2 : IDF | INTEGR_CONST 
       | IDF PLUS INTEGR_CONST 
       | IDF SUB INTEGR_CONST 
       | IDF DIVIDE INTEGR_CONST 
       | IDF MODULO INTEGR_CONST 
       | IDF MUL INTEGR_CONST;

EXP2 : INTEGR_CONST 
     | IDF PLUS INTEGR_CONST 
     | IDF SUB INTEGR_CONST 
     | IDF DIVIDE INTEGR_CONST 
     | IDF MODULO INTEGR_CONST 
     | IDF MUL INTEGR_CONST;

instruction : statement instruction
            | loopstatement instruction
            | IfStatement instruction
            | /* Empty */;

instruction2 : statement instruction2
             | /* Empty */;

statement : IDF EQUAL EXP SC { printf("Assignment: %s = %g\n", $1, $3); }
          | READ PAR_G IDF PAR_D SC { printf("Read variable: %s\n", $3); }
          | WRITE PAR_G STRING_LITTERAL PAR_D SC { printf("Write: %s\n", $3); }
          | WRITE PAR_G STRING_LITTERAL VIRGULE IDF VIRGULE STRING_LITTERAL PAR_D SC { printf("Write: %s\n", $3); printf("Write: %s\n", $7); }
          | types IDF BRA_G INTEGR_CONST BRA_D SC { printf("Array of size: %d\n", $4); }
          | types thing3 SC { printf("Declaration of variable of type: %s\n", $1); };
          | CONST types IDF SC { printf("Declaration of CONST of type: %s\n", $2); };
 thing3 : IDF | IDF VIRGULE thing3 ; 
 

types : INT_TYPE | FLOAT_TYPE | CHAR_TYPE;

EXP : FACTOR { $$ = $1; }
    | EXP PLUS FACTOR { $$ = $1 + $3; }
    | EXP SUB FACTOR { $$ = $1 - $3; };

FACTOR : TERM { $$ = $1; }
       | FACTOR MUL TERM { $$ = $1 * $3; }
       | FACTOR DIVIDE TERM {
           if ($3 == 0) { 
               yyerror("DIVISION by zero");
               YYABORT;
           } else {
               $$ = $1 / $3;
           }
         }
       | FACTOR MODULO TERM {
           if ($3 == 0) { 
               yyerror("MODULO by zero");
               YYABORT;
           } else {
               $$ = (int)$1 % (int)$3;
           }
         };

TERM : INTEGR_CONST { $$ = (float) $1; }
     | FLOAT_CONST {$$=$1;}
     | ABS TERM { $$ = $2 >= 0 ? $2 : -$2; };

%%
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
int main() {
    yyparse();
    return 0;
}
