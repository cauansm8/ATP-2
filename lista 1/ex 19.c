#include <stdio.h>




int main ()
{

    //// Escreva um programa em C que declare um array de 8
    //// numeros de ponto flutuante e use aritmetica de ponteiros para calcular a media
    //// dos valores.

    int i=0;
    float array[8], *enderecos, somas=0, media;


    printf ("\nInforme 8 numeros reais: \n");
    do
    {
        scanf ("%f",&array[i]); //// arquivando os valores
        i++;


    }while (i<8);

    i=0;

    enderecos = &array;



    do
    {
        somas += *(enderecos + i); //// usa os enderecos para acessar os dados
        i++;


    }while (i<8);

    media = somas/8.0;

    printf ("\nA soma: %.2f\n",somas);

    printf ("\nA media: %.2f\n",media);
}
