/* Escreva um programa em C para ler e exibir um registro especifico em um arquivo binario. */

#include <stdio.h>
#define qnt 3

    typedef struct {        /// registro
        char nome[100];
        int idade;
    } registro;


int main ()
{
    FILE *file;             //// abrindo o arquivo para escrita e leitura
    file = fopen ("registro_espec_ex11.bin", "w+b");

    if (file == NULL)           //// verificando se o arquivo existe
    {
        printf ("Nao foi encontrado o arquivo binario");
        return 1;
    }

    registro registros[qnt];            ///// 3 vetores de struct registro

    for (int i = 0; i < qnt; i++)       //// arquivando no struct e passando para o arquivo
    {
        printf ("\nInforme nome e idade da pessoa %d: \n", i+1);
        scanf ("%s", registros[i].nome);
        scanf ("%d",&registros[i].idade);
       fwrite (&registros[i], sizeof(registro), 1, file);
    }

    int ind;
    printf ("Informe o numero da pessoa que deseja acessar as informacoes (0-2): ");        //// arquivando indice
    scanf ("%d",&ind);

    if (ind < 0 || ind > 2)     //// verificando se esta fora de escala o indice
    {
        printf ("Registro fora do arquivo");
        return -1;
    }

    registro reg;
  
    fseek (file, ind * sizeof (registro), SEEK_SET);        /// retornando ao inicio
  
    fread (&reg, sizeof(registro), 1, file);                //// arquivando o struct no registro
    
    printf ("Nome da pessoa escolhida: %s\n",reg.nome);     /// imprimindo o registro
    printf ("Idade da pessoa escolhida: %d",reg.idade);  

    fclose (file);      /// fechando o arquivo

    return 0;
}