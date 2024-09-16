#include <stdio.h>
#include <stdlib.h>

#define tam 5

int ocorrencias (int vetor[], int max, int contador, int procurado, int qnt)
{

        if (contador < max)
            {

            if (vetor[contador] == procurado)                                  //// se sao iguais os valores
            {

                return ocorrencias (vetor, max, contador+1, procurado, qnt+1); //// puxa a funcao dnv so que com o contador+1 E as aparicoes+1 (qnt)

            }

            else
            {

                return ocorrencias (vetor, max, contador+1, procurado, qnt);   //// se os valores sao diferentes, apenas o contador soma +1

            }

            }

     else
     {
         return qnt;                                                            //// ao fim do loop, a funcao deve retornar as "aparicoes" do numero
     }

}


int main ()
{
//// Escreva uma funcao recursiva para encontrar o numero de ocorrencias de
//// um elemento em um array.
    int array[tam];

    if (tam == 0){
        printf ("\nO tamanho do array nao permite inserir numeros \n");
        return 0;
    }


    printf ("\nInforme %d numeros: \n",tam);
    for (int i=0; i < tam ; i++)
    {
        scanf ("%d",&array[i]); //// arquivando os valores do array

    }

    int cont = 0, busca, qnt=0;

    printf ("\nInforme um numero que deseja contar a quantidade de vezes que apareceu no array: ");

    scanf ("%d",&busca); //// arquivando o numero buscado


    printf ("\nA quantidade de vezes que apareceu o numero %d no vetor: %d \n\n", busca, ocorrencias (array, tam, cont, busca, qnt));

    return 0;
}
