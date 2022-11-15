#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
   int codigo;
   char *nome;
 }Professor;



 typedef struct listap
{
   Professor *info;
   struct listap *prox;
} ListaP;

Professor *criarProfessor(char *nome, int codigo)
{
   Professor *pro = (Professor *)malloc(sizeof(Professor) * 30);
   pro->nome = (char *)malloc(sizeof(char) * 30);
   strcpy(pro->nome, nome);
   pro->codigo = codigo;
   return pro;
}

void imprimirP(ListaP* lista)
{
   if (lista == NULL)
      printf("Lista vázia");
   else
   {
      ListaP *temp = lista;
      while (temp != NULL)
      {
         printf(" %s %d", temp->info->nome, temp->info->codigo);
         printf("\n");
         temp = temp->prox;

      }
   }
}

ListaP *inserirInicioP(ListaP *lista, Professor *elemento)
{
   if (lista != NULL)
   {
      ListaP *temp = lista;
      while (temp != NULL)
      {
           int igual=strcmp(lista->info->nome, elemento->nome);
           if(igual == 0 && lista->info->codigo == elemento->codigo)
               return lista;

         temp = temp->prox;
      }
   }
   ListaP *novo = (ListaP *)malloc(sizeof(ListaP));
   novo->info = elemento;
   novo->prox = lista;
   return novo;
}

int  main()
{
    ListaP *l2 = NULL;
    Professor *Pr =criarProfessor("cleber", 12);
    l2=inserirInicioP(l2, Pr);
    Professor *Pr2 =criarProfessor("cleber", 12);
    l2=inserirInicioP(l2, Pr2);


    imprimirP(l2);



    return 0;
}