/* Escreva um programa em C para copiar o conteudo de um arquivo binario para outro arquivo. */

#include <stdio.h>

int main ()
{
    FILE *file1, *file2;            //// declarando as variaveis de file
    file1 = fopen ("origem_ex10.bin", "w+b");
    file2 = fopen ("destino_ex10.bin","w+b");

    if (file1 == NULL)              //// verificando se o arquivo existe
    {
        printf ("Nao existe o arquivo bin\n\n");
        return 1;
    }

    if (file2 == NULL)              //// verificando se o arquivo existe
    {
        printf ("Nao existe o arquivo bin\n\n");
        return 1;
    }

    char conteudo1[20], conteudo2[20], conteudo3[20];

    printf ("Informe algum conteudo do arquivo ORIGEM: ");          ///// arquivando algum conteudo
    gets (conteudo1);

    fwrite (conteudo1, sizeof(char), 20, file1);                    //// passando esse conteudo para o arquivo ORIGEM

    printf ("\nConteudo passado para file 1!!\n");

    rewind (file1);                                                  //// retornando o cursor para o inicio do arquivo

    fread (conteudo2, sizeof(char), 20, file1);                      ///// arquivando o conteudo do file1 (ORIGEM) em outra variavel
    printf ("\nO conteudo do arquivo 1: %s \n", conteudo2);

    fwrite (conteudo2, sizeof(char), 20, file2);                    ///// passando esse conteudo para a o arquivo DESTINO
    
    
    rewind (file2);                                                  //// verificando se o conteudo foi passado
    fread (conteudo3, sizeof(char), 20, file2);
    printf ("\nO conteudo no file 2: %s\n\n", conteudo3);

    fclose (file1);                                                   //// fechando arquivo
    fclose (file2);                                                   //// fechando arquivo

    return 0;
}