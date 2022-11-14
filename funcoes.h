#ifndef FUNCOES_H
#define FUNCOES_H
#include "estruturas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cria.h"


void funcaoEscreve(char nome[40], char curso[40], int matricula, int carga, int codigo)
{
    alunoB(nome, curso, &matricula);
    A1 = criarAluno(nome, curso, matricula);
    l = inserirInicio(l, A1);

    profB(nome, &codigo);
    Pr = criarProfessor(nome, codigo);
    l2 = inserirInicioP(l2, Pr);

    cadeiraB(nome, curso, &carga, &codigo);
    Ca = criarCadeira(nome, curso, carga, codigo);
    l3 = inserirInicioC(l3, Ca);
}


void funcaoEscreve2(char nome[40], char curso[40], int matricula, int carga, int codigo, int id)
{
   alunoB(nome, curso, &matricula);
   A1 = criarAluno(nome, curso, matricula);
   while (!verificaA(l4, A1, id))
   {
      printf("Esse aluno já está matriculado na turma, tente outro: ");
      alunoB(nome, curso, &matricula);
      A1 = criarAluno(nome, curso, matricula);
   }
   l = inserirFim(l, A1);

   profB(nome, &codigo);
   Pr = criarProfessor(nome, codigo);
   l2 = inserirFimP(l2, Pr);

   cadeiraB(nome, curso, &carga, &codigo);
   Ca = criarCadeira(nome, curso, carga, codigo);
   while (!verificaC(l4, Ca, id))
   {
      printf("Informações sobre a cadeira incorretas, tente novamente: ");
      cadeiraB(nome, curso, &carga, &codigo);
      Ca = criarCadeira(nome, curso, carga, codigo);
   }
   l3 = inserirFimC(l3, Ca);
   
}

void printa()
{
    printf("======================");
    printf(" remover da lista[0] inserir[1] buscar na lista[3] ");
    printf("====================== "); 
}


#endif
