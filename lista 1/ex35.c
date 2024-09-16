#include <stdio.h>
#include <stdlib.h>


int main (int argc, char **argv)
{
//// Escreva um programa em C que receba um numero inteiro
//// como argumento na linha de comando e verifique se ele e par ou  impar.

    if (atoi (argv[1]) % 2 == 0){       //// transforando a string em numero E vendo se o resto da div por 2 e par
        printf("\nO numero e par\n");
    }
    else {
        printf ("\nO numero e impar\n");
    }


    return 0;
}
