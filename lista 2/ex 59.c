#include <stdio.h>
#define tam 2

int main ()
{

//// Escreva um programa em C que verifique se uma matriz 2x2 e
//// uma matriz de reflexao
    int x, y;
    float m[tam][tam];

    printf ("\nInforme um ponto x: ");          //// arquivando as coordenadas
    scanf ("%d",&x);

    printf ("\nInforme um ponto y: ");
    scanf ("%d",&y);


    printf ("\nInforme numeros para a matriz 2x2: \n");

    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){ //// arquivando uma matriz qualquer (para depois ser comparada)
            scanf ("%f",&m[i][j]);
        }
    }

    float div = 1.0 /(x*x + y*y);           //// escalar
    float mr[tam][tam] ={x*x - y*y, x*y*2, x*y*2, y*y - x*x}; ///// formando a matriz reflexiva (verdadeira)



    printf ("\nA matriz informada: \n");
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){  //// imprimindo a matriz qualquer
            printf ("%.2f ",m[i][j]);
        }
        printf ("\n");
    }

    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){      //// multiplicando a matriz reflexiva pelo escalar (para se tornar matriz reflexiva)
            mr[i][j] *= div;
        }
    }

    printf ("\nA matriz de reflexao: \n");
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){              //// imprimindo a matriz reflexiva
            printf ("%.2f ",mr[i][j]);
        }
        printf ("\n");
    }

    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){          //// comparando as matrizes
            if (m[i][j] != mr[i][j]){
                printf ("\nA matriz informada eh diferente da matriz reflexiva mostrada - > NAO eh matriz de reflexao!!\n");
                return 0;
            }
        }
    }
        printf ("\nA matriz informada eh matriz de reflexao!!\n");

    return 0;
}
