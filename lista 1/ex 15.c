#include <stdio.h>

int main (){

//// Escreva um programa em C que declare um array de 7
//// inteiros e use um ponteiro para calcular a soma dos elementos do array.

int array[7], i=0, soma=0; //// declarou o pont como ponteiro
printf ("\nInforme 7 numeros: \n");


do
{
scanf ("%d",&array[i]); ///// recebendo os valores
i++;
}while (i<7);

i=0;


   int *pont = array; //// enviando os endereços dos conteudos para cada array do ponteiro





do
{
    soma += pont[i]; //// esse * indica que o valor salvado na variavel pont (endereco do conteudo) deve ser usado para buscar
                      //// o valor. EX: ta salvo em pont[1]=3102 ou seja -> se usarmos *pont[i] ele vai usar aquele numero para
                      //// encontrar o valor original (ex: array[1]= 8)
                      //// entao ele vai para o endereco 3102 e encontrara o numero 8 !!!!
    i++;
}while (i<7);

printf ("\n\nA soma: %d\n",soma);





return 0;
}
