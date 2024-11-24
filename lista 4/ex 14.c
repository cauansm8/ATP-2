/* Escreva um programa em C para buscar um registro em um arquivo binario usando busca binaria. */

#include <stdio.h>
#include <string.h>

#define qnt 5

    typedef struct {        /// registro ordenada com base na idade
        int idade;
        char nome[10];
    } registro;


    void busca_bin (int ini, int fim, FILE * file, int busca)       //// busca binaria
    {
        int meio = (ini + fim) / 2;

        if (ini <= fim)
        {
            registro coletar;               ///// arquivando a struct do meio do arquivo
            fseek (file, meio * sizeof(registro), SEEK_SET);
            fread (&coletar, sizeof(registro), 1, file);

            if (coletar.idade == busca)         //// se as idades baterem, printa o nome
            {
                printf ("A idade buscada esta no arquivo binario!!");
                printf ("\nA pessoa que possui essa idade: %s\n\n",coletar.nome);
                return 0;
            }

            if (busca > coletar.idade)      ///// se a idade buscada for maior, chama a funcao dnv (com o inicio = meio + 1)
            {
                return busca_bin (meio + 1, fim, file, busca);
            }

            if (busca < coletar.idade)      //// se a idade buscada for menor, chama a funcao dnv (com o fim = meio - 1)
            {
                return busca_bin (ini, meio - 1, file, busca);
            }

        }

        else            /// se nao encontrar, imprime a mensagem de nn encontrado
        {
            printf ("NAO FOI ENCONTRADO ALGUEM COM TAL IDADE");
            return 0;
        }


    }



int main ()
{
    registro registros[qnt];

    FILE *file;         //// abrindo o arquivo bin como escrita e leitura
    file = fopen ("BuscaBin_ex14.bin", "w+b");  

    if (file == NULL)
    {
        printf ("Nao foi encontrado o arquivo!!");
        return -1;
    }


    for (int i = 0; i < qnt; i++)       //// passando as informacoes
    {
        printf ("Informe nome e idade do registro %d: \n", i+1);
        scanf ("%s", registros[i].nome);
        scanf ("%d",&registros[i].idade);
        getchar ();
    }

    for (int i = 0; i < qnt; i++)       //// passando para o arq bin
    {
        fwrite (&registros[i], sizeof(registro), 1, file);
    }


    int idade_buscada;
    printf ("Informe uma idade para ser buscada no arq bin: ");     //// arquivando o valor buscado
    scanf ("%d",&idade_buscada);

    int ini = 0, fim = qnt - 1;

    
    busca_bin (ini, fim, file, idade_buscada);  /// chamando a funcao

    fclose (file);

    return 0;
}

    