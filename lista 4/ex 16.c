/* Escreva um programa em C para deletar um registro especifico de um arquivo binario. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define qnt 3

typedef struct {    //// registros
    char nome[20];
    int idade;
} registro;

int main ()
{

    FILE *file;             //// colocando ponteiro para arquivo
    file = fopen ("deletar_registro_ex16.bin", "w+b");

    if (file == NULL)       /// verificando se existe o arquivo
    {
        printf ("O arquivo binario nao foi encontrado!!");
        return -1;
    }

    registro Regs[qnt];

    for (int i = 0; i < qnt; i++)           //// arquivando as informacoes
    {
        printf ("Informe o nome (em string) e a idade (em int) da pessoa %d: \n", i+1);
        scanf ("%s", Regs[i].nome);
        scanf ("%d",&Regs[i].idade);
        getchar ();
    }

    for (int i = 0; i < qnt; i++)           //// passando os arquivos para o arquivo bin
    {
        fwrite (&Regs[i], sizeof(registro), 1, file);
    }

    int deletar;

    printf ("Informe um indice que deseja deletar (0 - %d): ", qnt-1);      //// arquivando o indice de deletar
    scanf ("%d",&deletar);

    if (deletar < 0 || deletar >= qnt) 
    {
        printf("Indice fora de escala!\n");
        fclose(file);
        return -1;
    }

    if (deletar != qnt - 1)     /// CONDICAO -> SE O INDICE DE DELETAR NAO FOR O ULTIMO - realize as operacoes
    {
        for (int i = deletar; i < qnt - 1; i++)         //// passando as informacoes do proxima struct (buscando no arquivo) para a anterior
        {
            fseek (file, i * sizeof (registro), SEEK_SET);      //// buscando no arq struct i
            fread (&Regs[i], sizeof(registro), 1, file);

            int j = i + 1;
            rewind (file);

            fseek (file, j * sizeof (registro), SEEK_SET);      //// buscando no arq a struct i+1
            fread (&Regs[j], sizeof(registro), 1, file);

            Regs[i].idade = Regs[j].idade;                  //// passando as infos i+1 para i
            strcpy (Regs[i].nome, Regs[j].nome);


        }
    }


    fclose (file);

    file = fopen ("deletar_registro_ex16.bin", "w+b");  /// limpando arquivo

    if (file == NULL)       /// verificando se existe o arquivo
    {
        printf ("O arquivo binario nao foi encontrado!!");
        return -1;
    }



    for (int i = 0; i < qnt-1; i++)           //// passando as informacoes atualizadas para o arquivo (agora sem algum registro)
    {
        fwrite (&Regs[i], sizeof(registro), 1, file);
    }

    registro verificando[qnt-1];                //// variavel para arquivar os registros e verificar
    

    for (int i = 0; i < qnt-1; i++)            //// arquivando
    {
        rewind (file);
        fseek (file, i * sizeof(registro), SEEK_SET);
        fread (&verificando[i], sizeof(registro), 1, file);
    }

    for (int i = 0; i < qnt-1; i++)                //// imprimindo e verificando se o registro foi apagado
    {
        printf ("\nNome: %s",verificando[i].nome);
        printf ("\nIdade: %d",verificando[i].idade);
    }


    fclose (file);              //// fechando arquivo

    return 0;
}