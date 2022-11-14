#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "estruturas.h"
#include "inseri.h"
#include "inserifim.h"
#include "remover.h"
#include "imprimi.h"
#include "buscar.h"
#include "verificas.h"
#include "funcoes.h"

int main()
{

   int Continue = 1, matricula, carga, codigo, inseri, id = 1;
   char escolha[30], nome[40], curso[40];
 
   while (Continue == 1)
   {
      printa();
      printf("\n");
      scanf(" %d", &inseri);
      if (inseri == 1)
      {
         int inseriI = 1;
         while (inseriI == 1)
         {
            if (l == NULL && l2 == NULL && l3 == NULL && l4 == NULL)
             funcaoEscreve(nome, curso, matricula, carga, codigo);

            else
            {
               printf("digite inicio para inserir começo ou digite fim para escrever no fim da lista ");
               scanf(" %s", escolha);
               if (strcmp(escolha, "fim"))
                  funcaoEscreve2(nome, curso, matricula, carga, codigo, id);
               
               else if (strcmp(escolha, "inicio"))
                  funcaoEscreve2(nome, curso, matricula, carga, codigo, id);
               
               while (verifica(l4, Pr, id) != 0)
                   verificacao(id, nome, codigo);
                 
            }
            tu = criarTurma(A1, Pr, Ca, id);
            l4 = inserirInicioT(l4, tu);
            printf("digite [1] para inserir mais alunos nessa turma ou digite [0] para sair: ");
            scanf(" %d", &inseriI);
         }
      }
      else if (inseri == 0)
      {
         int retirar1;

         printf("digite [1] para remover de alunos, [2] para professores, [3] para cadeiras e [4] para turmas ");
         scanf(" %d", &retirar1);
         if (retirar1 == 1)
         {
            alunoB(nome, curso, &matricula);
            l = retirar(l, nome, curso, matricula);
         }
         if (retirar1 == 2)
         {
            profB(nome, &codigo);
            l2 = retirarP(l2, nome, codigo);
         }
         if (retirar1 == 3)
         {
            cadeiraB(nome, curso, &carga, &codigo);
            l3 = retirarC(l3, nome, curso, codigo, carga);
         }
         if (retirar1 == 4)
         {
            int conti = 1;
            while (conti == 1)
            {
               int idr;
               imprimir(l4);
               printf("digite o id da turma: ");
               scanf(" %d", &idr);
               l4 = retirarT(l4, idr);
               system("clear");
               printf("continuar: 1 sair: 0");
               scanf(" %d", &conti);
            }
         }
      }
      if (inseri == 3)
      {
         int digito, digito2;
         printf("digite [0] para mostrar alunos, [1] professores, [2] cadeiras, [3] turmas [4] busca avançada ");
         scanf("%d", &digito);
         digitado(digito, l, l2, l3, l4);
      }
      printf("continuar: 1 sair: 0");
      scanf(" %d", &Continue);
      id++;
   }
   imprimir(l4);

   return 0;
}
