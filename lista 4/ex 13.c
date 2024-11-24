/* Escreva um programa em C para ordenar registros em um arquivo binario com base em um campo especifico. */

#include <stdio.h>
#define tam 3

    typedef struct {            //// struct registro
        int idade;
    } registro;

int main ()
{
    FILE *file;             //// ponteiro para o arq binario
    file = fopen ("Ordenar_registros_ex13.bin", "w+b");

    if (file == NULL)           //// verificando
    {
        printf ("Nao foi encontrado o arquivo binario");
        return -1;
    }

    registro regs[tam];                 

        regs[0].idade = 30;             //// passando os valores de idade para cada struct
        regs[1].idade = 20;
        regs[2].idade = 10;
        
        printf ("As idades no arquivo binario antes da ordenacao: \n%d\n%d\n%d\n",regs[0].idade, regs[1].idade, regs[2].idade);

        fwrite (&regs[0], sizeof(registro), 1, file);           //// passando os valores de idade para o arq bin
        fwrite (&regs[1], sizeof(registro), 1, file);   
        fwrite (&regs[2], sizeof(registro), 1, file);      
    
        for (int i = 0; i < tam; i++)                           //// ordenacao tipo bubble /// LOOP PARA A POSICAO I
        {
            registro coletar1, coletar2, aux;                    //// variaveis auxiliares -> coletar serve para armazenar o conteudo do 
            
            fseek (file, i * sizeof(registro), SEEK_SET);       ///// procurando e arquivando a posicao i    
            fread (&coletar1, sizeof(registro), 1, file);


            for (int j = i + 1; j < tam; j++)                   //// LOOP PARA A POSICAO J
            {
            fseek (file, j * sizeof(registro), SEEK_SET);       //// procurando e arquivando a struct j
            fread (&coletar2, sizeof(registro), 1, file);
            
            if (coletar1.idade > coletar2.idade)                //// COMPARANDO OS REGISTROS COM BASE NO CAMPO IDADE
            {
                aux = coletar2;                                 /// realizando a troca
                coletar2 = coletar1;
                coletar1 = aux;

                fseek (file, i * sizeof(registro), SEEK_SET);   /// inserindo a struct j na posicao i
                fwrite (&coletar1, sizeof(registro), 1, file);

                fseek (file, j * sizeof(registro), SEEK_SET);   /// inserindo a struct i na posicao j
                fwrite (&coletar2, sizeof(registro), 1, file);


            }

            }

        }

    registro reg[tam];                                  //// criando outra variavel para ARQUIVAR as struct que estao dentro do arquivo binario

        for (int i = 0; i < tam; i++)               
        {
            fseek (file, i * sizeof (registro), SEEK_SET);      //// procurando e arquivando a struct da posicao i
            fread (&reg[i], sizeof(registro), 1, file);

        }

        printf ("As idades no arquivo binario, apos a ordenacao: \n");

        for (int i = 0; i < tam; i++)                       //// imprimindo apos a ordenacao
        {
            printf ("%d\n",reg[i].idade);
        }

        fclose (file);      /// fechando arquivo

    return 0;
}