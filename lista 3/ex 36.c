/* Resolva um problema de cadastro de livros utilizando estruturas. */

#include <stdio.h>

#define qnt 2

typedef struct {    /// estrutura
    char nome[100];
    char autor[100];
    int ano;
} infos;

    void arquivar (infos * livros, int i)       ///// funcao para arquivar
    {
        printf ("Informe o nome, autor e ano de publicacao do livro %d: \n", i+1);
        gets (livros->nome);
        gets (livros->autor);
        scanf ("%d",&livros->ano);
        getchar ();
    }

    
    void imprimir (infos  livros, int i)        /// funcao para imprimir
    {
        printf ("As informacoes do livro %d: \n", i+1);
        printf ("Nome: %s\nAutor: %s\nAno: %d\n\n",livros.nome, livros.autor, livros.ano);
    }


int main ()
{
    infos livros[qnt];

    for (int i = 0; i < qnt; i++)           //// loop para arquivar
    {
        arquivar (&livros[i], i);
    }

    for (int i = 0; i < qnt; i++)           //// loop para imprimir
    {
        imprimir (livros[i], i);
    }


    return 0;
}