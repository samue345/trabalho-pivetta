 #ifndef ESTRUTURAS_H
 #define ESTRUTURAS_H  
 typedef struct
 {
   int matricula;
   char *curso;
   char *nome;
 }Aluno;
typedef struct
{
   int codigo;
   char *nome;
 }Professor;
 
 typedef struct
{
   int codigo, carga;
   char *nome;
   char *curso;

 }Cadeira;
 
 typedef struct 
 {
   int id;
   Aluno* alun;
   Cadeira* ca;
   Professor* prof;
 }Turma;
 
 
 
 
 
 typedef struct lista{  
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


