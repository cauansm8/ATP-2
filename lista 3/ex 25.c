/* Declare e inicialize uma estrutura para armazenar as informacoes de um aluno
(nome, matricula, nota) e imprima seus valores. */

#include <stdio.h>

#define qnt 2   //// quantidade

typedef struct{         //// estrutura
    char nome[100];
    int matricula;
    float nota;
}infos;

    void arquivar (infos * alunos, int i)       //// funcao para arquivar na estrutura por ponteiro
    {
        printf ("Informe nome, matricula e a nota do aluno %d: \n", i+1);
        gets (alunos->nome);
        scanf ("%d",&alunos->matricula);
        scanf ("%f",&alunos->nota);
        getchar ();
    }

    void imprimir (infos alunos, int i)     ////// funcao para imprimir
    {
        printf ("\n\nAs informacoes do aluno %d: \n",i+1);
        printf ("Nome: %s\nMatricula: %d\nNota: %.2f\n\n\n", alunos.nome, alunos.matricula, alunos.nota);
    }



int main ()
{
    infos alunos[qnt];

    for (int i = 0; i < qnt; i++)       //// loop para arquivar
    {
        arquivar (&alunos[i], i);
    }

    for (int i = 0; i < qnt; i++)           //// loop para imprimir
    {
        imprimir (alunos[i], i);
    }



    return 0;
}