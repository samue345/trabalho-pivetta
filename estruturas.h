   Aluno *info;
   struct lista *prox;
} Lista;

typedef struct listap
{
   Professor *info;
   struct listap *prox;
} ListaP;

typedef struct listac
{
   Cadeira *info;
   struct listac *prox;
} ListaC;

typedef struct listat
{
   Turma *info;
   struct listat* prox;
}ListaT;

Lista *l = NULL;
ListaP *l2 = NULL;
ListaC *l3 = NULL;
ListaT *l4 = NULL;
Aluno *A1;
Professor *Pr;
Cadeira *Ca;
Turma *tu;


#endif


