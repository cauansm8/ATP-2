/* Escreva um programa em C para verificar se um numero especifico esta 
presente em um arquivo binario contendo numeros inteiros. */

#include <stdio.h>
#define qnt 5

int main ()
{

    FILE *file;             ///// abrindo como escrita e leitura o arquivo bin
    file = fopen ("numero_presete_ex21.bin", "w+b");

    if (file == NULL) //// verificando se existe
    {
        printf ("Nao foi encontrado o arquivo!!");
        return -1;
    }

    int n, buscado;

    for (int i = 0; i < qnt; i++) //// passando os valores para o arquivo bin
    {
        printf ("Informe o numero %d para passar ao arquivo bin: ", i + 1);
        scanf ("%d",&n);
        fwrite (&n, sizeof(int), 1, file);

    }    

    printf ("\nInforme um numero que deseja buscar no arquivo binario: ");
    scanf ("%d",&buscado); ///// arquivando numero buscado

    int verif;



    for (int i = 0; i < qnt; i++) ///// loop para buscar com base na quantidade de numeros no arquivo
    {
    
    fseek (file, i * sizeof(int), SEEK_SET); ///// anda no arquivo
    fread (&verif, sizeof(int), 1, file);   //// arquiva


    if (verif == buscado)   ///// verifica se eh o numero buscado
    {
        printf ("O numero %d esta no arquivo binario!!!\n\n", buscado); //// se for, termina o programa
        return 0;
    }

    }

    printf ("O numero nao esta no arquivo!!!\n\n"); //// se nao for, manda a mensagem que nao existe o numero no loop

    fclose (file);  //// fecha o arquivo bin

    return 0;
}