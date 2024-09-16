#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define tam 4

int main ()
//// Escreva um programa em C que verifique se uma matriz 4x4  e uma matriz de Cauchy.
{
    int x [tam], y [tam];               //// a[i][j] = 1
                                    ////                / (x[i] - y[j])
    float m[tam][tam];

    printf ("\nInforme um vetor x de 4 numeros: \n");      ///// arquivando os valores de x

    for (int i = 0; i < tam; i++){
        scanf ("%d",&x[i]);
    }

    printf ("\nInforme um vetor y de 4 numeros: \n");      ///// arquivando os valores de y
    for (int i = 0; i < tam; i++){
        scanf ("%d",&y[i]);
    }

    printf ("\nInforme 16 numeros que vao preencher a matriz 4x4: \n");

        for (int i = 0; i < tam; i++){                              //// formando a matriz e comparando ao mesmo tempo!!!
            for (int j = 0; j < tam; j++){
                printf ("\nInforme um numero (com 8 casas apos a virgula): ");

                scanf ("%f",&m[i][j]);                              //// arquivando


                float div = 1.0 / (x[i] - y[j]);                    //// valor que deve aparecer na matriz

                if (x[i] - y[j] == 0){
                    printf ("\nERRO");
                    return 0;
                }

                if (round (m[i][j] * 1000) != round (div * 1000))   //// se o numero informado for diferente da regra da matriz de Cauchy ( a[i][j] = 1 / (x[i] - y[j]) )

                                                                    //// o programa termina com erro

                                                                 //// multipliquei por 1000 para o round nao aproximar todos os valores para zero

                                                                //// coloquei com arredondamento por causa dos numeros quebrados

                printf ("\nA matriz NAO e de Cauchy\n\n");

                printf ("\nO numero que deveria ser informado: %f\n",div);

                printf ("\nA matriz que deveria ser formada: \n");

                for (int i = 0; i < tam; i++){                  //// se o numero inserido for incorreto

                    for (int j = 0; j < tam; j++){              //// sera impresso a matriz que deveria ser formada

                        float div = 1.0 / (x[i] - y[j]);

                        printf ("%f ",div);
                    }
                    printf ("\n");
                }

                return 0;
                }
            }


        printf ("\nA matriz formada: \n");

        for (int i = 0; i < tam; i++){                  //// imprimindo a matriz
            for (int j = 0; j < tam; j++){
                printf ("%.2f ",m[i][j]);
            }
            printf ("\n");
        }




    printf ("\nA matriz e de Cauchy!!\n");




    return 0;
}
