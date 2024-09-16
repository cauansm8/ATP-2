#include <stdio.h>

#define largura 3 //// linha
#define altura 3  //// coluna

int main ()
{
    //// Escreva um programa em C que declare e inicialize uma matriz
    //// 3x3 e imprima seus elementos.

    int matriz[3][3];

    printf ("Informe 9 numeros :\n");

    for (int i=0; i<largura;i++)    //// i se refere as linhas
    {
        for (int j=0; j<altura ; j++){ //// j se refere as colunas
            scanf("%d",&matriz[i][j]); //// terminaram as colunas da linha 1 -> pula para linha 2
        }

    }

    printf ("\nA matriz: \n");

     for (int i=0; i<largura;i++)
    {
        for (int j=0; j<altura ; j++){      //// imprimindo
            printf("%d ",matriz[i][j]);
        }
        printf ("\n");
    }



return 0;
}
