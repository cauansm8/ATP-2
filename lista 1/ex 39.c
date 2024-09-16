#include <stdio.h>
void positivos (int numeros[], int *contador){

    int i=0;
    do
    {
        if (numeros[i]>=0){
            (*contador)++; //// IMPORTANTE -> PARA ++ ou -- etc com ponteiro -> DEVE SE USAR (*pont)++

        }
        i++;

    }while (i<6);

}



int main ()
{
//// Escreva um programa em C que declare um array de 6
//// inteiros e passe esse array para uma funcao que conte quantos elementos sao
//// positivos

int array[6], i=0, n_posit=0;

printf ("Informe 6 numeros: \n");
do
{
    scanf ("%d",&array[i]);
    i++;


}while (i<6);

positivos (array, &n_posit);
printf ("A quantidade de numeros positivos: %d\n",n_posit);




return 0;
}
