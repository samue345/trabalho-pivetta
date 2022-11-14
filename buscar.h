#ifndef BUSCAR_H
#define BUSCAR_H
#include <stdio.h>
#include <stdlib.h>

void alunoB(char *nome, char *curso, int *matricula)
{
    printf("digite o nome do/da Aluno/Aluna: ");
    scanf(" %[^\n]s", nome);
    printf("digite o curso do/da Aluno/Aluna: ");
    scanf(" %[^\n]s", curso);
    printf("digite a matricula do/da Aluno/Aluna: ");
   scanf(" %d", matricula);

}
void cadeiraB(char *nome, char *curso, int *carga, int *codigo)
{
   printf("digite a o nome da cadeira: ");
   scanf(" %[^\n]s", nome);
   printf("digite o nome do curso: ");
   scanf(" %[^\n]s", curso);
   printf("digite o código da cadeira: ");
   scanf(" %d", codigo);
   printf("digite a carga-horária: ");
   scanf(" %d", carga);
}
void profB(char *nome, int *codigo)
{
   printf("digite o nome do professor: ");
   scanf(" %[^\n]s", nome);
   printf("digite o codigo do professor: ");
   scanf(" %d", codigo);
}

#endif
