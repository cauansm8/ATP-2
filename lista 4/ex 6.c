/* Escreva um programa em C para buscar e exibir um determinado caractere em um arquivo de texto. */

#include <stdio.h>

int main (){

    FILE *file;                 //// criando ponteiro para arquivo
    file = fopen ("buscar_carac_ex6.txt", "w+");    /// abrindo como escrita e leitura

    if (file == NULL)               //// verificando se existe o arquivo
    {
        printf ("Nao existe o arquivo\n\n");
        return 1;
    }

    char caracter, palavra[50];
    printf ("Informe um caracter para ser buscado no arquivo: ");       //// arquivando o caractere procurado
    scanf ("%c",&caracter);

    getchar();

    printf ("Informe uma palavra pra ser escrita no arquivo: ");        //// arquivando o texto para o arquivo
    gets (palavra);

    fprintf (file, "%s", palavra);              //// passando o texto para o arquivo

    int cont=0;         //// variavel para contar quantas vezes o caracter aparece
    char c;             //// variavel que vai "andar" no loop

    rewind(file);       /// IMPORTANTE -> manda o cursor para o INICIO do arquivo 

    do{                 //// loop para verificar os caracteres
    
    c = fgetc (file);  //// arquiva o caracter na variavel

    if (c == caracter)  //// compara se os caracteres sao iguais  
    {
        cont++;         //// aumenta o contador   
    }


    }while (c != EOF);      //// EOF -> end of file
    

    if (cont > 0){              //// printar
        printf ("O caracter '%c' aparece %d vez(es) no arquivo!!!\n\n", caracter, cont);
    }

    else {                      //// printar
        printf ("O caracter '%c' nao aparece no arquivo!!!\n\n", caracter);
    }


    fclose (file);      //// fechando o arquivo

    return 0;
}