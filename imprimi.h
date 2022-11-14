#ifndef IMPRIMI_H
#define IMPRIMI_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estruturas.h"

void imprimir(ListaT* listaT)
{
   if (listaT == NULL)
      printf("Lista vázia");
   else
   {
      ListaT *temp = listaT;
      while (temp != NULL)
      {
         printf("Turma: %d ", temp->info->id);
         printf(" Aluno: %s Curso: %s Matricula: %d ", 
         temp->info->alun->nome, 
         temp->info->alun->curso,
         temp->info->alun->matricula);
         printf(" Cadeira: %s  Curso: %s  Codigo: %d  Carga-horária: %d ",
          temp->info->ca->nome, 
          temp->info->ca->curso,
          temp->info->ca->codigo, 
          temp->info->ca->carga);
          printf(" Professor: %s Codigo: %d ", temp->info->prof->nome, temp->info->prof->codigo);
          printf("\n");
         temp = temp->prox;
      }
   }
}
void imprimirA(Lista* lista)
{
   if (lista == NULL)
      printf("Lista vázia");
   else
   {
      Lista *temp = lista;
      while (temp != NULL)
      {
          printf(" Aluno: %s Matricula: %d Curso: %s", temp->info->nome, temp->info->matricula, temp->info->curso);
          printf("\n");
         temp = temp->prox;
      }
   }
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
void imprimirC(ListaC* lista)
{
   if (lista == NULL)
      printf("Lista vázia");
   else
   {
      ListaC *temp = lista;
      while (temp != NULL)
      {
         printf(" Cadeira: %s Curso: %s Carga-horária: %d codigo: %d", 
         temp->info->nome, 
         temp->info->curso, 
         temp->info->carga, 
         temp->info->codigo);
         printf("\n");
         temp = temp->prox;
      }
   }
}

void impriA(Lista* lista, char nome[40], char curso[40], int matricula)
{
   if (lista == NULL)
      printf("Lista vázia");
   else
   {
      Lista *temp = lista;
      while (temp != NULL)
      {
        int igual= strcmp(temp->info->nome, nome);
        int igual2= strcmp(temp->info->curso, curso);
        if(igual2 == 0 && igual == 0 && temp->info->matricula == matricula)
        {
            printf(" Aluno: %s Matricula: %d Curso: %s", temp->info->nome, temp->info->matricula, temp->info->curso);
            printf("\n");
        }
         temp = temp->prox;
      }
   }
}
void impriP(ListaP* lista, char nome[40], int codigo)
{
   if (lista == NULL)
      printf("Lista vázia");
   else
   {
      ListaP *temp = lista;
      while (temp != NULL)
      {
        int igual=strcmp(temp->info->nome, nome);
        if(igual == 0 && temp->info->codigo == codigo)
        {
            printf(" Professor: %s Codigo: %d", temp->info->nome, temp->info->codigo);
            printf("\n");
        }
         temp = temp->prox;

      }
   }
}
void impriC(ListaC* lista, char nome[40], char curso[40], int codigo, int carga)
{
   if (lista == NULL)
      printf("Lista vázia");
   else
   {
      ListaC *temp = lista;
      while (temp != NULL)
      {
        int igual= strcmp(temp->info->nome, nome);
        int igual2= strcmp(temp->info->curso, curso);
        if(igual2 == 0 && igual == 0 && temp->info->carga == carga && temp->info->codigo == codigo)
        {
            printf(" Cadeira: %s Curso: %s Carga-horária: %d Curso: %d", 
            temp->info->nome, 
            temp->info->curso, 
            temp->info->carga, 
            temp->info->codigo);
            printf("\n");
        }
         temp = temp->prox;
      }
   }
}
void impriT(ListaT* lista, int id)
{
   if (lista == NULL)
      printf("Lista vázia");
   else
   {
      ListaT *temp = lista;
      while (temp != NULL)
      {
        if(temp->info->id == id)
        {
            printf("Turma: %d ", temp->info->id);
            printf(" Aluno: %s Curso: %s Matricula: %d ", 
            temp->info->alun->nome, 
            temp->info->alun->curso,
            temp->info->alun->matricula);
            printf(" Cadeira: %s  Curso: %s  Codigo: %d  Carga-horária: %d ",
            temp->info->ca->nome, 
            temp->info->ca->curso,
            temp->info->ca->codigo, 
            temp->info->ca->carga);
            printf(" Professor: %s Codigo: %d ", temp->info->prof->nome, temp->info->prof->codigo);
            printf("\n");
        }
         temp = temp->prox;
      }
   }
}
#endif
