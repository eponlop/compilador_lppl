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

#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
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
    MAS_ = 258,                    /* MAS_  */
    MENOS_ = 259,                  /* MENOS_  */
    POR_ = 260,                    /* POR_  */
    DIV_ = 261,                    /* DIV_  */
    PARA_ = 262,                   /* PARA_  */
    PARC_ = 263,                   /* PARC_  */
    AND_ = 264,                    /* AND_  */
    OR_ = 265,                     /* OR_  */
    EQUAL_ = 266,                  /* EQUAL_  */
    NEQUAL_ = 267,                 /* NEQUAL_  */
    MAYOR_ = 268,                  /* MAYOR_  */
    MENOR_ = 269,                  /* MENOR_  */
    MAIG_ = 270,                   /* MAIG_  */
    MEIG_ = 271,                   /* MEIG_  */
    EXCL_ = 272,                   /* EXCL_  */
    ASIG_ = 273,                   /* ASIG_  */
    TRUE_ = 274,                   /* TRUE_  */
    FALSE_ = 275,                  /* FALSE_  */
    FOR_ = 276,                    /* FOR_  */
    IF_ = 277,                     /* IF_  */
    ELSE_ = 278,                   /* ELSE_  */
    CORA_ = 279,                   /* CORA_  */
    CORC_ = 280,                   /* CORC_  */
    LLAA_ = 281,                   /* LLAA_  */
    LLAC_ = 282,                   /* LLAC_  */
    READ_ = 283,                   /* READ_  */
    PRINT_ = 284,                  /* PRINT_  */
    RETURN_ = 285,                 /* RETURN_  */
    PYC_ = 286,                    /* PYC_  */
    COMA_ = 287,                   /* COMA_  */
    INT_ = 288,                    /* INT_  */
    BOOL_ = 289,                   /* BOOL_  */
    ID_ = 290,                     /* ID_  */
    CTE_ = 291                     /* CTE_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "src/asin.y"

    char *ident;
    int ent;
    TCONS tCons;


#line 107 "asin.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ASIN_H_INCLUDED  */
