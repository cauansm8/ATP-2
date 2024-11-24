#include <stdio.h>

/* Declare um arranjo de estruturas para armazenar as informacoes de 3 livros
(titulo, autor, ano de publicacao) e imprima seus valores. */

#define qnt 3 //// quantidade


typedef struct {            //// estrutura
    char titulo [100];
    char autor [100];
    int ano;
} infos;

    void arquivar (infos * livros, int i)           //// funcao para arquivar com ponteiro
    {
        printf ("Informe titulo, autor e ano de publicacao do livro %d:\n",i+1);
        gets (livros->titulo);
        gets (livros->autor);
        scanf ("%d",&livros->ano);
        getchar ();

    }

    void imprimir (infos livros, int i)             //// funcao para imprimir
    {
        printf ("\n\nAs informacoes do livro %d:\nTitulo: %s\nAutor: %s\nAno: %d\n\n", i+1, livros.titulo, livros.autor, livros.ano);
    }


int main ()
{

    infos livros[qnt];


    for (int i = 0; i < qnt; i++)           /// loop para arquivar
    {
        arquivar (&livros[i], i);
    }

    for (int i = 0; i < qnt; i++)           //// loop para imprimir
    {
        imprimir (livros[i], i);
    }


    return 0;
}