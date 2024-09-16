#include <stdio.h>
void alterar_array (int *a){ //// funcao para somar o valor com 10 //// o * indica que e um ponteiro inteiro
    *a += 10;

}

int main ()
{
    //// Escreva um programa em C que declare um array de 5 inteiros
    //// e use aritm ́etica de ponteiros para somar 10 a cada elemento do array. Imprima
    //// o array resultante.




int array[5], i=0;


printf ("\nInforme 5 numeros: \n");
do
{
scanf ("%d",&array[i]); //// arquivando os valores
i++;

}while (i<5);
i=0;


do
{
    alterar_array(&array[i]); //// usando a funcao /// e necessario indicar & pois, se nao fosse usado
                              //// os valores nao seriam alterados!!!!!
                              //// é tipo: a = &array[i] ('a' recebe o endereco de array[i])



i++;
}while (i<5);


printf ("\nNumeros depois da alteracao (+10):\n");
i=0;

do
{
    printf ("%d\n",array[i]);
i++;


}while (i<5);


return 0;
}





