#include <stdio.h>

int main ()
{
    //// Escreva um programa em C que verifique se todos os ele-
    //// mentos de um array de 5 inteiros sao positivos.

    int array[5], i=0, verif=1;


    printf ("\nInforme 5 numeros: \n");
    do
    {
        scanf("%d",&array[i]);
        i++;

    }while (i<5);

    i=0;

    do
    {
        if (array[i]<0){ //// se o numero for negativo, interrompe a verificacao
            verif = 0;
        }
        else {
            i++;
        }

    }while (i<5 && verif!=0);

    if (verif==1){
        printf ("\nTodos os numeros sao positivos\n");
    }
    if (verif==0){
        printf ("\nExiste(em) numero(os) negativo(os)\n");
    }

return 0;
}
