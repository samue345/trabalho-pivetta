#ifndef REMOVER_H
#define REMOVER_H
#include "estruturas.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

Lista *retirar(Lista *lista, char nome[20], char curso[20], int mat)
{
    Lista *anterior=NULL;
    Lista *temp= lista;
    int igual=strcmp(temp->info->nome, nome);
    int igual2 = strcmp(temp->info->curso, curso);
  
    while (temp->prox != NULL && temp->info->matricula != mat &&  igual != 0 && igual2 != 0)
    {   
            anterior=temp;
            temp=temp->prox;
    }
        if(temp == NULL)
            return lista;
        
        if(anterior == NULL)
         lista=temp->prox;
        else
        anterior->prox=temp->prox;
        free(temp);


    return lista;
    
}

ListaP *retirarP(ListaP *lista, char nome[20], int codigo)
{
    ListaP *anterior=NULL;
    ListaP *temp= lista;

    int igual=strcmp(temp->info->nome, nome);
   
    while (temp->prox != NULL && temp->info->codigo != codigo && igual != 0)
    {   
            anterior=temp;
            temp=temp->prox;
    }
        if(temp == NULL)
            return lista;
        
        if(anterior == NULL)
         lista=temp->prox;
        else
        anterior->prox=temp->prox;
        free(temp);


    return lista;
    
}
ListaC *retirarC(ListaC *lista, char nome[20], char curso[20], int carga, int codigo)
{
    ListaC *anterior=NULL;
    ListaC *temp= lista;

    int igual=strcmp(temp->info->nome, nome);
    int igual2 = strcmp(temp->info->curso, curso);

    while(temp->prox != NULL && temp->info->codigo != codigo && temp->info->carga !=carga && igual2 != 0 && igual == 0)
    {   
            anterior=temp;
            temp=temp->prox;
    }
        if(temp == NULL)
            return lista;
        
        if(anterior == NULL)
         lista=temp->prox;
        else
        anterior->prox=temp->prox;
        free(temp);


    return lista;
    
}
ListaT *retirarT(ListaT *lista, int id)
{
    ListaT *anterior=NULL;
    ListaT *temp= lista;

  

    while (temp->prox != NULL && temp->info->id != id)
    {   
            anterior=temp;
            temp=temp->prox;
    }
        if(temp == NULL)
            return lista;
        
        if(anterior == NULL)
         lista=temp->prox;
        else
        anterior->prox=temp->prox;
        free(temp);


    return lista;
    
}


#endif
