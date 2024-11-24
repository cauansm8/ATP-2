/* Acesse os componentes de uma estrutura de cliente (nome, idade, endereco)
utilizando o operador “->” e imprima seus valores. */


#include <stdio.h>

#define qnt 1       /// quantidade

typedef struct{     /// estrutura
    char nome[100];
    int idade;
    char endereco [100];
} infos;

    void imprimir (infos clientes, int i)           //// funcao para imprimir
    {
        printf ("\n\nO nome, a idade e o endereco do cliente %d: \n", i + 1);
        printf ("%s\n%d\n%s\n\n\n",clientes.nome, clientes.idade, clientes.endereco);
    }

    void arquivar (infos * clientes, int i)
    {
        printf ("Informe nome, idade e endereco do cliente %d: \n", i + 1);       //// arquivando com ponteiro
        gets (clientes->nome);
        scanf ("%d",&clientes->idade);
        getchar ();
        gets (clientes->endereco);

    }

int main ()
{
    infos clientes[qnt];

    for (int i = 0; i < qnt; i++)       /// funcao para arquivar
    {
        arquivar (&clientes[i], i);
    }

    for (int i = 0; i < qnt; i++)       //// funcao para imprimir
    {
        imprimir(clientes[i], i);
    }


    return 0;
}