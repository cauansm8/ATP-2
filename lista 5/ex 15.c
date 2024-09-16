#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define tam 3

void subs(char *conj, int i, char *subconj, int cont_subconj)
{



    if (i == tam)   //// se o contador chegar no tamanho do conjunto -> a funcao muda para comecar a imprimir elementos!!!!!!!!
    {


        for (int j = 0; j < cont_subconj; j++)  //// imprimindo
        {

                printf("%c ", subconj[j]);


        }
                printf("\n\n");

        return;   //// puxa a funcao dnv
    }

          //// passando os elementos para o subconjunto         // define o elemento

    subconj[cont_subconj] = conj[i];

                                                                // coloca o elemento no subconj
    subs (conj, i + 1, subconj, cont_subconj + 1);


    subs (conj, i + 1, subconj, cont_subconj);                  //// remove o elemento do sub
}



int main()
{
    char conj[tam]= {'1', '2', '3'};            //// para alterar o conjunto principal -> altere aqui

    char subconj[tam];  /// FEITO COM AJUDA DO GABRIEL CIRIACO !!!!!!!!!!!!! -> nao tinha entendido o codigo


    subs (conj, 0, subconj, 0);         //// puxa a funcao, com os contadores em zero e o subconj vazio!!

    return 0;


}

