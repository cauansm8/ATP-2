/* Acesse os componentes de uma estrutura de cliente (nome, idade, endereco)
utilizando o operador ponto ‘.’ e imprima seus valores. */


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



int main ()
{
    infos clientes[qnt];

    for (int i = 0; i < qnt; i++)
    {
        printf ("Informe nome, idade e endereco do cliente: \n");       //// arquivando com ponto
        gets (clientes[i].nome);
        scanf ("%d",&clientes[i].idade);
        getchar ();
        gets (clientes[i].endereco);

    }

    for (int i = 0; i < qnt; i++)       //// funcao para imprimir
    {
        imprimir(clientes[i], i);
    }


    return 0;
}