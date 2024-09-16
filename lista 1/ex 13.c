#include <stdio.h>

int main (){
//// Escreva um programa em C que declare um array de 5 inteiros.
//// Use um ponteiro para acessar e imprimir todos os elementos do array.


int array[5], i=0, j=0; ///// esse asterisco declara a variavel pont como ponteiro

    printf ("\nInforme 5 numeros: \n");
do
{
    scanf ("%d",&array[i]); //// arquivando
    i++;


}while (i<5);

int *pont = array;

    printf ("\nImprimindo por ponteiro: \n");
do{
    printf ("%d\n", pont[j]); ////// printar usando o asterisco indica que o pc vai buscar no endereço salvo(em array)
                              ////// o conteudo da variavel



j++;
}while(j<5);

return 0;

}
