#include <stdio.h>
#include <stdlib.h>
int print (int vetor[], int quant)
{
    if (quant>=0){                    ///// se o numero e maior ou igual a 0

        printf ("%d\n",vetor[quant]); //// ele printa o valor[quant]

        quant--;                      //// diminui 1 para "retornar" uma casa na memoria do vetor

        return print (vetor, quant); //// como e recursao, o return tem q ser a funcao
    }
    else {
        return 0;                    //// quando o numero e menor q zero, significa q acabamos de printar todo o vetor
    }                                //// logo pode terminar o programa

}


int main ()
{
//// Implemente uma funcao recursiva para imprimir os elementos de um array
//// na ordem inversa.
    int qnt;
    printf ("Informe quantos elementos terao no array: ");
    scanf ("%d",&qnt);

    int *array;
    array = malloc (qnt * sizeof (int)); //// alocacao dinamica de um array

    printf ("\nInforme o/os %d elementos: \n",qnt);

    for (int i=0; i<qnt; i++){
        scanf ("%d",&array[i]); //// arquivando os valores
    }

    qnt--;
    printf ("\n\nImprimindo os elementos de um array na ordem inversa de maneira recursiva: \n");
    print (array, qnt); //// puxando a funcao



    return 0;
}
