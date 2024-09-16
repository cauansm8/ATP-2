#include <stdio.h>


int main ()
{
    //// Escreva um programa em C que determine se um array de
    //// 10 inteiros  e simetrico (um palindromo).

    int array[10], i=0, verif=1;


    printf ("\nInforme 10 numeros: \n");
    do
    {
        scanf ("%d",&array[i]);
        i++;


    }while (i<10);

    i=0;

    do
    {
        if (array[i]!=array[9-i]){ ///// verifica o primeiro com o ultimo
            verif = 0;              //// se forem diferentes desde ja, é fim do loop
        }
        else {                      //// se sao iguais, continua o loop ate encontrar diferenca OU
            i++;                    //// terminar o loop
        }

    }while (i<5 && verif!=0);

    if (verif==1){
    printf ("\nPalindromo!!!\n");
    }

    if (verif==0){
    printf ("\nNao e palindromo!!!\n");
    }

    return 0;
}
