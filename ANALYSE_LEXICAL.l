%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TABLES_SYMBOLE.h"
#include "SYNTAXIC.tab.h"
%}

chiffre [0-9]
lettre [a-zA-Z]
IDF [A-Z]({lettre}|{chiffre}){0,7} 
INTEGR [0-9]+
FLOAT [0-9]+\.[0-9]*

%%

[ \t\r\n]+           /* Ignore whitespace */
"VAR_GLOBAL"        { insere(yytext,"kw_VAR","",0,2);return VAR;  }
"DECLARATION"       { insere(yytext,"kw_DECLARATION","",0,2);return DECLARATION;}
"INSTRUCTION"       { insere(yytext,"kw_INSTRUCTION","",0,2);return INSTRUCTION;}
"FOR"               { insere(yytext,"kw_FOR","",0,2);return FOR;}
"IF"                { insere(yytext,"kw_IF","",0,2);return IF; }
"ELSE"              { insere(yytext,"kw_ELSE","",0,2);return ELSE; }
"CONST"             {  insere(yytext,"kw_CONST","",0,2);return CONST;  }
"READ"             { insere(yytext,"kw_READ","",0,2);return READ; }
"WRITE"            { insere(yytext,"kw_WRITE","",0,2);return WRITE; }
"END"              {insere(yytext, "kw_END", "", 0, 2); print(); }

"int"               {  insere(yytext,"kw_INT_TYPE","",0,2);yylval.str_val=strdup(yytext);return INT_TYPE;  }
"char"              {  insere(yytext,"kw_CHAR_TYPE","",0,2);yylval.str_val=strdup(yytext);return CHAR_TYPE;  }
"float"             { insere(yytext,"kw_FLOAT_TYPE","",0,2);yylval.str_val=strdup(yytext);return FLOAT_TYPE; }

{IDF}               {  insere(yytext, "IDF", "", 0, 0); yylval.str_val=strdup(yytext);return IDF; }
{INTEGR}            {  insere(yytext, "CONST", "integer", atoi(yytext), 0);yylval.int_val= atoi(yytext); return INTEGR_CONST; }
{FLOAT}             {  insere(yytext, "CONST", "FLOAT", atof(yytext), 0);yylval.float_val = atof(yytext); return FLOAT_CONST; }


"//".*              {  return INLINE_COMMENT; }
"/\\*([^*]|\\*+[^*/])*\\*+/" {  return BLOCK_COMMENT; }
\"[^\"]*\"          {  yylval.str_val=strdup(yytext); return STRING_LITTERAL; }

"+"                 {    insere(yytext, "PLUS", "", 0, 1);return PLUS; }
"-"                 {    insere(yytext, "SUB", "", 0, 1);return SUB; }
"="                 {   insere(yytext, "EQUAL", "", 0, 1); return EQUAL; }
"*"                 {    insere(yytext, "MUL", "", 0, 1);return MUL; }
"/"                 {   insere(yytext, "DIVIDE", "", 0, 1); return DIVIDE; }
"%"                 {    insere(yytext, "MODULO", "", 0, 1); return MODULO; }
"=="                {    insere(yytext, "EQ_COMP", "", 0, 1);return EQ_COMP; }
"!="                {   insere(yytext, "NEQ_COMP", "", 0, 1); return NEQ_COMP; }
"&&"                {   insere(yytext, "AND", "", 0, 1); return AND; }
"||"                {   insere(yytext, "OR", "", 0, 1); return OR;}
"!"                 {   insere(yytext, "NEG", "", 0, 1); return NEG; }
">"                 {   insere(yytext, "SUP", "", 0, 1); return SUP; }
"<"                 {   insere(yytext, "INF", "", 0, 1); return INF;}
">="                {    insere(yytext, "SUP_EQ", "", 0, 1);return SUP_EQ; }
"<="                {    insere(yytext, "INF_EQ", "", 0, 1);return INF_EQ; }
"|"                 {    insere(yytext, "ABS", "", 0, 1);return ABS;}

","                 {   insere(yytext, "VIRGULE", "", 0, 1); return VIRGULE; }
";"                 {    insere(yytext, "SC", "", 0, 1);return SC; }
"{"                 {    insere(yytext, "ACC_G", "", 0, 1);return ACC_G; }
"}"                 {    insere(yytext, "ACC_D", "", 0, 1);return ACC_D;}
"("                 {    insere(yytext, "PAR_G", "", 0, 1);return PAR_G; }
")"                 {   insere(yytext, "PAR_D", "", 0, 1);return  PAR_D;}
"["                 {    insere(yytext, "BRA_G", "", 0, 1);return BRA_G;}
"]"                 {    insere(yytext, "BRA_D", "", 0, 1);return BRA_D;}
":"                 {    insere(yytext, "SEP_FOR", "", 0, 1);return SEP_FOR;}


.                   { printf("LEXICAL ERROR: %s\n", yytext); }

%%


int yywrap() {
    yylval.str_val = strdup(""); // Ensure no leftover data is processed.
    return EOL; // Treat end-of-input as an EOL token.
}

