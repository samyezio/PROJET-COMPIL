%{
 #include "SYNTAXIC.tab.h"
%}

chiffre [0-9]
lettre [a-zA-Z]
IDF [A-Z]({lettre}|{chiffre}){0,7} 
INTEGR [0-9]+
FLOAT [0-9]+\.[0-9]*

%%

[ \t\r\n]+           /* Ignore whitespace */
"VAR_GLOBAL"        {return VAR;}
"DECLARATION"       {return DECLARATION;}
"INSTRUCTION"       {return INSTRUCTION;}
"FOR"               { return FOR;}
"IF"                { return IF; }
"ELSE"              { return ELSE; }
"CONST"             {  return CONST;  }
"READ"             { return READ; }
"WRITE"            { return WRITE; }


"int"               {  yylval.str_val=strdup(yytext);return INT_TYPE;  }
"char"              {  yylval.str_val=strdup(yytext);return CHAR_TYPE;  }
"float"             { yylval.str_val=strdup(yytext);return FLOAT_TYPE; }

{IDF}               {  yylval.str_val=strdup(yytext);return IDF; }
{INTEGR}            {  yylval.int_val= atoi(yytext); return INTEGR_CONST; }
{FLOAT}             { yylval.float_val = atof(yytext); return FLOAT_CONST; }


"//".*              {  return INLINE_COMMENT; }
"/\\*([^*]|\\*+[^*/])*\\*+/" {  return BLOCK_COMMENT; }
\"[^\"]*\"          {  yylval.str_val=strdup(yytext); return STRING_LITTERAL; }

"+"                 {  return PLUS; }
"-"                 {  return SUB; }
"="                 {  return EQUAL; }
"*"                 {  return MUL; }
"/"                 {  return DIVIDE; }
"%"                 {  return MODULO; }
"=="                {  return EQ_COMP; }
"!="                {  return NEQ_COMP; }
"&&"                {  return AND; }
"||"                {  return OR;}
"!"                 {  return NEG; }
">"                 {  return SUP; }
"<"                 {  return INF;}
">="                {  return SUP_EQ; }
"<="                {  return INF_EQ; }
"|"                 {  return ABS;}

","                 {  return VIRGULE; }
";"                 {  return SC; }
"{"                 {  return ACC_G; }
"}"                 {  return ACC_D;}
"("                 {  return PAR_G; }
")"                 { return  PAR_D;}
"["                 {  return BRA_G;}
"]"                 {  return BRA_D;}
":"                 {  return SEP_FOR;}


.                   { printf("LEXICAL ERROR: %s\n", yytext); }

%%


int yywrap() {
    yylval.str_val = strdup(""); // Ensure no leftover data is processed.
    return EOL; // Treat end-of-input as an EOL token.
}

