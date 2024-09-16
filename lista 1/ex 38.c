#include <stdio.h>

void array_maior (int valores[], int *maior_f){

    int i=1;

    *maior_f = valores[0];  //// o ponteiro maior recebe o primeiro valor

    do
    {
        if (valores[i] > *maior_f){
            *maior_f = valores[i];
        }
        i++;
    }while (i<10);


}

int main ()
{
    //// Escreva um programa em C que declare um array de 10
    //// inteiros e passe esse array para uma funcao que encontre o maior elemento do
    //// array.
    int array[10], i=0, maior;


    printf ("\nInforme 10 numeros: \n");
    do
    {
        scanf ("%d",&array[i]);             //// arquivando
        i++;

    }while (i<10);

    array_maior(array, &maior);

    printf ("O maior numero do array: %d\n\n\n\n",maior);






    return 0;
}
