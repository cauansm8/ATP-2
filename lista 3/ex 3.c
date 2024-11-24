// Atribua os valores de uma estrutura para outra e imprima os valores da nova estrutura

#include <stdio.h>
#include <stdlib.h>



typedef struct{ /// estrutura colocada dentro da estrutura geral
                int dia;
                char mes[20];
                int ano;

} nascimento;

typedef struct{ /// estrutura geral
    
    char nome[20];
    int idade;
    nascimento nascimento; //// inserindo a segunda estrutura

} pessoa;


    void arquivar (pessoa * User)           //// arquivando usando ponteiro
    {
        printf ("Informe seu nome: ");
        scanf ("%s", User->nome);

        printf ("Informe sua idade: ");
        scanf ("%d",&User->idade);
        
        printf ("Informe o dia de seu nascimento: ");       //// só se usa o ponteiro uma única vez, mesmo com várias estruturas dentro da mesma!!
        scanf ("%d",&User->nascimento.dia);
        
        fflush(stdin);
        
        printf ("Informe o mes de seu nascimento: ");
        scanf ("%s",User->nascimento.mes);
        
        printf ("Informe o ano de seu nascimento: ");
        scanf ("%d",&User->nascimento.ano);
        
    }

    void imprimir (pessoa User)             //// imprimindo
    {
        printf ("\n\nOS SEUS DADOS: \n\n");
        printf ("Nome: %s \nIdade: %d\nDia de nascimento: %d\nMes de nascimento: %s\nAno de nascimento: %d\n\n",
                        User.nome, User.idade, User.nascimento.dia, User.nascimento.mes, User.nascimento.ano);
    }


int main ()
{
    pessoa User;

    arquivar (&User);
    imprimir (User);


    return 0;
}