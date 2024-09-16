#include <stdio.h>
#include <stdlib.h>

//// Escreva um programa em C que verifique se uma matriz 3x3  e
//// uma matriz de circulante.

#define tam 3


int main ()
{                       ////////////// ex: 1 2 3
    int m[tam][tam];                  //// 3 1 2
                                      //// 2 3 1        //// os numeros passam para a direita
                                                        //// e depois retornam na esquerda em baixo

    printf ("Informe 9 numeros: \n");

    for (int i=0; i < tam; i++)
    {
        for (int j=0; j < tam; j++)
        {
            scanf ("%d",&m[i][j]);      //// arquivando
        }
    }


    printf ("\n\n A matriz formada: \n\n");

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            printf  ("%d  ",m[i][j]);   //// imprimindo
        }
        printf ("\n");
    }


    //// VERIFICACAO DE DIAGONAIS !!!!!!

    for (int i=0; i<tam; i++){

        for (int j=0; j<tam; j++){

                for (int k=0, cond = 0; k != tam-1 && cond != 1; k++){

                        if (j == tam-1 || i == tam-1 || k+j == tam-1 || k+i == tam-1){
                                cond = 1;
                                } //// se k+j = tam-1 significa q a matriz PROVAVELMENTE vai estar buscando info fora da matriz
                    //// o mesmo ocorre com k+i

                        if (m[i][j] != m[i+k][j+k])
                                {
                                printf ("\n\nA matriz nao e circulante\n\n");



                                return 1;

                                }
//// explicacao do codigo: o 'K' serve para ficar pulando +1 linha e coluna para depois comparar no IF

//// a variavel "cond" serve para que QUANDO o m[i][j] chegar em algum termo da ultima coluna ou ultima linha
//// a condicao if nao busque comparar com algum valor que NAO esta na matriz


//// ex: 1 2 3
////     3 1 2
////     2 3 1 // se o i ou j for 2(para linha ou coluna) ele vai buscar algum valor fora da matriz por causa do K
                //// -> por isso usei a variavel 'COND'

            }
        }
    }




printf ("\n\n A matriz eh CIRCULANTE\n\n");






    return 0;
}
