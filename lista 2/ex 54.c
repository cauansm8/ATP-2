#include <stdio.h>

#define tam 4

int main ()
{
 //// Escreva um programa em C que calcule a soma dos elementos de
//// uma diagonal qualquer em uma matriz 4x4.
    int m[tam][tam];


    printf ("\nInforme 16 numeros que formarao a matriz 4x4: \n");

    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                   //// arquivando os valores
            scanf("%d",&m[i][j]);
        }
    }




    printf ("\n\nA matriz formada: \n");
    for (int i = 0; i < tam; i++)
        {

        for (int j = 0; j < tam; j++)
        {                                   //// imprimindo a matriz
            printf ("%d ", m[i][j]);
        }
        printf ("\n");
    }


    printf ("\nInforme a diagonal que deseja somar (1,2,3 (principal), 4 ou 5): ");     //// escolhendo a diagonal (4x4)

    int diagonal;

    scanf ("%d",&diagonal);

    if (diagonal <= 0 || diagonal > 5)
        {
        printf ("\nDiagonal incorreta\n");  //// se o numero for incorreto
        return 0;
    }

    int soma = 0;




    switch (diagonal)           //// switch para cada diagonal escolhida (considerando a matriz 4x4)
    {
        case 1:

         for (int i = tam-2, j = 0; i < tam && j < tam; i++, j++)
            {
            printf ("\nSomando: %d",m[i][j]);                           //// diagonal 1
            soma += m[i][j];
            }
        printf ("\nA soma: %d\n\n",soma);
        break;




        case 2:

         for (int i = tam-3, j = 0; i < tam && j < tam; i++, j++)
            {                                                                   //// diagonal 2
            printf ("\nSomando: %d",m[i][j]);
            soma += m[i][j];
            }
        printf ("\nA soma: %d\n\n",soma);
        break;

        case 3:

         for (int i = 0, j = 0; i < tam && j < tam; i++, j++)
            {                                                         //// diagonal 3 ou principal
            printf ("\nSomando: %d",m[i][j]);
            soma += m[i][j];
            }
        printf ("\nA soma: %d\n\n",soma);
        break;




        case 4:

         for (int i = 0, j = tam-3; i < tam && j < tam; i++, j++)
            {                                                                   //// diagonal 4
            printf ("\nSomando: %d",m[i][j]);
            soma += m[i][j];
            }
        printf ("\nA soma: %d\n\n",soma);
        break;


        case 5:

         for (int i = 0, j = tam-2; i < tam && j < tam; i++, j++)
            {                                                                   //// diagonal 5
            printf ("\nSomando: %d",m[i][j]);
            soma += m[i][j];
            }
        printf ("\nA soma: %d\n\n",soma);
        break;


    }



    return 0;
}
