/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          jbenedi@dsic.upv.es>     V. 24  **/
/*****************************************************************************/
%{
#include <stdio.h>
#include "header.h"
#include "libtds.h"

%}

%token MAS_ MENOS_ POR_ DIV_ PARA_ PARC_ AND_ OR_ EQUAL_ NEQUAL_ MAYOR_ MENOR_ MAIG_ MEIG_ EXCL_ ASIG_ TRUE_ FALSE_ FOR_ IF_ ELSE_ CORA_ CORC_ LLAA_ LLAC_ READ_ PRINT_ RETURN_ PYC_ COMA_ INT_ BOOL_ 
%token <ident> ID_ 
%token <ent> CTE_

%type <tCons> const
%type <ent> tipoSimp
%type <ent> paramForm
%type <ent> listParamForm
%type <tCons> bloque
%type <tCons> expreOP
%type <tCons> expre
%type <tCons> expreLogic
%type <tCons> expreIgual
%type <tCons> expreRel
%type <tCons> expreAd
%type <tCons> expreMul
%type <tCons> expreUna
%type <tCons> expreSufi
%type <tCons> opLogic
%type <tCons> opIgual
%type <tCons> opRel
%type <tCons> opAd
%type <tCons> opMul
%type <tCons> opUna
%type <ent> paramAct
%type <ent> listParamAct

%union {
    char *ident;
    int ent;
    TCONS tCons;

}

%%

programa            : { niv = 0; dvar = 0; numMain = 0; cargaContexto(niv); } listDecla {
                        //mostrarTdS();
                        SIMB simb = obtTdS("main");
                        if (simb.t == T_ERROR) {
                            yyerror("No existe la función main");
                        }
                        if (numMain > 1) {
                            yyerror("El programa tiene mas de un main");
                        }
                    }
                    ;
listDecla           : decla
                    | listDecla decla
                    ;
decla               : declaVar
                    | declaFunc
                    ;
declaVar            : tipoSimp ID_ PYC_
                    {
                        int refe = -1;
                        if(!insTdS($2, VARIABLE, $1, niv, dvar, refe)) {
                            yyerror("La variable ya existe");
                        } else {
                            dvar += TALLA_TIPO_SIMPLE;
                        }
                    }
                    | tipoSimp ID_ ASIG_ const PYC_
                    {
                        if ($1 != $4.tipo) {
                            yyerror("Los tipos no coinciden");
                        }
                        int refe = -1;
                        if(!insTdS($2, VARIABLE, $1, niv, dvar, refe)) {
                            yyerror("La variable ya existe");
                        } else {
                            dvar += TALLA_TIPO_SIMPLE;
                        }
                    }
                    | tipoSimp ID_ CORA_ CTE_ CORC_ PYC_
                    {
                        if($4 <= 0) {
                            yyerror("La dimension del vector debe ser mayor que 0");
                        }
                        int refe = insTdA($1, $4);
                        if(!insTdS($2, VARIABLE, T_ARRAY, niv, dvar, refe)) {
                            yyerror("El vector ya existe");
                        }
                        else {
                            dvar += $4 * TALLA_TIPO_SIMPLE;
                        }
                    }
                    
                    ;
const               : CTE_ { $$.tipo = T_ENTERO; $$.valor = $1; }
                    | TRUE_ { $$.tipo = T_LOGICO; $$.valor = 1; }
                    | FALSE_ { $$.tipo = T_LOGICO; $$.valor = 0; }
                    ;
tipoSimp            : INT_ { $$ = T_ENTERO; }
                    | BOOL_ { $$ = T_LOGICO; }
                    ;
declaFunc           : tipoSimp ID_ { 
                        $<ent>$ = dvar;
                        niv++; 
                        cargaContexto(niv); 
                        dvar = 0;
                        if ($2[0] == 'm' && $2[1] == 'a' &&
                            $2[2] == 'i' && $2[3] == 'n' &&
                            $2[4] == '\0') {
                            numMain++;
                        }
                    } PARA_ paramForm PARC_ {
                        int refe = $5;
                        if(!insTdS($2, FUNCION, $1, niv - 1, 0, refe)) {
                            yyerror("La función ya existe");
                        }
                    } bloque
                    {
                        if ($8.tipo != $1) {
                            printf("\nError en %d: El tipo de retorno no coincide con el de la función\n", numLinea);
                            numErrores++;
                        }
                        descargaContexto(niv);
                        niv--;
                        dvar = $<ent>3;
                    }
                    ;
paramForm           : { $$ = insTdD(-1, T_VACIO); }
                    | listParamForm { $$ = $1;}
                    ;
listParamForm       : tipoSimp ID_ {
                        $$ = insTdD(-1, $1);
                        int refe = -1;
                        if(!insTdS($2, PARAMETRO, $1, niv, dvar, refe)) {
                            yyerror("El parámetro ya existe");
                        } else {
                            dvar += TALLA_TIPO_SIMPLE;
                        }
                    }
                    | tipoSimp ID_ COMA_ listParamForm {
                        $$ = insTdD($4, $1);
                        int refe = -1;
                        if(!insTdS($2, PARAMETRO, $1, niv, dvar, refe)) {
                            yyerror("El parámetro ya existe");
                        } else {
                            dvar += TALLA_TIPO_SIMPLE;
                        }
                    }
                    ;
bloque              : LLAA_ declaVarLocal listInt RETURN_ { numLinea = yylineno; } expre PYC_ LLAC_ { $$ = $6; }
                    ;
declaVarLocal       : 
                    | declaVarLocal declaVar
                    ;
listInt             : 
                    | listInt inst
                    ;
inst                : LLAA_ listInt LLAC_ 
                    | instExpre
                    | instEntSal
                    | instSelec
                    | instIter
                    ;
instExpre           : expre PYC_
                    | PYC_
                    ;
instEntSal          : READ_ PARA_ ID_ PARC_ PYC_ {
                        SIMB simb = obtTdS($3);
                        if (simb.t != T_ENTERO) {
                            yyerror("El argumento del read debe ser de tipo simple");
                        }
                    }
                    | PRINT_ PARA_ expre PARC_ PYC_ {
                        if ($3.tipo != T_ENTERO) {
                            yyerror("La expresion del print debe ser de tipo simple");
                        }
                    }
                    ;
instSelec           : IF_ PARA_ expre PARC_  {
                        if ($3.tipo != T_LOGICO) {
                            yyerror("La expresion del if debe ser logica");
                        }
                    } inst ELSE_ inst
                    ;
instIter            : FOR_ PARA_ expreOP PYC_ expre PYC_ expreOP PARC_ {
                        if ($3.tipo != T_ENTERO || $7.tipo != T_ENTERO) {
                            yyerror("La expreOp del for debe ser de tipo simple");
                        }
                        if ($5.tipo != T_LOGICO) {
                            yyerror("La expresion del for debe ser logica");
                        }
                    } inst 
                    ;
expreOP             : { $$.tipo = T_ENTERO; }
                    | expre { $$ = $1; }
                    ;
expre               : expreLogic { $$ = $1; }
                    | ID_ ASIG_ expre {
                        SIMB simb = obtTdS($1);
                        if (simb.t == T_ERROR) {
                            yyerror("El objeto no existe");
                        } else {
                            if (simb.t != $3.tipo) {
                                yyerror("Los tipos en la asignación no coinciden");
                            }
                        }
                        $$.tipo = T_ENTERO;
                    }
                    | ID_ CORA_ expre CORC_ ASIG_ expre {
                        if ($3.tipo != T_ENTERO) {
                            yyerror("El indice del array debe ser entero");
                        } else {
                            SIMB simb = obtTdS($1);
                            if (simb.t != T_ARRAY) {
                                yyerror("La variable debe ser de tipo array");
                            } else {
                                DIM dim = obtTdA(simb.ref);
                                if (dim.telem != $6.tipo) {
                                    yyerror("El tipo del array no coincide con el de la variable");
                                }
                            }
                        }
                        $$.tipo = T_ENTERO; 
                    }
                    ;
expreLogic          : expreIgual { $$ = $1; }
                    | expreLogic opLogic expreIgual {
                        if ($1.tipo != $3.tipo) {
                            yyerror("Los tipos de la expresión Logic no coinciden");
                        } else {
                            if ($1.tipo != T_LOGICO || $3.tipo != T_LOGICO) {
                                yyerror("Los tipos de la expresión Rel deben ser enteros");
                            }
                        }
                        $$.tipo = $2.tipo;
                    }
                    ;
expreIgual          : expreRel { $$ = $1; }
                    | expreIgual opIgual expreRel {
                        if ($1.tipo != $3.tipo) {
                            yyerror("Los tipos de la expresión Igual no coinciden");
                        }
                        $$.tipo = $2.tipo;
                    }
                    ;
expreRel            : expreAd { $$ = $1; }
                    | expreRel opRel expreAd {
                        if ($1.tipo != $3.tipo) {
                            yyerror("Los tipos de la expresión Rel no coinciden");
                        } else {
                            if ($1.tipo != T_ENTERO || $3.tipo != T_ENTERO) {
                                yyerror("Los tipos de la expresión Rel deben ser enteros");
                            }
                        }
                        $$.tipo = $2.tipo;
                    }
                    ;
expreAd             : expreMul { $$ = $1; }
                    | expreAd opAd expreMul {
                        if ($1.tipo != $3.tipo) {
                            yyerror("Los tipos de la expresión Ad no coinciden");
                        } else {
                            if ($1.tipo != T_ENTERO || $3.tipo != T_ENTERO) {
                                yyerror("Los tipos de la expresión Ad deben ser enteros");
                            }
                        }
                        $$.tipo = $2.tipo;
                    }
                    ;
expreMul            : expreUna { $$ = $1; }
                    | expreMul opMul expreUna {
                        if ($1.tipo != $3.tipo) {
                            yyerror("Los tipos de la expresión Mul no coinciden");
                        } else {
                            if ($1.tipo != T_ENTERO || $3.tipo != T_ENTERO) {
                                yyerror("Los tipos de la expresión Mul deben ser enteros");
                            }
                        }
                        $$.tipo = $2.tipo;
                    }
                    ;
expreUna            : expreSufi { $$ = $1; }
                    | opUna expreUna {
                        if ($1.tipo != $2.tipo) {
                            yyerror("Los tipos de la expresión Una no coinciden");
                        } 
                        $$.tipo = $1.tipo;
                    }
                    ;
expreSufi           : const { $$ = $1; }
                    | PARA_ expre PARC_ { $$ = $2;}
                    | ID_ { 
                        SIMB simb = obtTdS($1);
                        $$.tipo = simb.t;
                    }
                    | ID_ CORA_ expre CORC_ {
                        int tipo = T_ENTERO;
                        if ($3.tipo != T_ENTERO) {
                            yyerror("El índice del array debe ser un entero");
                        } else {
                            SIMB simb = obtTdS($1);
                            if (simb.t != T_ARRAY) {
                                yyerror("La variable debe ser de tipo array");
                            } else {
                                DIM dim = obtTdA(simb.ref);
                                tipo = dim.telem;
                            }
                        }
                        $$.tipo = tipo;
                    }
                    | ID_ PARA_ paramAct PARC_ {
                        int tipo = T_ENTERO;
                        SIMB simb = obtTdS($1);
                        if (simb.t != T_ENTERO && simb.t != T_LOGICO) {
                            yyerror("La función no está declarada");
                        } else {
                            INF inf = obtTdD(simb.ref);
                            if (inf.tipo == T_ERROR) {
                                yyerror("El objeto no es una función");
                            } else {
                                if(!cmpDom(simb.ref, $3)) {
                                    yyerror("El tipo de los parámetros no coincide");
                                } else {
                                    tipo = inf.tipo;
                                }
                            }
                        }
                        $$.tipo = tipo;
                    }
                    ;
paramAct            : { $$ = insTdD(-1, T_VACIO); }
                    | listParamAct { $$ = $1; }
                    ;
listParamAct        : expre {
                        $$ = insTdD(-1, $1.tipo);
                    }
                    | expre COMA_ listParamAct {
                        $$ = insTdD($3, $1.tipo); 
                    }
                    ;
opLogic             : AND_ { $$.tipo = T_LOGICO; }
                    | OR_ { $$.tipo = T_LOGICO; }
                    ;
opIgual             : EQUAL_ { $$.tipo = T_LOGICO; }
                    | NEQUAL_ { $$.tipo = T_LOGICO; }
                    ;
opRel               : MAYOR_ { $$.tipo = T_LOGICO; }
                    | MENOR_ { $$.tipo = T_LOGICO; }
                    | MAIG_ { $$.tipo = T_LOGICO; }
                    | MEIG_ { $$.tipo = T_LOGICO; }
                    ;
opAd                : MAS_ { $$.tipo = T_ENTERO; }
                    | MENOS_ { $$.tipo = T_ENTERO; }
                    ;
opMul               : POR_ { $$.tipo = T_ENTERO; }
                    | DIV_ { $$.tipo = T_ENTERO; }
                    ;
opUna               : MAS_ { $$.tipo = T_ENTERO; }
                    | MENOS_ { $$.tipo = T_ENTERO; }
                    | EXCL_ { $$.tipo = T_LOGICO; }
                    ;

%%
