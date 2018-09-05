/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
    num = 258,
    var = 259,
    STRING = 260,
    MULT = 261,
    ADD = 262,
    SUB = 263,
    DIV = 264,
    REST = 265,
    GREATER = 266,
    LESSER = 267,
    EQUAL = 268,
    DIFFERENT = 269,
    LTE = 270,
    GTE = 271,
    AND = 272,
    OR = 273,
    NOT = 274,
    DECLARACOES = 275,
    GET = 276,
    GO = 277,
    STOP = 278,
    PUT = 279,
    WHILE = 280,
    IF = 281,
    ELSE = 282,
    ERRO = 283
  };
#endif
/* Tokens.  */
#define num 258
#define var 259
#define STRING 260
#define MULT 261
#define ADD 262
#define SUB 263
#define DIV 264
#define REST 265
#define GREATER 266
#define LESSER 267
#define EQUAL 268
#define DIFFERENT 269
#define LTE 270
#define GTE 271
#define AND 272
#define OR 273
#define NOT 274
#define DECLARACOES 275
#define GET 276
#define GO 277
#define STOP 278
#define PUT 279
#define WHILE 280
#define IF 281
#define ELSE 282
#define ERRO 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 30 "linguagem.y" /* yacc.c:1909  */
int numero; char *string; char *variavel;

#line 113 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
