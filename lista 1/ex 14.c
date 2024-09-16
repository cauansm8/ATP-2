#include <stdio.h>
void alterar_array (int *a){ //// funcao para somar o valor com 10 //// o * indica que e um ponteiro inteiro
    *a += 10;

}

int main (){
//// Escreva um programa em C que declare um array de 5
//// inteiros e um ponteiro para inteiro. Use o ponteiro para modificar os valores
//// dos elementos do array. Imprima o array resultante

int array[5], i=0;

printf ("\nNumeros antes da alteracao:\n");

do
{
    scanf ("%d",&array[i]);


    i++;
}while (i<5);

i=0;

int *pont = array;

do
{
    alterar_array(&pont[i]); //// usando a funcao /// e necessario indicar & pois, se nao fosse usado
                              //// os valores nao seriam alterados!!!!!


i++;
}while (i<5);


printf ("\nNumeros depois da alteracao (+10):\n");
i=0;

do
{
    printf ("%d\n",pont[i]);
i++;


}while (i<5);


return 0;
}
