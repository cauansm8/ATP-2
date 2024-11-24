/* Utilize a declaracao de tipos (typedef) para simplificar a definicao de uma es-
trutura para armazenar as informacoes de um cliente (nome, idade, endereco) e
imprima seus valores.*/
#include <stdio.h>

#define qnt 1 //// quantidade

typedef struct {                    //// estrutura
    char nome[20];
    int idade;
    char endereco[50];
} infos;

    void arquivar (infos * cliente, int i)          /// funcao para arquivar na struct com ponteiro
    {
        printf ("Informe nome, idade e endereço do cliente: \n");
        gets (cliente-> nome);
        scanf ("%d",&cliente->idade);
        getchar();
        gets (cliente->endereco);
    }

    void imprimir (infos cliente, int i)            //// funcao para imprimir com .
    {
        printf ("Nome e idade do cliente %d: \n", i+1);
        printf ("%s\n%d\n%s\n\n", cliente.nome, cliente.idade, cliente.endereco);
    }


int main ()
{
    infos cliente [qnt];

        for (int i = 0; i < qnt; i++)               //// loop para arquivar
        {
            arquivar (&cliente[i], i);
        }

        for (int i = 0; i < qnt; i++)               //// loop para imprimir
        {
            imprimir (cliente[i], i);
        }

    return 0;
}