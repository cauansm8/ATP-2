/* Crie uma funcao que recebe uma estrutura de carro (marca, modelo, ano) como
parametro e imprima seus valores. */

#include <stdio.h>

#define qnt 2 //// quantidade

typedef struct {                //// estrutura
    char marca[100];
    char modelo[100];
    int ano;
} infos;

    void arquivar (infos * carros, int i)           /// funcao para arquivar com ponteiro
    {
        printf ("\nInforme a marca, modelo e o ano do carro %d: \n",i+1);
        gets (carros->marca);
        gets (carros->modelo);
        scanf ("%d",&carros->ano);
        getchar();
    }

    void imprimir (infos carros, int i)             //// funcao para imprimir com .
    {
        printf ("\nAs informacoes do carro %d: \nMarca: %s\nModelo: %s\nAno: %d\n\n", i+1, carros.marca, carros.modelo, carros.ano);
    }


int main ()
{
    infos carros[qnt];      

    for (int i = 0; i < qnt; i++)           /// loop para arquivar
    {
        arquivar (&carros[i], i);
    }

    for (int i = 0; i < qnt; i++)           //// loop para imprimir
    {
        imprimir (carros[i], i);
    }


    return 0;
}