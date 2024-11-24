/* Escreva um programa em C para criar um arquivo de texto com conteudo criptografado e depois descriptografar. */

#include <stdio.h>


int main ()
{
    FILE *file;         ///// abrindo arquivo para arquivar uma mensagem criptografada
    file = fopen ("ex29_descrip.txt", "w");

    if (file == NULL)   //// verificando se existe o arquivo
    {
        printf ("Nao foi encontrado o arquivo txt");
        return -1;

    }
    
    char cript[20];
    printf ("Informe uma mensagem criptografada para jogar no arquivo txt: "); //// arquivando palavra
    scanf ("%s", cript);

    fprintf (file, "%s\n", cript);              ///// passando para o arquivo txt

    fclose (file);                              //// fechando arquivo

    file = fopen ("ex29_descrip.txt", "r");   ///// abrindo arquivo como leitura

    if (file == NULL)                           //// verificando se o arquivo existe
    {
        printf ("Nao foi encontrado o arquivo txt");
        return -1;

    }
    
    char palavra[20];                       //// pegando a palavra
    fscanf (file, "%s", palavra);

    fclose (file);

    char descri[20];

    int i = 0;

    for (i; palavra[i]!= '\0'; i++)   //// loop para descriptografar
    {
        if (palavra[i] != 'a' && palavra[i] != 'A' && palavra[i] != 'b' && palavra[i] != 'B' && palavra[i] != 'c' && palavra[i] != 'C')
        {
            descri[i] = palavra[i] - 3;     ///// retorna 3 passos para descriptografar

        }
        else                                //// em caso de abc -> xyz
        {
            switch (palavra[i])
            {
                case 'a':
                descri[i] = 'x';
                break;

                case 'A':
                descri[i] = 'X';
                break;

                case 'b':
                descri[i] = 'y';
                break;

                case 'B':
                descri[i] = 'Y';
                break;

                case 'c':
                descri[i] = 'z';
                break;

                case 'C':
                descri[i] = 'Z';
                break;


            }

        }


    }
    descri[i] = '\0';                           //// colocando o fim na string

    printf ("Palavra criptografada: %s\n", palavra);
    printf ("Palavra descriptografada (-3): %s\n", descri);
    

    fclose (file);  /// fechando arquivo

    return 0;
}