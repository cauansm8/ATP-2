/* Escreva um programa em C para contar o numero de linhas em um arquivo de texto. */

    #include <stdio.h>

    int main ()
    {
    
    FILE *file;         //// declarando a variavel arquivo como ponteiro
    file = fopen ("contar_linhas_ex3.txt", "r");    /// abrindo o arquivo como leitura

    if (file == NULL)       //// verificacao se o arquivo existe
    {
        printf ("Nao existe o arquivo!!\n");
        return 1;
    }

    int cont = 1;           //// variavel de contador de linha
    char linha;             //// variavel para arquivar caracter

    do{                     //// loop para para verificar todo o arquivo

        linha = fgetc (file);       //// arquiva o caracter com o -> fgetC

        if (linha == '\n')          //// verificando se ha o caracter de pular linha
            cont++;             //// se tiver, conta um a mais!!

    }while (linha != EOF);          /// EOF eh 'end of file' que define como fim do arquivo

    printf ("A quantidade de linhas: %d\n\n", cont);    //// imprimindo

    fclose (file);      //// fechando

        return 0;
    }