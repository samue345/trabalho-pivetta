#ifndef iNSERIFIM_H
#define INSERIFIM_H
#include "estruturas.h"
#include <stdio.h>
#include <stdlib.h>

Lista *ultimo(Lista *lista)
{
   Lista* aux=lista;
   while (aux->prox != NULL)
      aux=aux->prox;
   return aux;
   
}
ListaP *ultimoP(ListaP *lista)
{
   ListaP* aux=lista;
   while (aux->prox != NULL)
      aux=aux->prox;
   return aux;
   
}
ListaC *ultimoC(ListaC *lista)
{
   ListaC* aux=lista;
   while (aux->prox != NULL)
      aux=aux->prox;
   return aux;
   
}
ListaT *ultimoT(ListaT *lista)
{
   ListaT* aux=lista;
   while (aux->prox != NULL)
      aux=aux->prox;
   return aux;
   
}

Lista *inserirFim(Lista *lista, Aluno *aluno)
{
   if(lista != NULL)
   {
      Lista *temp = lista;
      while (temp != NULL)
      {
         if(lista->info == aluno)
            return lista;

         temp = temp->prox;
      }
   }
   Lista *novo=(Lista*)malloc(sizeof(Lista));
   if(lista != NULL)
      ultimo(lista)->prox=inserirInicio(NULL, aluno);
      return lista == NULL ? inserirInicio(NULL, aluno) : lista;
   

}
ListaP *inserirFimP(ListaP *lista, Professor *professor)
{
   if(lista != NULL)
   {
      ListaP *temp = lista;
      while (temp != NULL)
      {
          int igual=strcmp(lista->info->nome, professor->nome);
           if(igual == 0 && lista->info->codigo == professor->codigo)
               return lista;

         temp = temp->prox;
      }
   }
   ListaP *novo=(ListaP*)malloc(sizeof(ListaP));
   if(lista != NULL)
      ultimoP(lista)->prox=inserirInicioP(NULL, professor);
      return lista == NULL ? inserirInicioP(NULL, professor) : lista;
   

}
ListaC *inserirFimC(ListaC *lista, Cadeira *ca)
{
   if(lista != NULL)
   {
      ListaC *temp = lista;
      while (temp != NULL)
      {
          int eq=strcmp(lista->info->nome, ca->nome);
         int eq2=strcmp(lista->info->curso, ca->curso);
         if(lista->info->codigo == ca->codigo && lista->info->carga == ca->carga && eq == 0 && eq2 == 0)

         temp = temp->prox;
      }
   }
   ListaC *novo=(ListaC*)malloc(sizeof(ListaC));
   if(lista != NULL)
      ultimoC(lista)->prox=inserirInicioC(NULL, ca);
      return lista == NULL ? inserirInicioC(NULL, ca) : lista;
   

}
ListaT *inserirFimT(ListaT *lista, Turma *turma)
{
   if(lista != NULL)
   {
      ListaT *temp = lista;
      while (temp != NULL)
      {
         if(lista->info == turma)
            return lista;

         temp = temp->prox;
      }
   }
   ListaT *novo=(ListaT*)malloc(sizeof(ListaT));
   if(lista != NULL)
      ultimoT(lista)->prox=inserirInicioT(NULL, turma);
      return lista == NULL ? inserirInicioT(NULL, turma) : lista;
   

}

#endif
