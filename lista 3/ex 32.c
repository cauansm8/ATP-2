/* Declare um arranjo de estruturas para armazenar as informacoes de 4 produtos
(nome, codigo, preco) e imprima seus valores. */

#include <stdio.h>
#define qnt 4

typedef struct{             //// estrutura para nome
    char nome[100];
}nome;

typedef struct{             /// estrutura para codigo
    int codigo;
}codigo;

typedef struct{             //// estrutura para preco
    float preco;
}preco;

typedef struct {            //// estrutura para geral
    nome nome;
    codigo codigo;
    preco preco;
} infos;


    void arquivar (infos *produto, int i)           //// funcao para arquivar
    {
        printf ("Informe o nome, o codigo e o preco do produto %d: \n", i+1);
        gets (produto->nome.nome);
        scanf ("%d",&produto->codigo.codigo);
        scanf ("%f",&produto->preco.preco);
        getchar();
    }

    void imprimir (infos produto, int i)            //// funcao para imprimir
    {
        printf ("\nAs informacoes do produto %d: \n",i + 1);
        printf ("Nome: %s\nCodigo: %d\nPreco: %.2f\n\n", produto.nome.nome, produto.codigo.codigo, produto.preco.preco);
    }


int main ()
{
    infos produtos[qnt];

    for (int i = 0; i < qnt; i++)       /// loop para arquivar
    {
        arquivar (&produtos[i], i);
    }

    for (int i = 0; i < qnt; i++)       //// loop para imprimir
    {
        imprimir (produtos[i], i);
    }


}