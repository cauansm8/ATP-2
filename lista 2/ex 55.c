#include <stdio.h>
#include <math.h>
#define tam 4
#define precis 0.001


float funcao_x(int a)       //função de x
{
    return (a);
}


float funcao_y(int b)           //função de y
{
    return  (- b);
}


int verif_elemento(float matriz[tam][tam], int x[], int y[])        //função para verificar se cada elemento é igual a operação
{
    for(int i = 0; i < tam; i++)                                    //percorre linhas
    {
        for(int j = 0; j < tam; j++)                                   //percorre colunas
        {

            if(fabs(matriz[i][j] - (1.0 / x[i] - y[j])) < precis)   // utiliza uma tolerancia para os valores comparados
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()                           //// Escreva um programa em C que verifique se uma matriz 3x3  e
{                                   //// uma matriz de Cauchy generalizada
    int x[tam] = {1, 2, 3, 4},
        y[tam] = {5, 6, 7, 8};

    float matriz[tam][tam] =
    {
        {0.1667, 0.1429, 0.125, 0.1111},
        {0.1429, 0.125, 0.1111, 0.1},
        {0.125, 0.1111, 0.1, 0.0909},
        {0.1111, 0.1, 0.0909, 0.0833}
    };

    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            printf ("%f ",matriz[i][j]);
        }
        printf ("\n");
    }


    if(verif_elemento(matriz, x, y) == 1)
    {
        printf("A matriz eh de cauchy\n");
    }
    else
    {
        printf("A matriz nao eh de cauchy\n");
    }

return 0;

}
