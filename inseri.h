#ifndef iNSERI_H
#define INSERI_H
#include "estruturas.h"
#include "cria.h"
#include <stdio.h>
#include <stdlib.h>

Lista *inserirInicio(Lista *lista, Aluno *elemento)
{
   if (lista != NULL)
   {
      Lista *temp = lista;
      while (temp != NULL)
      {
         int igual=strcmp(lista->info->nome, elemento->nome);
         int igual2=strcmp(lista->info->curso, elemento->curso);
         if(lista->info->matricula == elemento->matricula && igual == 0 && igual2 == 0)
            return lista;

         temp = temp->prox;
      }
   }
   Lista *novo = (Lista *)malloc(sizeof(Lista));
   novo->info = elemento;
   novo->prox = lista;
   return novo;
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
ListaC *inserirInicioC(ListaC *lista, Cadeira *ele)
{
   if (lista != NULL)
   {
      ListaC *temp = lista;
      while (temp != NULL)
      {
         int eq=strcmp(lista->info->nome, ele->nome);
         int eq2=strcmp(lista->info->curso, ele->curso);
         if(lista->info->codigo == ele->codigo && lista->info->carga == ele->carga && eq == 0 && eq2 == 0)
            return lista;
         temp = temp->prox;
      }
   }
   ListaC *novo = (ListaC*)malloc(sizeof(ListaC));
   novo->info = ele;
   novo->prox = lista;
   return novo;
}
ListaT* inserirInicioT(ListaT* lista, Turma* turma)
{
   if (lista != NULL)
   {
      ListaT *temp = lista;
      while (temp != NULL)
      {
         if(lista->info == turma)
            return lista;

         temp = temp->prox;
      }
   }
   ListaT *novo = (ListaT*)malloc(sizeof(ListaT));
   novo->info = turma;
   novo->prox = lista;
   return novo;  
}

#endif
