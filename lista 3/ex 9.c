/* Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
pessoa (nome, idade, altura) e imprima o resultado. */

#include <stdio.h>
#include <stdlib.h>

typedef struct{ /* Estrutura */
    char nome[100];
    int idade;
    float altura;
} pessoa;


int main ()
{
    int t;

    t = sizeof(pessoa); /* a variavel T recebe a quantidade de bits da struct */
    printf ("O tamanho da estrutura: %d\n", t);

    return 0;
}