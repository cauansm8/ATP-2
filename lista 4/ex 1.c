/* Escreva um programa em C para criar um arquivo de texto e escrever uma mensagem nele. */

    #include <stdio.h>

    int main ()
    {   
        FILE *file;         /// criando um ponteiro para arquivo
        file = fopen ("mensagem_ex1.txt", "w");     //// criando para escrita

        if (file == NULL)           /// verificando se existe
        {
            printf ("Nao existe o arquivo!!!");
            return 1;
        }

        char mensagem[20];              //// variavel mensagem
        printf ("Informe uma mensagem: ");
        gets(mensagem);                 //// arquivando mensagem

        fprintf (file,"%s\n",mensagem); //// manda o texto para o arquivo.txt

        fclose (file);              //// fecha o arquivo


        return 0;
    }