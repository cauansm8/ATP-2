#include <stdio.h>

int encontrar (int array[], int *m, int cont){
    if (cont < 5){ //// loop para o tamanho do vetor


            if (array[cont] > *m){ //// SE o array e maior q o valor apontador por m(*)
                *m = array[cont];//// o valor de MAIOR e alterado

            }

            cont++;
            return encontrar (array, m, cont); //// puxa a funcao dnv ate completar o loop
                        //// nao usamos o * pois alteraria o valor de m
        }

    else { //// quando o cont e igual a 5 -> encerra a recursao
            return *m;
    }

}


int main ()
{
//// Crie uma funcao recursiva para encontrar o maximo elemento em um array.

    int vetor[5], maior;

    for (int i=0; i<5; i++){ //// preenchendo os vetores
        scanf ("%d",&vetor[i]);
    }
    int j=1;
    maior = vetor[0];

    encontrar (vetor, &maior, j); //// usamos o & para alterar o valor da variavel no endereco da var. 'maior'

    printf ("\n\nO maior elemento do vetor: %d\n",maior);
    return 0;
}
