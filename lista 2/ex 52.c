#include <stdio.h>

#define tam 2

int main ()

{
//// Escreva um programa em C que verifique se uma matriz 2x2  e
//// uma matriz de Sylvester.

 int m[tam][tam];

        printf ("\nInforme 4 numeros para preencher a matriz :\n");

    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                    //// arquivando a matriz       ex: 1  2
            scanf ("%d",&m[i][j]);                  ////                        3  4
        }
    }


    int a1, a0;

    printf ("\nInforme o coeficiente do polinomio a(x)  = a1x  +  a0, respectivamente: \n");
    scanf ("%d",&a1);               //// arquivando os coeficientes ex:   1
    scanf ("%d",&a0);                                   ////              2



    int b1, b0;

    printf ("\nInforme o coeficiente do polinomio b(x)  = b1x  +  b0, respectivamente: \n");
    scanf ("%d",&b1);               //// arquivando os coeficientes ex:   3
    scanf ("%d",&b0);                               ////                  4



    if (m[0][0] != a1)
    {
        printf ("\nA matriz NAO eh matriz de Sylvester!!\n");               //// comparacao
        return 0;
    }


    if (m[0][1] != a0)
    {
        printf ("\nA matriz NAO eh matriz de Sylvester!!\n");       //// M = a1  a0
        return 0;                                                   ////     b1  b0
    }


    if (m[1][0] != b1)
    {
        printf ("\nA matriz NAO eh matriz de Sylvester!!\n");
        return 0;
    }


    if (m[1][1] != b0)
    {
        printf ("\nA matriz NAO eh matriz de Sylvester!!\n");
        return 0;
    }


    printf ("\n\nA matriz eh matriz de Sylvester!!!\n\n");


return 0;

}
