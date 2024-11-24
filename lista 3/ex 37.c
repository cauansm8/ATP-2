/* Declare e inicialize uma estrutura para armazenar as informacoes de um cliente
(nome, idade, endereco) e imprima seus valores. */

#include <stdio.h>
#define qnt 2


typedef struct {        //// estrutura
    char nome[100];
    int idade;
    char endereco[100];
} infos;

    void arquivar (infos *clientes, int i)      //// funcao para arquivar
    {
        printf ("Informe nome, idade e endereco do cliente %d: \n",i+1);
        gets (clientes->nome);
        scanf ("%d",&clientes->idade);
        getchar ();
        gets (clientes->endereco);
    }

    void imprimir (infos clientes, int i)       //// funcao para imprimir
    {
        printf ("\nAs informacoes do cliente %d: \n",i+1);
        printf ("Nome: %s\nIdade: %d\nEndereco: %s\n\n", clientes.nome, clientes.idade, clientes.endereco);
    }


int main ()
{
    infos clientes[qnt];

    for (int i = 0; i < qnt; i++)       //// loop para arquivar
    {
        arquivar (&clientes[i], i);
    }

    for (int i = 0; i < qnt; i++)       /// loop para imprimir
    {
        imprimir (clientes[i], i);        
    }


    return 0;
}