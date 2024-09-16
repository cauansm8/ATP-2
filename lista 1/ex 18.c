#include <stdio.h>

int main ()
{
    //// Escreva um programa em C que declare um array de 10
    //// inteiros e use aritm ́etica de ponteiros para calcular a soma de todos os elementos
    //// do array. Imprima a soma.

    int array[10], i=0, *enderecos, somas=0; //// torna a variavel enderecos um ponteiro

    printf ("\nInforme 10 numeros: \n");
    do
    {
        scanf ("%d",&array[i]); //// salva os valores no array
        i++;
    }while (i<10);

    enderecos = &array; //// passando os enderecos para o ponteiro

    i=0;

    do
    {
    somas += *(enderecos + i); ///// o * usa os enderecos salvos para somar
    i++;                        //// esse + i serve para pular de endereco em endereco do valores salvos em ponteiro
    }while (i<10);

    printf ("\nA soma: %d\n",somas);
}
