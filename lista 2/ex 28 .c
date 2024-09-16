#include <stdio.h>
#include <stdlib.h>

#define lin 4
#define col 4

void busca_bin (int ini, int fim, int mat[], int n){


    int verif = 0;

    if (fim == 8){
        ini = 0;
    }

    for (ini; ini < fim; ini++){
        if (mat[ini] == n){
            verif = 1;

        }
    }
         if (verif == 1){
            printf ("\nO numero esta na matriz!!\n\n");
         }

         if (verif == 0){
            printf ("\nO numero NAO esta na matriz!!\n\n");
         }

}


int main ()
{
//// Escreva um programa em C que implemente a busca binaria em uma matriz ordenada 4x4.
    int m[lin][col], busca, mvetor[lin*col];


    printf ("\nInforme uma matriz com valores ordenados: \n");

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {                                               //// arquivando os valores
            scanf ("%d",&m[i][j]);
        }
    }

    printf ("\n\nA matriz: \n\n");
    for (int i=0; i < lin; i++)
    {                                                        //// imprimindo a matriz
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]);
        }
        printf ("\n");
    }

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {                                               //// passando para um vetor
            mvetor [i*col + j] = m[i][j];
        }
    }




    printf ("\n\nInforme um numero que deseja procurar na matriz: ");
    scanf ("%d",&busca);

    int meio = (lin * col)/2;
    int tamanho = lin*col;
    int inicio = 0;

    if (busca == mvetor[meio])
    {
        printf ("\nO numero esta na matriz!!\n");
    }


    if (busca < mvetor[meio])
    {                      //// se o valor e menor que o valor do meio do vetor
            busca_bin (inicio, meio, mvetor, busca);  //// logo o fim da busca e o meio
    }


    if (busca > mvetor[meio])
    {
            busca_bin (meio, tamanho, mvetor, busca);  //// se o valor e maior q o valor do meio
    }                                                       //// logo o meio do vetor e o inicio da busca


    return 0;
}
