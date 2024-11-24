/* Utilize a declaracao de tipos (typedef) para simplificar a definicao de uma estru-
tura para armazenar as informacoes de um professor (nome, disciplina, salario)
e imprima seus valores. */

#include <stdio.h>

#define qnt 2    //// quantidade


typedef struct {        //// estrutura
    char nome[100];
    char disciplina[100];
    float salario;
} infos;

    void arquivar (infos * profs, int i)            //// funcao para arquivar
    {
        printf ("Informe o nome, a disciplina e o salario do professor %d: \n", i + 1);
        gets (profs->nome);
        gets (profs->disciplina);
        scanf ("%f",&profs->salario);
        getchar();
    }

    void imprimir (infos profs, int i)          //// funcao para imprimir
    {
        printf ("\nAs informacoes do professor %d: \n", i + 1);
        printf ("Nome: %s\nDisciplina: %s\nSalario: %.2f\n\n\n", profs.nome, profs.disciplina, profs.salario);
    }


int main ()
{
    infos profs [qnt];

    for (int i = 0; i < qnt; i++)           //// loop para arquivar
    {
        arquivar (&profs[i], i);
    }

    for (int i = 0; i < qnt; i++)       //// loop para imprimir
    {
        imprimir (profs[i], i);
    }

    return 0;
}