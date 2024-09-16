#include <stdio.h>

int mdc (int nms[], int menor, int tam)
{
        int i = 0;
        do
        {

            if (nms[i] % menor == 0){ //// se o resto da div entre nm e o menor for 0, pula para o proximo numero
                i++;
            }

            else {
                return mdc (nms, menor-1, tam); //// se nao for zero, executa a funcao dnv com o menor-1
            }

        }while (i<tam);



        return menor; //// se o loop chegar ao fim, retorna o menor (que no caso vai ser o valor do MDC)




}


int main ()
{
//// Crie uma funcao recursiva para encontrar o maior divisor comum de um
//// array de numeros.
    int array[5];

    printf ("\nInforme os 5 numeros: \n");

    for (int i=0 ; i<5 ; i++){

            scanf ("%d",&array[i]);

                if (array[i]==0){

                    printf ("\nNao pode ter zero"); //// se tiver zero, o programa termina

                    return 1;

                                }
    }

    int menor = array[0], tam=5;


    for (int i=0 ; i<5 ; i++){

        if (array[i]< menor){ //// pegando o menor valor do array

            menor = array[i];

        }
    }



    printf ("\nO mdc do array: %d\n\n",mdc (array, menor, tam));


    return 0;
}
