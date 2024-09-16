#include <stdio.h>
float media (float *somatoria){

    *somatoria = *somatoria/5.0; //// usando ponteiro, dividimos o valor total da soma entre os 5 valores

    return *somatoria;
}


int main()
{
    //// Escreva um programa em C que declare um array de 5 inteiros
    //// e passe esse array para uma funcao que calcule a media dos elementos do array

    float nms[5], soma=0.0;
    int i = 0;

    printf("Informe 5 numeros: ");      //// arquivando
    do
    {
        scanf ("%f",&nms[i]);
        i++;
    }while (i<5);

    i=0;

    do
    {
        soma += nms[i];         //// somando
        i++;
    }while (i<5);
    printf ("A soma: %f\n", soma);


    printf ("\nA media dos valores: %.2f\n\n", media(&soma)); //// chamando a funcao
    return 0;
}
