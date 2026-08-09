/* mktree.c */

#include "exprtree.h"

#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <ctype.h>

struct ExprTree *MkTree(char *Expresion)
{
    char ExprIzq[MAXLEN], ExprDer[MAXLEN];
    int Pos;		      //  Guarda la posici¢n del conectivo principal
    struct ExprTree *N;
    void Quitar_Parentesis_Externos(char *);
    int PosConecPrin(char *, int *);

    if ( !*Expresion )
       return(NULL);
    Quitar_Parentesis_Externos(Expresion);
    if ( !(N = new ExprTree) )
       Error(ERR_MEMORIA);
    N->hizq = N->hder = NULL;

    Pos = PosConecPrin(Expresion, &(N->Tipo));

    if ( N->Tipo == VARIABLE ) {     //  No hay conectivos en la expresi¢n

       if ( strlen(Expresion) > 1 )
	  Error(ERR_SINTAXIS);
       if ( *Expresion < 'a'  ||  *Expresion > 'z' )
	  Error(ERR_SIMBOLOINVALIDO);
       strcpy(N->Expr, Expresion);

    } else if ( N->Tipo != NOT ) {   //  El conectivo principal es binario

       strncpy(ExprIzq, Expresion, Pos);
       ExprIzq[Pos] = NULL;
       strcpy(ExprDer, Expresion+Pos+LenConec[N->Tipo]);
       N->hder = MkTree(ExprDer);
       N->hizq = MkTree(ExprIzq);
       strncpy(N->Expr, Expresion+Pos, LenConec[N->Tipo]);
       N->Expr[ LenConec[ N->Tipo ] ] = NULL;

    } else {			     //  El conectivo principal es NOT

       *(N->Expr) = '-';
       N->hizq = NULL;
       N->hder = MkTree(Expresion+1);

    }
    return(N);
}

void Quitar_Parentesis_Externos(char *Expresion)
/*
     Esta funci¢n quita los par‚ntesis externos de una expresi¢n, por
  ejemplo
	 (( p -> q ^ (p <-> -r) ))    ---->    p -> q ^ (p <-> -r)

     Esta funci¢n no revisar  todos los casos de par‚ntesis mal emparejados.
									*/
{
   int Pos = 0, Num = 0;
   int Del_Char(char *, int);

   while ( *(Expresion+Pos) ) {
      if ( *(Expresion+Pos) == '(' ) {
	 Num++;
	 if ( Num == 1 && Pos > 0 )
	    return;
      } else if ( *(Expresion+Pos) == ')' ) {
	 Num--;
	 if ( Num == 0 && Pos < strlen(Expresion)-1 )
	    return;
      }
      Pos++;
   }
   if ( Num > 0 )
      Error(ERR_PARENTESIS);
   if ( *Expresion == '(' ) {
      Del_Char(Expresion, 1);
      Del_Char(Expresion, Pos-1);
      Quitar_Parentesis_Externos(Expresion);
   }
}

int Del_Char(char *s, int pos)
{
  if ( pos > strlen(s)  ||  pos < 1  ||  !s )  return( NO);

  s = s + pos - 1;
  while ( *s ) {
    *s = *(s+1);
    s++;
  }
  return( SI );
}

void Quitar_Espacios(char *s)
{
  int pos = 0;

  while ( *(s+pos) )
    if ( *(s+pos) == ' ' )
      Del_Char(s, pos+1);
    else
      pos++;
}

int PosConecPrin(char *Expresion, int *Tipo)
/*
     Esta funci¢n recibe una expresi¢n l¢gica y regresa la posici¢n de su
   conectivo principal, o la del primer conectivo principal.
     Adem s, en la variable Tipo, indica qu‚ conectivo es.
									*/
{
   int Pos, r = 0, LenExpr = strlen(Expresion), Num = 0;

   *Tipo = -1;
   while ( *(Expresion+r) ) {
      if ( *(Expresion+r) == '(' )
	 Num++;
      if ( *(Expresion+r) == ')' )
	 Num--;
      if ( Num < 0 )
	 Error(ERR_PARENTESIS);
      if ( Num > 0 ) {
	 r++;
	 continue;
      }
      if ( *(Expresion+r) == '^'  &&  *Tipo < AND ) {
	 Pos = r++;
	 *Tipo = AND;
      } else if ( *(Expresion+r) == '|'  &&  *Tipo < OR ) {
	 Pos = r++;
	 *Tipo = OR;
      } else if ( *(Expresion+r) == '-'  &&  *(Expresion+r+1) == '>'
		  &&  *Tipo < IMP ) {
	 Pos = r;
	 *Tipo = IMP;
	 r+=2;
      } else if ( *(Expresion+r)   == '<'  &&  *(Expresion+r+1) == '-'  &&
		  *(Expresion+r+2) == '>'  &&  *Tipo < DBLIMP ) {
	 Pos = r;
	 *Tipo = DBLIMP;
	 r+=3;
      } else
	 r++;
   }

   if ( (Pos == 0  ||  Pos == LenExpr-LenConec[*Tipo])  &&  *Tipo>-1 )
      Error(ERR_CONECBINARIO);

   if ( *Tipo == -1 ) {			//   No hubo conectivos binarios
      if ( *Expresion == '-' )
	 *Tipo = NOT;
      else
	 *Tipo = VARIABLE;
      Pos = 0;
   }
   return(Pos);
}

void SortTree(ExprTree *Raiz)
{
   ExprTree *Ntmp;

   if ( !Raiz )  return;

   if ( Raiz->Tipo == NOT ) {
      SortTree(Raiz->hder);
      return;
   }
   if ( Raiz->Tipo == IMP ) {
      SortTree(Raiz->hizq);
      SortTree(Raiz->hder);
      return;
   }
   if ( Raiz->hizq->Tipo > Raiz->hder->Tipo  ||
    (Raiz->hizq->Tipo == VARIABLE   &&   Raiz->hder->Tipo == VARIABLE  &&
		*(Raiz->hizq->Expr) > *(Raiz->hder->Expr) ) ) {
      Ntmp = Raiz->hizq;
      Raiz->hizq = Raiz->hder;
      Raiz->hder = Ntmp;
      SortTree(Raiz->hizq);
      SortTree(Raiz->hder);
   } else if ( Raiz->hizq->Tipo == Raiz->hder->Tipo ) {
      SortTree(Raiz->hizq);
      SortTree(Raiz->hder);
      if (  (Raiz->hizq->Tipo == NOT  &&
	 ( Raiz->hizq->hder->Tipo > Raiz->hder->hder->Tipo  ||
(Raiz->hizq->hder->Tipo == VARIABLE && Raiz->hder->hder->Tipo == VARIABLE  &&
	     *(Raiz->hizq->hder->Expr) > *(Raiz->hder->hder->Expr) ))) ||
	    (Raiz->hizq->hizq->Tipo > Raiz->hder->hizq->Tipo  ||
(Raiz->hizq->hizq->Tipo ==VARIABLE && Raiz->hder->hizq->Tipo == VARIABLE  &&
	     *(Raiz->hizq->hizq->Expr) > *(Raiz->hder->hizq->Expr)  ))) {
	    Ntmp = Raiz->hizq;
	    Raiz->hizq = Raiz->hder;
	    Raiz->hder = Ntmp;
      }
   }
}

void Error(int error)
{
   switch (error) {
     case ERR_SINTAXIS:
	puts("Hay un error de sintaxis en la expresi¢n");
	break;
     case ERR_PARENTESIS:
	puts("Los par‚ntesis est n mal emparejados en la expresi¢n");
	break;
     case ERR_CONECBINARIO:
	puts("Conectivo binario mal utilizado en la expresi¢n");
	break;
     case ERR_SIMBOLOINVALIDO:
	puts("Hay un s¡mbolo inv lido en la expresi¢n");
	puts("Solo se permiten:   a-z,  -,  <,  >,  |,  ^,  (,  )");
	break;
     case ERR_MEMORIA:
	puts("La memoria se agot¢ mientras se analizaba la expresi¢n");
	break;
   }
   longjmp(Err_MkTree, 1);
}
