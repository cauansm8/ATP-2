/* Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
produto (nome, codigo, pre ̧co) e imprima o resultado. */

#include <stdio.h>

typedef struct{             //// estrutura
    char nome[100];
    int codigo;
    float preco;
} produto;


int main ()
{
    int tam = sizeof (produto);     //// passando o tamanho da struct para a variavel 
    printf ("O tamanho da estrutura do produto: %d\n\n", tam);  //// imprimindo o tamanho

    return 0;
}