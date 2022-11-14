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
         if(lista->info == elemento)
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
         if(lista->info == elemento)
            return lista;

         temp = temp->prox;
      }
   }
   ListaP *novo = (ListaP *)malloc(sizeof(ListaP));
   novo->info = elemento;
   novo->prox = lista;
   return novo;
}
ListaC *inserirInicioC(ListaC *lista, Cadeira *elemento)
{
   if (lista != NULL)
   {
      ListaC *temp = lista;
      while (temp != NULL)
      {
         if(lista->info == elemento)
            return lista;

         temp = temp->prox;
      }
   }
   ListaC *novo = (ListaC*)malloc(sizeof(ListaC));
   novo->info = elemento;
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
