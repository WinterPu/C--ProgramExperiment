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

#ifndef YY_YY_MINIJ_PARSE_H_INCLUDED
# define YY_YY_MINIJ_PARSE_H_INCLUDED
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
    CLASS = 258,
    PUB = 259,
    STATIC = 260,
    AND = 261,
    LT = 262,
    ADD = 263,
    MINUS = 264,
    TIMES = 265,
    LBP = 266,
    RBP = 267,
    LSP = 268,
    RSP = 269,
    LP = 270,
    RP = 271,
    INT = 272,
    IF = 273,
    ELSE = 274,
    WHILE = 275,
    PRINT = 276,
    ASSIGN = 277,
    VOID = 278,
    MAIN = 279,
    STR = 280,
    RETURN = 281,
    SEMI = 282,
    COMMA = 283,
    THIS = 284,
    NEW = 285,
    DOT = 286,
    ID = 287,
    LIT = 288,
    COMMENT = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 27 "MiniJ_parse.y" /* yacc.c:1909  */
 
		jSTM* sm;
		jEXP* ex;
		int   nu;
		char* sr;
	

#line 97 "MiniJ_parse.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINIJ_PARSE_H_INCLUDED  */
