/* Escreva um programa em C para ler e exibir o conteudo de um arquivo binário. */

#include <stdio.h>

int main ()
{
    FILE *file;                 /// criando o ponteiro para arquivo binario
    file = fopen ("cont_bin_ex8.bin", "w+b");   //// criando um arquivo (fwrite) e leitura dps (fread)

    if (file == NULL)       //// verificando se existe o arquivo
    {
        printf ("Nao existe o arquivo bin\n\n");
        return 1;
    }

    char conteudo[20];
    printf ("Informe algo para ser inserido no arquivo binario: ");     //// arquivnado o conteudo para ser inserido no arq bin
    gets (conteudo);

    fwrite (conteudo, sizeof(char), 20, file);   //// manda o texto em binario 

    char arquivar_conteudo[20];

    rewind (file); /// IMPORTANTE -> como foi arquivado um conteudo anteriormente (fwrite), o cursor do mouse esta no final da string!!! 
                    /// por isso se usa esse rewind para retornar ao inicio do conteudo!!!!!

    fread (arquivar_conteudo, sizeof(char), 20, file);  //// transformando o conteudo em palavra e arquivando

    printf ("O conteudo que esta no arquivo bin: %s\n\n", arquivar_conteudo); /// printando

    fclose (file);  //// fechando arquivo

    return 0;
}