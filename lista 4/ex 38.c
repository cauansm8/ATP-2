/* Escreva um programa em C para implementar um sistema simples de gerenciamento de arquivos usando operacoes de arquivo. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


    void gerar_arquivos_no_dir()  
    {
    char dir[30] = "D:\\Unesp\\1Ano\\ATP2\\teste\\";             /// diretorio
    char arquivo[30];

    printf ("Informe o nome do arquivo que deseja criar (coloque ao final o seu tipo -> .bin ou .txt): ");
    scanf ("%s", arquivo);

    char cria_arquivos_no_dir[40];                                  //// essa string serve para pegar o enderecos dos ARQUIVOS!!
    
        strcpy(cria_arquivos_no_dir,dir);                 //// pega o diretorio

        strcat(cria_arquivos_no_dir,arquivo);                   //// junta com o nome do arquivo

        int tipo;                   //// pega o tipo de arquivo
        printf ("Informe o tipo do arquivo -> txt(0) ou bin(1): ");
        scanf ("%d", &tipo);

        if (tipo < 0 || tipo > 1)       /// fora de escala
        {
            printf ("Fora de escala");
            return -1;
        }

        FILE *file;

        if (tipo == 0)      /// se eh txt, abre como w
        {
        file = fopen(cria_arquivos_no_dir,"w");
        }

        if (tipo == 1)      /// se eh bin, abre como wb
        {
        file = fopen(cria_arquivos_no_dir,"wb");
        }

        fclose(file);       /// fechando arquivo
        printf ("ARQUIVO CRIADO!!!");
    }

    void escrever_no_arquivo()
    {
    char arquivo[30];   //// nome do arquivo
    printf ("Informe o nome do arquivo(incluindo o seu tipo -> .txt ou .bin): ");
    scanf ("%s", arquivo);

    char dir[30] = "D:\\Unesp\\1Ano\\ATP2\\teste\\";             /// diretorio
    
    char escrever_no_arquivo[40];

    strcpy(escrever_no_arquivo,dir);                 //// pega o diretorio

    strcat(escrever_no_arquivo,arquivo);                   //// junta com o nome do arquivo

    int tipo;       /// tipo do arquivo
    printf ("Informe o tipo do arquivo -> txt(0) ou bin(1): ");
    scanf ("%d", &tipo);

        if (tipo < 0 || tipo > 1)   //// fora de escala
        {
            printf ("Fora de escala");
            return -1;
        }
        getchar ();
        FILE *file;
    
        if (tipo == 0)  //// se eh txt, abre como a (no final)
        {

        file = fopen(escrever_no_arquivo,"a");

        if (file == NULL)       //// verificando se encontra o arquivo
        {
            printf ("Nao foi encontrado o arquivo!!\n\n");
            return -1;
        }
        
        char conteudo[100];         /// arquiva conteudo
        printf ("Informe seu conteudo: ");
        gets (conteudo);

        fprintf (file, "%s\n", conteudo);   //// manda para o arquivo
        printf ("Conteudo enviado para arquivo txt!!!\n\n");

        }


        if (tipo == 1)      //// se eh bin, abre como ab (no final)
        {
        file = fopen(escrever_no_arquivo,"ab");

        if (file == NULL)   //// verificando se encontra o arquivo
        {
            printf ("Nao foi encontrado o arquivo!!\n\n");
            return -1;
        }

        char conteudo[100];
        printf ("Informe seu conteudo: ");  /// arquivando conteudo
        gets (conteudo);

        fwrite (&conteudo, sizeof(char), 100, file); /// passando para o arquivo
        printf ("Conteudo enviado para arquivo txt!!!\n\n");
        }

        fclose (file);      /// fechando arquivo

    }

    void ler_arquivo()
    {
    char arquivo[30];           //// nome do arquivo
    printf ("Informe o nome do arquivo(incluindo o seu tipo -> .txt ou .bin): ");
    scanf ("%s", arquivo);

    char dir[30] = "D:\\Unesp\\1Ano\\ATP2\\teste\\";             /// diretorio
    
    char ler_arquivo[40];

    strcpy(ler_arquivo,dir);                 //// pega o diretorio

    strcat(ler_arquivo,arquivo);                   //// junta com o nome do arquivo

    int tipo;
    printf ("Informe o tipo do arquivo -> txt(0) ou bin(1): ");     //// tipo do arquivo
    scanf ("%d", &tipo);

        if (tipo < 0 || tipo > 1)           ///// fora da escala
        {
            printf ("Fora de escala");
            return -1;
        }
    
    FILE *file;
    
        if (tipo == 0)      //// se eh txt, abre como r
        {
        file = fopen(ler_arquivo,"r");

        if (file == NULL)       //// verificando se encontra o arquivo
        {
            printf ("Nao foi encontrado o arquivo!!\n\n");
            return -1;
        }

        char palavra[100];      ///// arquivando e printando conteudo
            while (fscanf (file, "%s", palavra) != EOF)
            {
                printf ("%s ", palavra);
            }
        printf ("\nConteudo lido!!!\n");    
        
        }

        if (tipo == 1)      //// se eh binario, abre como rb
        {
        file = fopen(ler_arquivo,"rb");

        if (file == NULL)       //// verificando se encontra o arquivo
        {
            printf ("Nao foi encontrado o arquivo!!\n\n");
            return -1;
        }

        char palavra[100];
        int bytes;
        
        printf ("Deseja ler quantos conteudos, considerando que arquiva a cada 100 bytes: ");   //// ler conteudo a cada 100 * x 
        scanf ("%d", &bytes);

            for (int i = 0; i < bytes + 1; i++)         //// arquivando e printando
            {   
                fread (&palavra, sizeof(char), 100, file);
                printf ("%s\n", palavra);
                i++;
            }
        printf ("\nConteudo lido!!!\n");
        
        }
    fclose (file);  ///// fechando arquivo
    }


    void renomear_arquivo ()
    {
    char dir[30] = "D:\\Unesp\\1Ano\\ATP2\\teste\\";             /// diretorio
    char arquivo[30];

    printf ("Informe o nome do arquivo que deseja alterar: ");
    scanf ("%s", arquivo);


    char arquivo_antes[40]; //// pegando endereco do arquivo
    strcpy (arquivo_antes, dir);
    strcat (arquivo_antes, arquivo);


    char novo_nome[20];
    printf ("Informe o novo nome do arquivo (nao precisa informar o tipo!!!): ");
    scanf ("%s", novo_nome);

    char arquivo_depois[40];        //// pegando o endereco do arquivo depois (apos a troca do nome)

    strcpy (arquivo_depois, dir);
    strcat (arquivo_depois, novo_nome);

    if (rename (arquivo_antes, arquivo_depois) == 0) //// usando o comando para renomear
    {
        printf ("Foi renomeado o arquivo!!\n\n");
    }

    else 
    {
        printf("Nao foi possivel trocar o nome\n\n");
    }
    }
    

    void deletar_arquivo ()
    {
    char dir[30] = "D:\\Unesp\\1Ano\\ATP2\\teste\\";             /// diretorio
    char arquivo[30];

    printf ("Informe o nome do arquivo que deseja apagar (incluindo o seu tipo -> .txt ou .bin): ");
    scanf ("%s", arquivo);

    char apagar_arquivo[40];

    strcpy (apagar_arquivo, dir);   //// pegando o endereco do arquivo
    strcat (apagar_arquivo, arquivo);

    if (remove (apagar_arquivo) == 0)   //// usando o comando remove para apagar
    {
        printf ("Arquivo apagado!!!!\n\n");
    }

    else 
    {
        printf ("Nao foi possivel apagar o arquivo!!\n\n");
    }

    }

int main ()
{
    int escolha;
    printf ("Informe o que deseja -> criar(0), escrever(1), ler(2), renomear(3) ou apagar(4): ");
    scanf ("%d", &escolha);

    switch (escolha)        //// switch para a escolha
    {
        case 0:
        gerar_arquivos_no_dir ();
        break;

        case 1:
        escrever_no_arquivo ();
        break;

        default:
        printf ("Fora de escala");
        break;

        case 2:
        ler_arquivo ();
        break;

        case 3:
        renomear_arquivo();
        break;

         case 4:
        deletar_arquivo();
        break;
    }    


    return 0;
}