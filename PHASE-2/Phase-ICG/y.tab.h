/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    ELSE = 259,
    INT = 260,
    FLOAT = 261,
    CHAR = 262,
    WHILE = 263,
    VOID = 264,
    INCLUDE = 265,
    RETURN = 266,
    LE = 267,
    GE = 268,
    LT = 269,
    GT = 270,
    EQ = 271,
    NE = 272,
    NUM = 273,
    AND = 274,
    OR = 275,
    TR = 276,
    FL = 277,
    STRLT = 278,
    ID = 279,
    printff = 280,
    scanff = 281
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define INT 260
#define FLOAT 261
#define CHAR 262
#define WHILE 263
#define VOID 264
#define INCLUDE 265
#define RETURN 266
#define LE 267
#define GE 268
#define LT 269
#define GT 270
#define EQ 271
#define NE 272
#define NUM 273
#define AND 274
#define OR 275
#define TR 276
#define FL 277
#define STRLT 278
#define ID 279
#define printff 280
#define scanff 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 64 "parser.y"
 struct var_name {char name[100];struct node1* nd;} nam ; 
	struct gen_code{char tr[10];char fal[10];struct node1* nd;} gen;
	 

#line 114 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
