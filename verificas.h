#ifndef VERIFICAS_H
#define VERIFICAS_H
#include "estruturas.h"
#include <stdlib.h>
#include <stdio.h>
#include "imprimi.h"
#include "buscar.h"
void digitado(int digito, Lista *l, ListaP* l2, ListaC* l3, ListaT* l4)
{
   char nome[40];
   char curso[40];
   int matricula, carga, codigo, digito2;
     if(digito == 0)
        imprimirA(l);
        
      if(digito== 1)
         imprimirP(l2);

      if(digito == 2)
         imprimirC(l3);

      if(digito== 3)
         imprimir(l4);

      if(digito == 4)
      {
         printf("digite [1] para buscar de alunos, [2] professores, [3] cadeiras, [4] turmas");
         scanf("%d", &digito2);
         if(digito2==1)
         {
             alunoB(nome, curso, &matricula);
             impriA(l, nome, curso, matricula);
         }
         if(digito2==2)
         {
               profB(nome, &codigo);
               impriP(l2, nome, codigo);
         }
         if(digito2==3)
         {
            cadeiraB(nome, curso, &carga, &codigo);
            impriC(l3, nome, curso, codigo, carga);

         }
         if(digito2==4)
         {
               int idr;

               imprimir(l4);
               printf("digite o id da turma: ");
               scanf(" %d", &idr);
               impriT(l4, idr);
         }
            
      }  

}
int verifica(ListaT *lista, Professor *prof, int id)
{
  if (lista != NULL)
  {
      ListaT *temp = lista;
      while (temp != NULL)
      {
         int igual=strcmp(temp->info->prof->nome, prof->nome);
         if(temp->info->id == id)
            if(igual != 0 || temp->info->prof->codigo != prof->codigo)
               return 1;

         if(temp->info->id != id)
            if(igual == 0 && temp->info->prof->codigo == prof->codigo)
               return -1;

         temp = temp->prox;
      }
   }
   return 0;
   
}
bool verificaA(ListaT *lista, Aluno * aluno, int id)
{
  if (lista != NULL)
  {
      ListaT *temp = lista;
      while (temp != NULL)
      {
         if(temp->info->alun->matricula == aluno->matricula && temp->info->id == id)
             return false;

         temp = temp->prox;
      }
   }
   return true;
   
}
bool verificaC(ListaT *lista, Cadeira *cadeira, int id)
{
  if (lista != NULL)
  {
      ListaT *temp = lista;
      while (temp != NULL)
      {
         int igual=strcmp(temp->info->ca->nome, cadeira->nome);
         int igual2=strcmp(temp->info->ca->curso, cadeira->curso);
         if( temp->info->id == id)
            if(igual != 0 || igual2 != 0 || temp->info->ca->codigo != cadeira->codigo)
                return false;

         temp = temp->prox;
      }
   }
   return true;
   
}

void verificacao(int id, char nome[40], int codigo)
{
   if (verifica(l4, Pr, id) == -1)
       printf("esse professor já está matriculado em outra turma. Tente outro: ");

   if (verifica(l4, Pr, id) == 1)
       printf("As informações do professor da turma estão incorretas, tenta mais uma vez: ");

   profB(nome, &codigo);
   Pr = criarProfessor(nome, codigo);

}

#endif
