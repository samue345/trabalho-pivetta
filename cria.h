#ifndef CRIA_H
#define CRIA_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estruturas.h"

Aluno *criarAluno(char *nome, char *curso, int matricula)
{
   
   Aluno *aluno = (Aluno *)malloc(sizeof(Aluno) * 40);
   aluno->nome = (char *)malloc(sizeof(char) * 40);
   aluno->curso = (char *)malloc(sizeof(char) * 50);
   strcpy(aluno->nome, nome);
   strcpy(aluno->curso, curso);
   aluno->matricula = matricula;

   return aluno;
}
Professor *criarProfessor(char *nome, int codigo)
{
   Professor *pro = (Professor *)malloc(sizeof(Professor) * 30);
   pro->nome = (char *)malloc(sizeof(char) * 30);
   strcpy(pro->nome, nome);
   pro->codigo = codigo;
   return pro;
}
Cadeira* criarCadeira(char* nome, char* curso, int codigo, int carga)
{
   Cadeira* cadeira=(Cadeira*)malloc(sizeof(Cadeira) * 40);
   cadeira->curso=(char*)malloc(sizeof(char) *40);
   cadeira->nome=(char*)malloc(sizeof(char) * 40);
   strcpy(cadeira->nome, nome);
   strcpy(cadeira->curso, curso);
   cadeira->carga=carga;
   cadeira->codigo=codigo;
   return cadeira;

}
Turma* criarTurma(Aluno* A1, Professor* pro, Cadeira* Ca, int id)
{  
      Turma* turma= (Turma*)malloc(sizeof(Turma)* 40);
      turma->prof=pro;
      turma->alun=A1;
      turma->ca=Ca;
      turma->id=id;
      return turma;

 

}

#endif
