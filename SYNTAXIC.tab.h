
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     OR = 258,
     AND = 259,
     INF_EQ = 260,
     INF = 261,
     SUP_EQ = 262,
     SUP = 263,
     NEQ_COMP = 264,
     EQ_COMP = 265,
     SUB = 266,
     PLUS = 267,
     DIVIDE = 268,
     MUL = 269,
     VAR = 270,
     DECLARATION = 271,
     INSTRUCTION = 272,
     FOR = 273,
     IF = 274,
     ELSE = 275,
     READ = 276,
     WRITE = 277,
     EOL = 278,
     IDF = 279,
     STRING_LITTERAL = 280,
     INT_TYPE = 281,
     FLOAT_TYPE = 282,
     CHAR_TYPE = 283,
     FLOAT_CONST = 284,
     INTEGR_CONST = 285,
     CONST = 286,
     INLINE_COMMENT = 287,
     BLOCK_COMMENT = 288,
     EQUAL = 289,
     MODULO = 290,
     NEG = 291,
     ABS = 292,
     VIRGULE = 293,
     SC = 294,
     ACC_G = 295,
     ACC_D = 296,
     PAR_G = 297,
     PAR_D = 298,
     BRA_G = 299,
     BRA_D = 300,
     SEP_FOR = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 30 "syntaxic.y"

 int int_val;
 char* str_val;
 float float_val;



/* Line 1676 of yacc.c  */
#line 106 "syntaxic.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


