%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TABLES_SYMBOLE.h"
void yyerror(const char *s);
char save_type[100];
char str[100];

int temp_count = 0;
int qc = 0;
char temp[20];
char str1[20];
char str2[20];

void new_temp(char *temp) {
    sprintf(temp, "t%d", temp_count++);
}
%}

%left OR  
%left AND 

%left EQ_COMP NEQ_COMP SUP SUP_EQ INF INF_EQ 

%left PLUS SUB 
%left MUL DIVIDE 


%union {
 int int_val;
 char* str_val;
 float float_val;
}
%token VAR DECLARATION INSTRUCTION FOR IF ELSE  READ WRITE  EOL

%token <str_val> IDF STRING_LITTERAL INT_TYPE FLOAT_TYPE CHAR_TYPE

%token <float_val>  FLOAT_CONST
 
%token <int_val> INTEGR_CONST 

%token <str_val> CONST

%token INLINE_COMMENT BLOCK_COMMENT  

%token PLUS SUB EQUAL MUL DIVIDE MODULO EQ_COMP NEQ_COMP AND OR NEG SUP INF SUP_EQ INF_EQ ABS

%token VIRGULE SC ACC_G ACC_D PAR_G PAR_D BRA_G BRA_D SEP_FOR 

%type <float_val> EXP FACTOR TERM statement thing5

%type <str_val> types 
%type <str_val> condition 
%type <float_val> NUMBER
%type <str_val> thing 
%start S
%%
S : S EXP SC                 { printf("Result = %3.f\n", $2); }
  | S loopstatement          
  | S IfStatement            
  | S instruction2
  | EXP SC                   { printf("Result = %3.f\n", $1); }
  | S VAR {printf("partie pour les variables globales .\n");}
  | S DECLARATION {printf("partie pour LA DECLARATION .\n");}
  | S INSTRUCTION {printf("partie pour LES INSTRUCTION .\n");}
  | /* Allow end-of-input here */
  ;

loopstatement : FOR PAR_G IDF EQUAL EXP2 SEP_FOR INTEGR_CONST SEP_FOR thing2 PAR_D ACC_G instruction ACC_D { printf("Valid FOR loop.\n"); }
              ;
IfStatement : IF PAR_G condition PAR_D ACC_G instruction ACC_D { printf("Valid IF statement\n"); }
            | IF PAR_G condition PAR_D ACC_G instruction ACC_D ELSE ACC_G instruction ACC_D { printf("Valid IF statement\n"); };


condition : IDF SUP NUMBER{
   new_temp(temp);
   sprintf(str1, "%2.f", $3);
   quadr(">", $1, str1, temp);
   $$ = temp;
}
|IDF SUP IDF{
   new_temp(temp);
   quadr(">", $1, $3, temp);
   $$ = temp;
}

| IDF INF IDF  {
  new_temp(temp);
   quadr("<", $1, $3, temp);
   $$ = temp;
}
| IDF INF NUMBER {
   new_temp(temp);
   sprintf(str1, "%2.f", $3);
   quadr("<", $1, str1, temp);
   $$ = temp;
}

| IDF SUP_EQ IDF {
   new_temp(temp);
   quadr(">=", $1, $3, temp);
   $$ = temp;
}
| IDF SUP_EQ NUMBER {
    new_temp(temp);
   sprintf(str1, "%2.f", $3);
   quadr(">=", $1, str1, temp);
   $$ = temp;
}
| IDF INF_EQ thing{
  new_temp(temp);
   quadr("<=", $1, $3, temp);
   $$ = temp;
}
|IDF INF_EQ NUMBER {
   new_temp(temp);
   sprintf(str1, "%2.f", $3);
   quadr("<=", $1, str1, temp);
   $$ = temp;
}

|IDF EQ_COMP IDF 
|IDF EQ_COMP NUMBER 
|IDF NEQ_COMP IDF 
|IDF NEQ_COMP 
| condition AND condition {
  sprintf(str1, "%d", qc+5);
   quadr("BZ", str1, "opd1", " ");

   sprintf(str1, "%d", qc+4);
   quadr("BZ", str1, "opd2", " ");

   new_temp(temp);
   quadr("=", "1", " ", temp);
   sprintf(str1, "%d", qc+2);
   quadr("BR", str1, " ", " "); 

   quadr("=", "0", " ", temp); 

}
| condition OR condition {
  sprintf(str1, "%d", qc+5);
   quadr("BNZ", str1, "opd1", " ");

   sprintf(str1, "%d", qc+4);
   quadr("BNZ", str1, "opd2", "  ");

   new_temp(temp);
   quadr("=", "1", " ", temp);
   sprintf(str1, "%d", qc+2);
   quadr("BR", str1, " ", " "); 

   quadr("=", "0", " ", temp); 

}
|thing4 ;

thing : IDF ;
NUMBER: INTEGR_CONST { $$ = $1; } | FLOAT_CONST { $$ = $1; } ;

thing4 : IDF | NEG IDF {
  sprintf(str1, "%d", qc+3);
       quadr("BNZ", str1, "opd", " ");

       new_temp(temp);
        quadr("=", "1", " ", temp);
        sprintf(str1, "%d", qc+2);
       quadr("BR", str1, " ", " "); 

       quadr("=", "0", " ", temp);
};
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


             EXP : EXP PLUS FACTOR { $$ = $1 + $3;
           new_temp(temp);
           sprintf(str1, "%.2f", $1);
           sprintf(str2, "%.2f", $3);
           quadr("+", str1, str2, temp);
           }
    | EXP SUB FACTOR { $$ = $1 - $3;
           new_temp(temp);
           sprintf(str1, "%.2f", $1);
           sprintf(str2, "%.2f", $3);
           quadr("-", str1, str2, temp);
           
     }
     | FACTOR { $$ = $1; };

FACTOR : TERM { $$ = $1; }
       | FACTOR MUL TERM { $$ = $1 * $3;
           new_temp(temp);
           sprintf(str1, "%.2f", $1);
           sprintf(str2, "%.2f", $3);
           quadr("*", str1, str2, temp);
          
           } 
       | FACTOR DIVIDE TERM {
           if ($3 == 0) { 
               yyerror("DIVISION by zero");
               YYABORT;
           } else {
               $$ = $1 / $3;
           new_temp(temp);
           sprintf(str1, "%.2f", $1);
           sprintf(str2, "%.2f", $3);
           quadr("/", str1, str2, temp);
          
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

TERM : INTEGR_CONST { $$ = (float) $1;}
     | FLOAT_CONST {$$=$1;}
     | ABS TERM { $$ = $2 >= 0 ? $2 : -$2; }; 

statement : IDF EQUAL EXP SC {
            int x=recherche($1,0);
            
   if (check_declaration($1) == 0) {
    printf("semantic error idf %s not declared \n", $1);
    YYABORT;
} else if (strcmp(tab_idf_cst[x].type, "char") == 0) {
    printf("semantic error idf %s is a char \n", $1);
    YYABORT;

} else {
    tab_idf_cst[x].value=$3;
    printf("Assignment: %s = %g\n", $1, $3);
    sprintf(str2, "%.2f", $3);
    quadr("=", str2, "", $1);

}


}
    |IDF EQUAL thing5 SC { 
   int x=recherche($1,0);
    
    if (check_declaration($1)==0){
      printf("semantic error idf %s not declared \n",$1);
      YYABORT;
    }
     else {
    tab_idf_cst[x].value=$3;
    printf("Assignment: %s = %g\n", $1, $3);
}
    }


          | READ PAR_G IDF PAR_D SC { printf("Read variable: %s\n", $3); }
          | WRITE PAR_G STRING_LITTERAL PAR_D SC { printf("Write: %s\n", $3); }
          | WRITE PAR_G STRING_LITTERAL VIRGULE IDF VIRGULE STRING_LITTERAL PAR_D SC { printf("Write: %s\n", $3); printf("Write: %s\n", $7); }
          | types IDF BRA_G INTEGR_CONST BRA_D SC { if ($4 <= 0) {
                  printf("Array size must be positive.\n");
                  YYABORT;
          }
               printf("Array of size: %d\n", $4); }
          | types thing3 SC { printf("Declaration of variable of type: %s\n", $1); }
          | CONST types IDF SC {printf("Declaration of CONST of type: %s\n", $2); }
          | IDF EQUAL STRING_LITTERAL SC {
            int x=recherche($1,0);
            if (check_declaration($1)==0){
      printf("semantic error idf %s not declared \n",$1);
      YYABORT;
    } else if(strcmp(tab_idf_cst[x].type,"char")!=0) {printf("semantic error idf %s is not a char type \n",$1);YYABORT;}
   else {
  printf("variable de type char %s a la valeur %s .\n",$1,$3);quadr("=", $3, "", $1); 
        }
          
          
          
          }
          | IDF EQUAL IDF SC{
               int x=recherche($1,0);
               int y=recherche($3,0);
               if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0){
                printf("semantic error idf %s and idf %s have different types \n",$1,$3);
                printf("%s    %s \n",tab_idf_cst[x].type,tab_idf_cst[y].type);
                YYABORT;
               }else {
               tab_idf_cst[x].value=tab_idf_cst[y].value;
               
            }
          };
           
         
thing5 :
        IDF PLUS INTEGR_CONST { 
            sprintf(str, "%d", $3);
            int x = recherche($1, 0);  
            int y = recherche( str , 0);  
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {  // Type mismatch check
                printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               $$=tab_idf_cst[x].value + tab_idf_cst[y].value;

            }
                
        }
       | IDF SUB INTEGR_CONST { 
            sprintf(str, "%d", $3);
            int x = recherche($1, 0);
            int y = recherche(str, 0);
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {
                printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               $$=tab_idf_cst[x].value - tab_idf_cst[y].value;
               
            }
        }
       | IDF MUL INTEGR_CONST { 
            sprintf(str, "%d", $3);
            int x = recherche($1, 0);
            int y = recherche(str, 0);
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {
               printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               $$=tab_idf_cst[x].value * tab_idf_cst[y].value;
               
            }
        }
       | IDF DIVIDE INTEGR_CONST  { 
            sprintf(str, "%d", $3);
            int x = recherche($1, 0);
            int y = recherche(str, 0);
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {
               printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
              if(tab_idf_cst[y].value == 0) {
                printf("semantic error: division by zero\n");
                YYABORT;
                }

               $$=tab_idf_cst[x].value / tab_idf_cst[y].value;
               
            }
        }
       | INTEGR_CONST PLUS IDF { 
            sprintf(str, "%d", $1);
            int x = recherche(str, 0);
            int y = recherche($3, 0);
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {
                 printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               $$=tab_idf_cst[x].value + tab_idf_cst[y].value;
               
            }
        }
       | INTEGR_CONST SUB IDF { 
        sprintf(str, "%d", $1);
            int x = recherche(str, 0);
            int y = recherche($3, 0);
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {
                printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               $$=tab_idf_cst[x].value - tab_idf_cst[y].value;
               
            }
        }
       | INTEGR_CONST MUL IDF { 
        sprintf(str, "%d", $1);
            int x = recherche(str, 0);
            int y = recherche($3, 0);
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {
                 printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               $$=tab_idf_cst[x].value * tab_idf_cst[y].value;
               
            }
        }
       | INTEGR_CONST DIVIDE IDF { 
        sprintf(str, "%d", $1);
            int x = recherche(str, 0);
            int y = recherche($3, 0);
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {
                printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
              
              if(tab_idf_cst[y].value == 0) {
                printf("semantic error: division by zero\n");
                YYABORT;
                }

               $$=tab_idf_cst[x].value / tab_idf_cst[y].value;
               
            }
        }
       | IDF PLUS FLOAT_CONST { 
        sprintf(str, "%.6f", $3);
            int x = recherche($1, 0);  
            int y = recherche(str, 0);  
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {  // Type mismatch check
                printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               $$=tab_idf_cst[x].value + tab_idf_cst[y].value;
               
            }
                
        }
        | IDF SUB FLOAT_CONST  { 
           sprintf(str, "%.6f", $3);
            int x = recherche($1, 0);  
            int y = recherche(str, 0);  
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {  // Type mismatch check
                printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               $$=tab_idf_cst[x].value - tab_idf_cst[y].value;
               
            }
                
        }
        | IDF MUL FLOAT_CONST { 
           sprintf(str, "%.6f", $3);
            int x = recherche($1, 0);  
            int y = recherche(str, 0);  
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {  // Type mismatch check
                printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               $$=tab_idf_cst[x].value * tab_idf_cst[y].value;
               
            }
                
        }
        | IDF DIVIDE FLOAT_CONST { 
           sprintf(str, "%.6f", $3);
            int x = recherche($1, 0);  
            int y = recherche(str, 0);  
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {  // Type mismatch check
                printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               if(tab_idf_cst[y].value == 0) {
                printf("semantic error: division by zero\n");
                YYABORT;
                }

               $$=tab_idf_cst[x].value / tab_idf_cst[y].value;
               
            }
                
        }
         | FLOAT_CONST PLUS IDF { 
           sprintf(str, "%.6f", $1);
            int x = recherche(str, 0);
            int y = recherche($3, 0);
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {
                printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               $$=tab_idf_cst[x].value + tab_idf_cst[y].value;
               
            }
        }
         | FLOAT_CONST SUB IDF { 
          sprintf(str, "%.6f", $1);
            int x = recherche(str, 0);
            int y = recherche($3, 0);
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {
                printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               $$=tab_idf_cst[x].value - tab_idf_cst[y].value;
               
            }
        }
         | FLOAT_CONST MUL IDF { 
          sprintf(str, "%.6f", $1);
            int x = recherche(str, 0);
            int y = recherche($3, 0);
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {
                printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               $$=tab_idf_cst[x].value * tab_idf_cst[y].value;
               
            }
        }
         | FLOAT_CONST DIVIDE IDF  { 
          sprintf(str, "%.6f", $1);
            int x = recherche(str, 0);
            int y = recherche($3, 0);
            if (strcmp(tab_idf_cst[x].type,tab_idf_cst[y].type)!=0) {
                printf("semantic error:mismatch types\n");
                YYABORT;
            }else {
               if(tab_idf_cst[y].value == 0) {
                printf("semantic error: division by zero\n");
                YYABORT;
                }

               $$=tab_idf_cst[x].value / tab_idf_cst[y].value;
               
            }
        }  
        | ;

  
        



 thing3 : IDF  {
    if(check_declaration($1)==0)
      { 
         insere_types ($1,save_type);
      }
    else {
        printf("semantic Error: variable %s double declared\n", $1);
        YYABORT;
    }
    }
 | IDF VIRGULE thing3 {
    if(check_declaration($1)==0)
      {
         insere_types ($1,save_type);
      }
    else {
        printf("semantic Error: variable %s double declared\n", $1);
        YYABORT;
    }
    }; 
 

types : INT_TYPE {strcpy(save_type,$1);$$=save_type;} | FLOAT_TYPE {strcpy(save_type,$1);$$=save_type;} | CHAR_TYPE {strcpy(save_type,$1);$$=save_type;};



%%
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
int main() {
    yyparse();
    
    return 0;
}