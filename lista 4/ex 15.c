/* Escreva um programa em C para atualizar um registro em um arquivo binario. */

#include <stdio.h>
#include <string.h>


#define qnt 3

    typedef struct {        /// struct geral - registro
        char nome[20];
        int id;
    } registro;

int main ()
{
    FILE *file;         /// abrindo arquivo como bin
    file = fopen ("Atualizar_reg_ex15.bin", "w+b");

    registro registros[qnt];

    if (file == NULL)       /// verificando se existe o arquivo
    {
        printf ("Nao foi encontrado o arquivo\n\n");
        return -1;
    }

    for (int i = 0; i < qnt; i++)           //// arquivando infos
    {
        printf ("Informe o nome (em string) e o id (em int) da pessoa %d: \n", i+1);
        scanf ("%s", registros[i].nome);
        scanf ("%d",&registros[i].id);
        getchar ();
    }

    for (int i = 0; i < qnt; i++)           //// passando os arquivos para o arquivo bin
    {
        fwrite (&registros[i], sizeof(registro), 1, file);
    }

    int atualizar;
    printf ("Informe a pessoa que deseja alterar os dados (0-%d): ", qnt-1);    //// pegando indice
    scanf ("%d",&atualizar);

    if (atualizar < 0 || atualizar > qnt - 1)       /// verificando se esta na escala
    {
        printf ("FORA DE ESCALA\n\n");
        return -1;
    }

    registro coletar, coletar2;
    fseek (file, atualizar * sizeof(registro), SEEK_SET);       /// arquivando a struct com base no indice
    fread (&coletar, sizeof(registro), 1, file);

    char nome[20];
    int id;

    printf ("Informe o nome e o id para atualizar da pessoa %d: \n",atualizar); /// arquivando novas informacoes
    scanf ("%s", nome);
    scanf ("%d",&id);

    strcpy (coletar.nome, nome);        //// passando as informacoes para a struct
    coletar.id = id;

    fseek (file, atualizar * sizeof (registro), SEEK_SET);  //// ATUALIZANDO AS INFORMACOES NO ARQUIVO BIN
    fwrite (&coletar, sizeof(registro), 1, file);

    fseek (file, atualizar * sizeof (registro), SEEK_SET);  //// VERIFICANDO SE ATUALIZOU O REGISTRO
    fread (&coletar2, sizeof(registro), 1, file);

    printf ("O nome e o id que foi inserido na pessoa %d:\n%s\n%d\n",atualizar,coletar2.nome, coletar2.id); /// imprimindo as informacoes (verificando)

    fclose (file);      /// fechando arquivo

    return 0;
}