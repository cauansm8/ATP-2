/* Crie uma funcao que recebe uma estrutura de aluno (nome, matricula, nota)
como parametro e imprima seus valores. */

#include <stdlib.h>
#include <stdio.h>

typedef struct {            /* Estrutura com as variaveis */
    int tam;
    char nome[20];
    int matricula;
    float nota;

}infos;

void passar_infor_parametro (infos * aluno) /* Função para arquivar os valores */
{
    printf ("Informe nome, n. de matricula e a nota do aluno: \n");
    getchar();
    scanf ("%s",aluno->nome);
    scanf ("%d",&aluno->matricula);
    scanf ("%f",&aluno->nota);
}

void imprimir (infos aluno) /* Função para imprimir */
{
    printf ("\nNome: %s\nMatricula: %d\nNota: %f\n\n",aluno.nome, aluno.matricula, aluno.nota);
}


int main ()
{
    infos aluno;        /* variável struct com o nome de aluno */
    passar_infor_parametro (&aluno); /* Chamando as funções */
    imprimir (aluno);


    return 0;
}