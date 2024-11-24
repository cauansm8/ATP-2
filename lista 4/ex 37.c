/* Escreva um programa em C para armazenar informacoes de uma lista de contatos em um arquivo de texto e implementar funcoes para adicionar,
excluir e buscar contatos. */

#include <stdio.h>
#include <string.h>
#define max 1000

typedef struct 
{
    char nome[20];
    int numero;
    char sexo[20];

} contato;

void adicionar (FILE *file, contato Contatos)
    {
           

    printf ("Informe o numero do contato: ");   //// arquiva o numero
    scanf ("%d", &Contatos.numero);

    getchar ();

    printf ("Informe o primeiro nome do contato: ");    //// arquiva o nome
    scanf ("%s", Contatos.nome);

    printf ("Informe o sexo do contato: ");        //// arquiva o sexo 
    scanf ("%s", Contatos.sexo);

    fprintf (file, "%d\n", Contatos.numero);        //// passa as informacoes para o arquivo
    fprintf (file, "%s\n", Contatos.nome);
    fprintf (file, "%s\n", Contatos.sexo);

    }

    void remover(FILE *file, int numero_buscado) 
    {
    contato Contatos[max];
    int i = 0;
    int encontrado = 0;    

    while (fscanf(file, "%d\n", &Contatos[i].numero)  != EOF && fscanf(file, "%s\n", &Contatos[i].nome)  != EOF && fscanf(file, "%s\n", Contatos[i].sexo)  != EOF ) //// arquivando o conteudo enquanto verifica se ja chegou no fim do arquivo
    {
        
        if (Contatos[i].numero == numero_buscado) //// indice para mostrar (ou nao) a mensagem de "foi encontrado"
        {
            encontrado = 1; 
        } 

        else 
        {
            i++;
        }
    }

    fclose(file);

    file = fopen("ex37_contatos.txt", "w"); //// limpa o arquivo
    
    if (file == NULL) //// verifica se encontra os arquivos
    {
        printf("Nao foi encontrado o arquivo\n");
        return -1;
    }

    for (int j = 0; j < i; j++)     //// passa as informacoes
    {
        fprintf(file, "%d\n%s\n%s\n", Contatos[j].numero, Contatos[j].nome, Contatos[j].sexo);
    }

    fclose(file);

    if (encontrado == 1) 
    {
        printf("Contato excluido\n");
    } 
    else 
    {
        printf("Contato nao encontrado.\n");
    }
}

int main ()
{
    
    int escolha;
    contato add;

    printf ("Deseja inserir novo contato (0), remover contato (1) ou buscar contato(2): "); /// escolha
    scanf ("%d", &escolha);


    if (escolha < 0 || escolha > 2)     //// fora de escala
    {
            printf ("Fora de escala!!");
            return -1;
        }

    if (escolha == 0)      ///// ESCOLHA -> ADICIONAR CONTATO 
    {   
        FILE *file; 
        file = fopen ("ex37_contatos.txt", "a");    //// esse 'a' serve para abrir modo escrita no final do arquivo

        if (file == NULL)   /// verificando se existe o arquivo 
        {
            printf ("Nao foi encontrado o arquivo!!\n\n");
            return -1;
        }

        adicionar (file, add);
        printf ("\n\nAdicionado contato!!\n\n");
    }

   if (escolha == 1)    //// ESCOLHA -> APAGAR CONTATO
   {    
        FILE *file;
        file = fopen("ex37_contatos.txt", "r"); // abrindo como leitura
        
        if (file == NULL) /// verificando se existe o arquivo 
        {
            printf("Erro ao abrir o arquivo para leitura.\n");
            return -1;
        }

        int numero_buscado;
        printf("Informe o numero do contato para ser removido removido: "); //// arquivando numero para apagar o contato
        scanf("%d", &numero_buscado);

        remover(file, numero_buscado);
    }

    if (escolha == 2)   //// ESCOLHA -> BUSCAR CONTATO
    {
        FILE *file;                 //// abrindo como leitura
        file = fopen ("ex37_contatos.txt", "r");
            
        int numero_buscado;
            char nome[20];
            char sexo[20];

            printf ("Informe o numero da pessoa que deseja buscar: ");  //// arquivando o numero buscado
            scanf ("%d", &numero_buscado);

            int i = 0;

            while (!feof(file))
            {
            
            fseek (file, i * sizeof(int), SEEK_SET);    //// anda em bytes por int

            int numero;

            fscanf (file, "%d", &numero);       //// arquiva os numeros

            if (numero ==  numero_buscado)          //// se forem iguais -> printa o nome e o sexo do contato
            {
                fscanf (file, "%s", nome); 
                fscanf (file, "%s", sexo);    
                printf ("O nome da pessoa: %s\n", nome);
                printf ("O sexo da pessoa: %s\n", sexo);
                fclose (file);
                return 0;
                
            }
            i++;
            }

            printf ("Nao foi encontrado o numero\n");       /// se nao achar, termina o programa
            fclose (file);
            return 0;
    }


    return 0;
}