/* exprtree.h */

#ifndef MAXLEN
#define  MAXLEN  80
#endif

enum { NO, SI };
enum { AND, OR, IMP, DBLIMP, NOT, VARIABLE };	 //  Tipos
enum { ERR_SINTAXIS, ERR_PARENTESIS, ERR_MEMORIA, ERR_CONECBINARIO,
       ERR_SIMBOLOINVALIDO };

struct ExprTree {
    int Tipo;
    char Expr[4];
    ExprTree *hder, *hizq;
};

#ifndef MAIN
#include  <setjmp.h>
extern int LenConec[6];	     //  ^,  |,  ->,  <->,  -
extern jmp_buf Err_MkTree;
#endif

void Error(int);
void Mem_Agot(void);

ExprTree *MkTree(char *);
void Quitar_Espacios(char *);
void SortTree(ExprTree *);
void Simplificar_DblImp(ExprTree *);
void Simplificar_Imp(ExprTree *);
