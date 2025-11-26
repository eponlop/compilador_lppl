/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          <jbenedi@dsic.upv.es>   V.24    **/
/*****************************************************************************/
%{
#include "header.h"
#include "asin.h"
#include <stdio.h>

#define  retornar(x) {if (verbosidad) ECHO ; return (x) ; }
%}
/*----------------------------------------------------------------------
  Dado que las funciones "input()" y "unput(c)" son costosas y no las
  utilizaremos, evitaremos que se generen automaticamente sus rutinas
  correspondientes desactivandolas mediante las siguientes opciones:
----------------------------------------------------------------------*/
%option noinput
%option nounput
/*----------------------------------------------------------------------
  Para mantener el numero de linea actual en la variable global yylineno
----------------------------------------------------------------------*/
%option yylineno

delimitador     [ \t\n]+
digito          [0-9]
entero          {digito}+
real            ({digito}*"."{digito}+)|({digito}+"."{digito}*)
letra           [A-Za-z]
var             {letra}("_"|{letra}|{digito})*



%%

{delimitador}   { if (verbosidad) ECHO; }
"+"             { retornar (MAS_);}
"-"             { retornar (MENOS_); }
"*"             { retornar (POR_); }
"/"             { retornar (DIV_); }
"("             { retornar (PARA_); }
")"             { retornar (PARC_); }

"&&"            { retornar (AND_); }
"||"            { retornar (OR_); }
"=="            { retornar (EQUAL_); }
"!="            { retornar (NEQUAL_); }
">"             { retornar (MAYOR_); }
"<"             { retornar (MENOR_); }
">="            { retornar (MAIG_); }
"<="            { retornar (MEIG_); }
"!"             { retornar (EXCL_); }
"="             { retornar (ASIG_); }
"true"          { retornar (TRUE_); }
"false"         { retornar (FALSE_); }
"for"           { retornar (FOR_); }
"if"            { retornar (IF_); }
"else"          { retornar (ELSE_); }
"["             { retornar (CORA_); }
"]"             { retornar (CORC_); }
"{"             { retornar (LLAA_); }
"}"             { retornar (LLAC_); }
"read"          { retornar (READ_); }
"print"         { retornar (PRINT_); }
"return"        { retornar (RETURN_); }
";"             { retornar (PYC_); }
","             { retornar (COMA_);}
"int"           { retornar (INT_); }
"bool"          { retornar (BOOL_); }
{var}           { yylval.ident = strdup(yytext); retornar (ID_); }
{entero}        { yylval.ent = atoi(yytext); retornar (CTE_); }
{real}          { yylval.ent = atoi(yytext); retornar (CTE_); }
"//"[^\n]*      { if (verbosidad) ECHO; }


.				        { yyerror("Caracter desconocido") ;}
%%
