//// Acesse os componentes de uma estrutura de aluno (nome, matricula, nota)
//// utilizando o operador ponto ‘.’ e imprima seus valores.

#include <stdio.h>
#include <stdlib.h>

typedef struct{         //// estrutura geral

    char nome[20];
    int matricula;
    float nota;

} aluno;

 

    void acessar_imprimir (aluno pessoa)    //// função para acessar e imprimir as informações
    {
        printf ("\n\nAs informacoes do aluno: \nNome: %s\nMatricula: %d\nNota:%f\n\n",
                                pessoa.nome, pessoa.matricula, pessoa.nota); 
                                /* ACESSANDO USANDO O OPERADOR "." */
    }


int main ()
{
    aluno pessoa;           //// declarando a variavel pessoa como a struct ja criada 'aluno'
    
        printf ("Informe o nome, RA e a nota do aluno: \n");   /* ACESSANDO USANDO O OPERADOR "." */
        scanf ("%s",pessoa.nome);
        scanf ("%d",&pessoa.matricula);
        scanf ("%f",&pessoa.nota);
    


    acessar_imprimir(pessoa); //// chamando a função




    return 0;
}