#include <stdio.h>
void inverter (int num[], int *array_contra[])
{
    int i=0;
    do
    {

    array_contra[i] = num[7-i];  //// recebendo os enderecos de maneira invertida
    i++;

    }while (i<8);

}


int main ()
{
//// Escreva um programa em C que declare um array de 8
//// inteiros e passe esse array para uma funcao que inverta a ordem dos elementos
//// do array.

int array[8], *array_contra[8], i=0;    //// declarando dois arrays (normal e ponteiro)


    printf ("\nInforme 8 numeros: \n");
do
{
    scanf ("%d",&array[i]);     //// arquivando os numeros
    i++;

}while (i<8);

    i=0;

    inverter (array, &array_contra);    //// puxando a funcao

    printf ("\nA ordem invertida: \n");

    do
    {
        printf ("%d\n", array_contra[i]);       //// imprimindo
        i++;

    }while (i<8);


return 0;
}
