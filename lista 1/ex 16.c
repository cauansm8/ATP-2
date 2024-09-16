#include <stdio.h>
#include <string.h>
int main (){
//// Escreva um programa em C que declare um array de 10
//// caracteres e use um ponteiro para contar quantos desses caracteres s˜ao letras
//// maiuscula

char string[10], *pont[10];
int i=0, contador=0;
printf ("Informe uma string com no maximo 10 caracteres!: ");
gets (string);

if (strlen(string)>10){
    printf ("\nString com mais de 10 caracteres!\n");
    return 1;
}

do
{
    pont[i]= &string[i]; //// passando os enderecos de cada carac de string para o ponteiro!!!!
    i++;

}while (i<10);

i=0;

do
{
    if(*pont[i]>=65 && *pont[i]<=90){ //// do numero 65 ate o 90 na tabela ASCII sao compostos pelos maiusculos
        contador++;                   //// o uso do asterisco indica que é para usar o endereco salvo em pont[i]
                                      //// para buscar a letra la em string[i]
    }
    i++;
}while (i<10);

printf ("\nContagem de letras maiusculas: %d\n", contador);



return 0;
}
