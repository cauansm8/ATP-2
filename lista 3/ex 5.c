/* Acesse os componentes de uma estrutura de aluno (nome, matricula, nota)
utilizando o operador “->” e imprima seus valores. */



#include <stdio.h>
#include <stdlib.h>

typedef struct{         //// estrutura geral

    char nome[20];
    int matricula;
    float nota;

} aluno;

    void arquivar (aluno *pessoa)       //// função para arquivar os valores
    {
        printf ("Informe o nome, RA e a nota do aluno: \n");
        scanf ("%s",pessoa->nome);
        scanf ("%d",&pessoa->matricula);    /* USANDO O OPERADOR "->" */
        scanf ("%f",&pessoa->nota);
    }

    void acessar_imprimir (aluno pessoa)    
    {
        printf ("\n\nAs informacoes do aluno: \nNome: %s\nMatricula: %d\nNota:%f\n\n",
                                pessoa.nome, pessoa.matricula, pessoa.nota);
    }


int main ()
{
    aluno pessoa;           //// declarando a variavel pessoa como a struct ja criada 'aluno'
    
    arquivar (&pessoa);     //// chamando a função

    acessar_imprimir(pessoa); //// chamando a função




    return 0;
}