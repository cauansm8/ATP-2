/* Resolva um problema de cadastro de alunos utilizando estruturas. */

#include <stdio.h>
#include <stdlib.h>


#define qnt 2 //// quantidade

typedef struct {                        //// estrutura
    char nome[50];
    int idade;
    int RA;
    char curso[50];
    int ano;
}infos;

void arquivar (infos *aluno, int i)                                     /// arquivando com ponteiro
{
    printf ("\nInforme nome, idade, RA, curso e ano do aluno %d: \n", i+1);

    scanf ("%s",aluno->nome);
    scanf ("%d",&aluno->idade);
    scanf ("%d",&aluno->RA);
    getchar ();
    scanf ("%s",aluno->curso);
    scanf ("%d",&aluno->ano);
    getchar();

}

void imprimir (infos aluno, int i)                  //// imprimindo com .
{
    printf ("As informacoes desse aluno: \nNome: %s\nIdade: %d\nRA: %d\nCurso: %s\nAno: %d\n\n",
                aluno.nome, aluno.idade, aluno.RA, aluno.curso, aluno.ano);
}



int main ()
{

    infos alunos[qnt];
   

    for (int i = 0; i < qnt; i++)       ///loop para cada aluno (arquivar)
    {
        arquivar (&alunos[i], i);
    }
    for (int i = 0; i < qnt; i++)   ///loop para cada aluno (imprimir)
    {
        imprimir (alunos[i], i);
    }
}
