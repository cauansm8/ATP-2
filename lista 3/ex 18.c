/* Declare e inicialize uma estrutura aninhada para armazenar as informacoes de
um endereco (rua, numero, cidade) e imprima seus valores. */


#include <stdio.h>


///////////// REPETINDO O EXERCICIO 15 -> POIS É A MESMA COISA 

            /// estrutura aninhada -> struct dentro de struct!!

#define qnt 2 //// quantidade

typedef struct{             //// estrutura interna
    char rua[100];
    char bairro[100];
    int numero;
} regiao;


typedef struct{             //// estrutura geral (externa)
    
    char estado[100];

    char cidade[100];

    regiao regiao;

} endereco;


    void arquivar (endereco * pessoa, int i)                /// funcao para arquivar as informacoes (nas duas estruturas)
    {
        printf ("Informe o estado, a cidade, a rua, o bairro e o numero da casa da pessoa %d: \n", i + 1);
        gets (pessoa->estado);
        gets (pessoa->cidade);
        gets (pessoa->regiao.rua);
        gets (pessoa->regiao.bairro);
        scanf ("%d",&pessoa->regiao.numero);
        getchar ();

    }

    void imprimir (endereco pessoa, int i)                  //// funcao para imprimir cada informacao
    {
        printf ("A localizacao da pessoa %d: \nEstado: %s\nCidade: %s\nRua: %s\nBairro: %s\nNumero: %d\nFIM DA PESSOA %d\n", i + 1, pessoa.estado, pessoa.cidade, 
        pessoa.regiao.rua, pessoa.regiao.bairro, pessoa.regiao.numero, i+1);
        
    }



int main ()
{

    endereco pessoa[qnt];

    for (int i = 0; i < qnt; i++)               ///// loop para arquivar
    {
        arquivar (&pessoa[i], i);
    }

    for (int i = 0; i < qnt; i++)               //// loop para imprimir
    {
        imprimir (pessoa[i], i);
    }


    return 0;
}