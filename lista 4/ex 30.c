/* Escreva um programa em C para ler um arquivo binario contendo registros de alunos e exibir os dados formatados. */

#include <stdio.h>
#define qnt 3


typedef struct  /// struct para alunos
{
    char nome[20];
    int ra;
    float nota;
} alunos;

int main ()
{
    FILE *file;     /// abrindo arquivo para escrita e leitura
    file = fopen ("ex30_alunos.bin", "w+b");

    if (file == NULL)   //// verificando se encontra o arquivo
    {
        printf ("Nao foi encontrado o arquivo bin\n\n");
        return -1;
    }

    alunos Alunos[qnt];

    for (int i = 0; i < qnt; i++) //// loop para armazenar infos
    {
        printf ("Informe nome, ra e nota do aluno %d:\n", i+1);
        scanf ("%s", Alunos[i].nome);
        scanf ("%d", &Alunos[i].ra);
        scanf ("%f", &Alunos[i].nota);

        getchar ();
    }

    for (int i = 0; i < qnt; i++) /// loop para passar as informacoes para o arquivo
    {
        fwrite (&Alunos[i], sizeof(alunos), 1, file);
    }

    rewind (file);

    int escolha;
    printf ("Qual aluno deseja acessar(0 - %d): ", qnt-1); //// indice do aluno para exibir a informacao
    scanf ("%d", &escolha);


    alunos escolhido;
    fseek (file, escolha * sizeof(alunos), SEEK_SET);   //// procurando aluno
    fread (&escolhido, sizeof(alunos), 1, file);        //// arquivando informacoes do aluno

    printf ("ALUNO ESCOLHIDO:\nNome: %s\nRA: %d\nNota: %f\n\n", escolhido.nome, escolhido.ra, escolhido.nota);  //// imprimindo 
    
    fclose (file); /// fechando arquivo
    
    return 0;

}