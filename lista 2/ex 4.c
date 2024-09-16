#include <stdio.h>
#include <stdlib.h>

#define linha 3
#define coluna 3
int main (){
//// Escreva um programa em C que multiplique duas matrizes 3x3.
int m1[3][3], m2[3][3], res[3][3];


printf ("Informe 9 numeros: \n");

for (int i=0; i<linha; i++)
{
    for (int j=0; j<coluna; j++){   //// arquivando
        scanf("%d",&m1[i][j]);
    }
}

printf ("\n\n\n");



    for (int i=0; i<linha; i++){
        for (int j=0; j<linha; j++){    //// imprimindo
            printf ("%d ",m1[i][j]);
        }
        printf ("\n");
    }

    printf ("\n\n\n");


    printf ("Informe 9 numeros: \n");

for (int i=0; i<linha; i++)
{
    for (int j=0; j<coluna; j++){ //// arquivando
        scanf("%d",&m2[i][j]);
    }
}

printf ("\n\n\n");



    for (int i=0; i<linha; i++){
        for (int j=0; j<linha; j++){    //// imprimindo
            printf ("%d ",m2[i][j]);
        }
        printf ("\n");
    }

    printf ("\n\n\n");

for (int z=0; z<linha; z++) //// z serve para alocar o numero em alguma linha
{
    for (int y=0, soma=0; y<coluna; y++) //// y serve para alocar o numero em alguma coluna
    {
        for (int cont=0; cont<3; cont++) //// o cont serve para pular coluna (em m1) e linha (em m2)
        {
            soma += m1[z][cont] * m2[cont][y];

        }
        res [z][y] = soma;
        soma = 0;
    }

}
printf ("\n\n\n");


    printf ("A matriz resultante da multiplicacao: \n");

    for (int i=0; i<linha; i++){
        for (int j=0; j<linha; j++){ //// imprimindo
            printf ("%d ",res[i][j]);
        }
        printf ("\n");
    }




return 0;
}
