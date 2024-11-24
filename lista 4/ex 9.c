/* Escreva um programa em C para contar o numero de registros em um arquivo binario. */

#include <stdio.h>
#define qnt 4

    typedef struct{     //// struct de registro
        char nome[100];
        int idade;
    } registro;


int main ()
{
    FILE *file;             //// ponteiro para arquivo
    file = fopen ("qnt_registros_ex9.bin", "w+b"); /// abrindo modo escrita (registrando struct) dps leitura 
    registro registros[qnt];    //// variaveis 'registros' com a struct 'registro' 


    if (file == NULL)                   //// verificando se existe o arquivo
    {
        printf ("Nao foi encontrado o arquivo");
        return 1;
    }

    for (int i = 0; i < qnt; i++)       //// arquivando registros
    {
        printf ("Informe nome e idade da pessoa %d:\n",i+1);        //// passando para as variaveis do struct
        scanf ("%s",registros[i].nome);
        scanf ("%d",&registros[i].idade);
         
    }
        fwrite (registros, sizeof(registro), qnt, file);    /// passando o registro
    

        int tamArq = ftell(file); /// FTELL -> funcao que informa quantos bytes você está distante do início do arquivo
                                  ///  ou seja, o tamanho do arquivo
                                  /// NAO PRECISA do fseek, pois o cursor ja esta no fim do arquivo!
        
        int qntRegis;
        
        qntRegis = tamArq / sizeof(registro); /// se dividirmos o tamanho do arquivo pelo tamanho de cada struct registro
                                            /// resultara na quantidade de registros 
                                           /// mesma valor que a variavel 'qnt', pois sao as mesmas coisas
        printf("\n\nA quantidade de registros: %d\n\n", qntRegis);

        fclose (file);  /// fechando arquivo
    
    return 0;

}