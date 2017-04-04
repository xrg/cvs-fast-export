/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_GRAM_H_INCLUDED
# define YY_YY_GRAM_H_INCLUDED
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
    HEAD = 258,
    BRANCH = 259,
    ACCESS = 260,
    SYMBOLS = 261,
    LOCKS = 262,
    COMMENT = 263,
    DATE = 264,
    BRANCHES = 265,
    DELTATYPE = 266,
    NEXT = 267,
    COMMITID = 268,
    EXPAND = 269,
    GROUP = 270,
    KOPT = 271,
    OWNER = 272,
    PERMISSIONS = 273,
    FILENAME = 274,
    MERGEPOINT = 275,
    HARDLINKS = 276,
    DESC = 277,
    LOG = 278,
    TEXT = 279,
    STRICT = 280,
    AUTHOR = 281,
    STATE = 282,
    SEMI = 283,
    COLON = 284,
    IGNORED = 285,
    BRAINDAMAGED_NUMBER = 286,
    LOGIN = 287,
    TOKEN = 288,
    DATA = 289,
    TEXT_DATA = 290,
    NUMBER = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "/home/panos/build/cvs-fast-export//gram.y" /* yacc.c:1909  */

    int		i;
    cvstime_t	date;
    char	*s; 		/* on heap */
    const char	*atom;
    cvs_text	text;
    cvs_number	number;
    cvs_symbol	*symbol;
    cvs_version	*version;
    cvs_version	**vlist;
    cvs_patch	*patch;
    cvs_patch	**patches;
    cvs_branch	*branch;
    cvs_file	*file;

#line 107 "gram.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void *scanner, cvs_file *cvsfile);

#endif /* !YY_YY_GRAM_H_INCLUDED  */
