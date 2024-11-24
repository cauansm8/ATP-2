/* Escreva um programa em C para ler um arquivo de texto e exibir o numero de ocorrencias de uma determinada palavra. */

#include <stdio.h>
#include <string.h>

int main ()
{

    FILE *file;         //// criando arquivo bin como escrita e leitura
    file = fopen ("ex22_qnt_vezes_pala.txt", "w+b");

    if (file == NULL)   //// verificando se existe o arquivo
    {
        printf ("Nao foi encontrado o arquivo!!!");
        return -1;
    }

    char strings[100];

    
    printf ("Informe uma palavra para ser inserida no arquivo bin: ");
    gets (strings);

    fprintf (file, "%s\n", strings);

    

    char pala_busca[20];
    char palavra[20];
    int cont = 0;

    printf ("Informe uma palavra que deseja calcular a quantidade de ocorrencias no arquivo bin: ");
    scanf ("%s", pala_busca);      ///// arquivando a palavra de busca

    rewind (file);  //// retornando ao inicio
   
    while (fscanf (file, "%s", palavra) != EOF)     //// loop enquanto o arquivo nao termina
    {
        
        if (strcmp(pala_busca, palavra) == 0)       //// comparando se sao iguais
        {
            cont++;         //// incrementando
        }


    }
    
    /* Usei um artificio para burlar o erro de contagem!!!! */

    printf ("A quantidade de vezes que apareceu a palavra: %d\n", cont);
             //// imprimindo a quantidade de ocorrencias   

    fclose (file); //// fechando arquivo

    return 0;
}