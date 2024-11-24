/* Escreva um programa em C para adicionar novos registros a um arquivo binario. */

#include <stdio.h>

typedef struct {
    char nome[100];
    int idade;
    float nota;   
}   registro;


int main ()
{

    FILE *file;         //// arquivo
    file = fopen ("adicionar_registro_ex12.bin", "w+b");        //// abrindo ponteiro em escrita

    if (file == NULL)   //// verificando se o arquivo existe
    {
        printf ("Nao foi encontrado o arquivo binario");
        return -1;
    }

    registro reg;
    
    printf ("Informe nome, idade e nota do aluno: \n");     //// arquivando informacoes 
    scanf ("%s", reg.nome);
    scanf ("%d", &reg.idade);
    scanf ("%f", &reg.nota);

    fwrite (&reg, sizeof(registro), 1, file);           //// passando o registro para o arquivo binario

    printf ("\nINFORMACOES REGISTRADAS NO ARQUIVO BINARIO!!!! \n");

    registro confirmar;

    rewind (file);                  /// retornando ao inicio
    fread (&confirmar, sizeof(registro), 1, file);  //// e arquivando em uma struct

    printf ("Nome, idade e nota do aluno inseridos no arquivo binario (SO PARA CONFIRMAR): \n%s\n%d\n%f",confirmar.nome, confirmar.idade, confirmar.nota);
                //// imprimindo as informacoes

    fclose (file);

    return 0;
}