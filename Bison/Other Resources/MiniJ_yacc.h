/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
     CLASS = 258,
     ID = 259,
     LBP = 260,
     PUBLIC = 261,
     STATIC = 262,
     VOID = 263,
     MAIN = 264,
     LP = 265,
     STRING = 266,
     LSP = 267,
     RSP = 268,
     RP = 269,
     RBP = 270,
     EXTENDS = 271,
     SEMI = 272,
     RETURN = 273,
     COMMA = 274,
     BOOLEAN = 275,
     IF = 276,
     ELSE = 277,
     WHILE = 278,
     PRINT = 279,
     NUM = 280,
     TRUE = 281,
     FALSE = 282,
     THIS = 283,
     INT = 284,
     LENGTH = 285,
     SYSTEMPRINT = 286,
     LB = 287,
     RB = 288,
     ASSIGN = 289,
     TAN = 290,
     COMMENT = 291,
     INTEGER_LITERAL = 292,
     AND = 293,
     DOT = 294,
     NOT = 295,
     NEW = 296,
     LT = 297,
     EQ = 298,
     MINUS = 299,
     ADD = 300,
     TIMES = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


