#include <stdio.h>

int main ()
{


    //// Escreva um programa em C que encontre o maior e o menor
    //// elemento em um array de 10 inteiros.

    int array[10], i=0, maior, menor;


    printf ("\nInforme 10 numeros: \n");
    do
    {
        scanf ("%d",&array[i]);

        i++;
    }while (i<10);

    i=1;
    maior = array[0]; //// usamos o primeiro elemento como base de maior e menor!!!!
    menor = array[0];

    do
    {
       if (array[i]>maior){ ///// se o array for maior que o maior elemento considerado -> ele se torna o maior
        maior = array[i];
       }
       if (array[i]<menor){ ///// se o array for menor que o menor elemento considerado -> ele se torna o menor
        menor = array[i];
       }


        i++;
    }while (i<10);
    printf ("\nO menor elemento: %d",menor);
    printf ("\nO maior elemento: %d",maior);


}
