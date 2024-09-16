#include <stdio.h>
int main (){
//// Escreva um programa em C que leia 6 valores de ponto flutu-
//// ante e calcule a m ́edia dos valores.

float nm[6], soma=0, media;
int i=0;

    printf ("Informe 6 valores flutuantes:\n");
do{
    scanf ("%f",&nm[i]);
    soma += nm[i];
    i++;

}while (i<6);

media = soma / 6.0;
printf ("\nA soma: %f\n",soma);
printf ("\nA media: %f\n",media);

return 0;
}
