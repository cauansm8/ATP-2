/* Escreva um programa em C para calcular o tamanho total ocupado por todos os arquivos em um diretorio. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void gerar_arquivos_no_dir()  
{
    char dir[30] = "D:\\Unesp\\1Ano\\ATP2\\teste\\";             /// diretorio
    char arquivos[3][30] = {{"arq1.txt"},{"arq2.txt"},{"arq3.txt"}};        /// arquivo

    char cria_arquivos_no_dir[40];                                  //// essa string serve para pegar o enderecos dos ARQUIVOS!!

    for(int i=0; i < 3; i++)                        //// loop para colocar informacoes em cada arquivo -> se nao, nao eh possivel calcular o espaco ocupado
    {
        strcpy(cria_arquivos_no_dir,dir);                 //// pega o diretorio

        strcat(cria_arquivos_no_dir,arquivos[i]);                   //// junta com o nome de cada arquivo

        FILE *arq = fopen(cria_arquivos_no_dir,"w");

        for(int j = 0; j < 10; j++)  /// passa valores aleatorios para cada arquivo
        {
            int numero = rand () % 100;
            fprintf (arq, "%d" ,numero);
        }
        fclose(arq);
    }
}
int calc_tamanho_no_dir()
{
    char dir[30] = "D:\\Unesp\\1Ano\\ATP2\\teste\\";     //// mesma coisa que a outra funcao
    char arquivos[3][30] = {{"arq1.txt"},{"arq2.txt"},{"arq3.txt"}};

    char cria_arquivos_no_dir[40];

    int tamanho = 0 , contador;

    for(int i = 0; i < 3; i++)          //// loop para cada arquivo
    {
        char c;
        contador = 0;
        strcpy(cria_arquivos_no_dir,dir);
        strcat(cria_arquivos_no_dir,arquivos[i]);

        FILE *arq = fopen(cria_arquivos_no_dir,"r");

        while(fscanf(arq,"%c",&c)!=EOF)      //// anda ate chegar ao final do arquivo
        {
            contador++;             //// vai contando os bytes
        }
        tamanho += contador;        //// soma na variavel tamanho

        fclose(arq);            //// fecha arquivo
    }
    return tamanho;         //// quando acabar de contar os 3 arquivos -> retorna o tamanho total do diretorio
}

int main()
{
    srand(time(NULL));          ///// para randomizar os numeros

    gerar_arquivos_no_dir();        //// chamando a funcao de gerar arquivos

    printf("Tamanho do dir: %d bytes",calc_tamanho_no_dir()); //// mostrando o espaco do diretorio

    return 0;
}
