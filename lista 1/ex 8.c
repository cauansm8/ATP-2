#include <stdio.h>

int main (){

//// Escreva um programa em C que leia 8 caracteres e verifique
//// quantos sao vogais.

char string[8];

printf ("\nInforme uma string de no maximo 8 caracteres: ");

gets (string);
int i=0, vogal=0;
do{

    if (string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u'|| string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U'){
        vogal++;
    }
    i++;




}while (string[i]!='\0');
printf ("\nA quantidade de vogais: %d\n", vogal);



return 0;
}
