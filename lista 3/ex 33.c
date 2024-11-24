/* Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
funcionario (nome, salario, departamento) e imprima o resultado. */

#include <stdio.h>


typedef struct {        //// estrutura
    char nome[100];
    float salario;
    char departamento[100];

} infos;

int main ()
{
    int tam = sizeof(infos);

    printf ("\nO tamnho da struct: %d\n", tam);



    return 0;
}