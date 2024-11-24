/* Escreva um programa em C para encontrar arquivos duplicados em um diretorio. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main ()
{
    char dir[30] = "D:\\Unesp\\1Ano\\ATP2\\teste\\";        /// diretorio
    char arquivos[5][30] = {{"arq1.txt"},{"arq2.txt"},{"arq3.txt"},{"arq4.txt"},{"arq5.txt"}}; /// arquivos do diretorio
   
    
    char conteudo1[100], conteudo2[100];

    
    for (int i = 0; i < 5; i++)     //// loop para pegar os dados
    {  
        FILE *file1;

        char diretorio_p_arquivo[40];
        
        strcpy (diretorio_p_arquivo, dir);  //// copiando direitorio para o arquivo i
        strcat(diretorio_p_arquivo, arquivos[i]); 

        file1 = fopen (diretorio_p_arquivo, "r");   /// abrindo como leitura

        if (file1 == NULL)  /// verificando se o arquivo existe
        {
            printf ("Nao foi encontrado o arquivo!!\n");

        }

        rewind (file1);
        fgets(conteudo1, 100, file1);      //// pegando o conteudo (precisa usar o fgets pois se usar o scanf pega somente a primeira palavra) 
        fclose (file1);     /// fechando arquivo

        for (int j = i + 1; j < 5; j++)
        {
        FILE *file2;
       
        char diretorio_p_arquivo[40];

        strcpy (diretorio_p_arquivo,dir);   //// copiando direitorio para o arquivo j
        strcat(diretorio_p_arquivo,arquivos[j]); 

        file2 = fopen (diretorio_p_arquivo, "r");

        if (file2 == NULL)          /// verificando se o arquivo existe
        {
            printf ("Nao foi encontrado o arquivo!!\n");
            
        }

        rewind (file2);
        fgets(conteudo2, 100, file2);   //// pegando o conteudo (precisa usar o fgets pois se usar o scanf pega somente a primeira palavra) 
        fclose (file2);         /// fechando arquivo

        if (strcmp (conteudo1, conteudo2) == 0)     /// comparando
        {
        printf ("\n\nOs arquivos %s e %s estao duplicados!!!!\n\n", arquivos[i], arquivos[j]);  //// se forem iguais, mostrar quais arquivos possuem o mesmo conteudo
        return 0;       /// fim do programa
        }

        }
    }

    printf ("\n\nNAO HA ARQUIVOS DUPLICADOS\n\n"); //// se nao tiver nenhum arquivo duplicado, mostra essa mensagem!!

    return 0;
}