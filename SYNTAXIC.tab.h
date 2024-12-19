/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SYNTAXIC_TAB_H_INCLUDED
# define YY_YY_SYNTAXIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VAR = 258,                     /* VAR  */
    DECLARATION = 259,             /* DECLARATION  */
    INSTRUCTION = 260,             /* INSTRUCTION  */
    FOR = 261,                     /* FOR  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    CONST = 264,                   /* CONST  */
    READ = 265,                    /* READ  */
    WRITE = 266,                   /* WRITE  */
    EOL = 267,                     /* EOL  */
    IDF = 268,                     /* IDF  */
    STRING_LITTERAL = 269,         /* STRING_LITTERAL  */
    INT_TYPE = 270,                /* INT_TYPE  */
    FLOAT_TYPE = 271,              /* FLOAT_TYPE  */
    CHAR_TYPE = 272,               /* CHAR_TYPE  */
    FLOAT_CONST = 273,             /* FLOAT_CONST  */
    INTEGR_CONST = 274,            /* INTEGR_CONST  */
    INLINE_COMMENT = 275,          /* INLINE_COMMENT  */
    BLOCK_COMMENT = 276,           /* BLOCK_COMMENT  */
    PLUS = 277,                    /* PLUS  */
    SUB = 278,                     /* SUB  */
    EQUAL = 279,                   /* EQUAL  */
    MUL = 280,                     /* MUL  */
    DIVIDE = 281,                  /* DIVIDE  */
    MODULO = 282,                  /* MODULO  */
    EQ_COMP = 283,                 /* EQ_COMP  */
    NEQ_COMP = 284,                /* NEQ_COMP  */
    AND = 285,                     /* AND  */
    OR = 286,                      /* OR  */
    NEG = 287,                     /* NEG  */
    SUP = 288,                     /* SUP  */
    INF = 289,                     /* INF  */
    SUP_EQ = 290,                  /* SUP_EQ  */
    INF_EQ = 291,                  /* INF_EQ  */
    ABS = 292,                     /* ABS  */
    VIRGULE = 293,                 /* VIRGULE  */
    SC = 294,                      /* SC  */
    ACC_G = 295,                   /* ACC_G  */
    ACC_D = 296,                   /* ACC_D  */
    PAR_G = 297,                   /* PAR_G  */
    PAR_D = 298,                   /* PAR_D  */
    BRA_G = 299,                   /* BRA_G  */
    BRA_D = 300,                   /* BRA_D  */
    SEP_FOR = 301                  /* SEP_FOR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "SYNTAXIC.y"

 int int_val;
 char* str_val;
 float float_val;

#line 116 "SYNTAXIC.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTAXIC_TAB_H_INCLUDED  */
