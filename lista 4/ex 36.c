/* Escreva um programa em C para ler um arquivo binario e exibir estatisticas sobre seus dados (media, desvio padrao, etc.). */

#include <stdio.h>
#include <math.h>
#define qnt 5

    double DesvioPadrao(float numeros[], int contador, double media)    //// funcao para calcular desvio padrao
    {
        float somar = 0;

        for (int i = 0; i < contador; i++)
        {

            somar += pow (numeros[i] - media, 2);

        }

        somar = somar / contador;

        return sqrt (somar);

    }

int main ()
{
    FILE *file;                     //// abrindo arquivo como escrita 
    file = fopen ("ex36_estatisticas_dados.bin", "wb");

    if (file == NULL)       /// verificando se o arquivo existe
    {
        printf ("Nao foi encontrado o arquivo\n\n");
        return -1;
    }

    float numeros[qnt];

    for (int i = 0; i < qnt; i++)   //// arquivando numeros
    {
        printf ("Informe algum numero flutuante %d para ser colocado no arquivo bin: ", i + 1);
        scanf ("%f", &numeros[i]);
    }

    for (int i = 0; i < qnt; i++)   //// passando numeros para o arquivo bin
    {
        fwrite (&numeros[i], sizeof(float), 1, file);
    }

    fclose (file);

    float arquivar_numeros[qnt];
    int contador = 0;

    file = fopen ("ex36_estatisticas_dados.bin", "rb"); /// abrindo para leitura

    if (file == NULL) /// verificando se o arquivo existe
    {
        printf ("Nao foi encontrado o arquivo\n\n");
        return -1;
    }

    for (int i = 0; i < qnt; i++)      //// arquivando os numeros que estao no arquivo
    {
        fread (&arquivar_numeros[contador++], sizeof(float), 1, file);
    }

    printf ("Quantidade de numeros: %d\n", contador);   //// obviamente -> contador = qnt

    float soma = 0;

    for (int i = 0; i < contador; i++)      /// somando os valores
    {
        soma += arquivar_numeros[i];    
    }

    printf ("A soma dos %d numeros: %.2f\n",contador, soma);        //// printando soma

    float media = soma / qnt;

    printf ("A media dos %d numeros: %.2f\n", contador, media);    //// printando media

    printf ("O desvio padrao dos %d numeros: %.3lf\n\n",  contador, DesvioPadrao(arquivar_numeros, contador, media));  //// printando desvio padrao

    fclose (file);

    return 0;
}