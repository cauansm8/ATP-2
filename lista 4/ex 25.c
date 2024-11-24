/* Escreva um programa em C para criar um arquivo de texto com uma estrutura de dados complexa e salvar no formato adequado. */


#include <stdio.h>
#define qnt 2


    typedef struct //// struct geral
    {
        char nome[20];
        int idade;
        float nota;
        double ra;
    } alunos;


int main ()
{
    FILE *file;         ///// arquivo como txt e escrita
    file = fopen ("ex25_estrutura_complexa.txt", "w");

    alunos Alunos[qnt];  //// vetor de structs

    if (file == NULL)       //// verificando se o arquivo existe
    {
        printf ("Nao foi encontrado o arquivo!!\n");
        return -1;
    }

    for (int i = 0; i < qnt; i++)       //// arquivando os valores nas structs
    {
        printf ("Informe nome(s), idade(i), nota(f) e RA (lf) do estudante %d:\n", i+1);
        scanf ("%s", Alunos[i].nome);
        scanf ("%d", &Alunos[i].idade);
        scanf ("%f", &Alunos[i].nota);
        scanf ("%lf", &Alunos[i].ra);

        getchar ();
    }

    for (int i = 0; i < qnt; i++)       ///// passando as structs para o arquivo
    {
        fprintf (file, "Nome: %s || ", Alunos[i].nome);
        fprintf (file, "Idade: %d || ", Alunos[i].idade);
        fprintf (file, "Nota: %f || ", Alunos[i].nota);
        fprintf (file, "RA: %lf\n\n", Alunos[i].ra);
    }


    fclose (file);      //// fechando arquivo
    return 0;
}