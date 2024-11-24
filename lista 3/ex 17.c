/* Acesse os componentes de uma estrutura de filme (titulo, diretor, ano de lancamento)
utilizando o operador “->” e imprima seus valores. */


#include <stdio.h>

#define qnt 1 //// quantidade

typedef struct{         /// estrutura
    char titulo[100];
    char diretor [100];
    int ano;
} infos;

    void arquivar (infos * filmes, int i)           //// funcao para arquivar usando ponteiro 
    {
        printf ("Informe o titulo, diretor e o ano de lancamento do filme %d: \n", i + 1);
        gets (filmes->titulo);
        gets (filmes->diretor);
        scanf ("%d",&filmes->ano);
        getchar();

    }


    void imprimir (infos filmes, int i)         //// funcao para imprimir
    {
        printf ("As informacoes do filme %d: \n",i + 1);
        printf ("Titulo: %s\nDiretor: %s\nAno de lancamento: %d\nFIM DAS INFORMACOES DO FILME %d\n\n", filmes.titulo, filmes.diretor, filmes.ano, i+1);
    }



int main ()
{

    infos filmes[qnt];

    for (int i = 0; i < qnt; i++)           //// loop para arquivar
    {
        arquivar (&filmes[i], i);
    }

    for (int i = 0; i < qnt; i++)           //// loop para imprimir
    {
        imprimir (filmes[i], i);
    }




    return 0;
}