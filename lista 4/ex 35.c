/* Escreva um programa em C para calcular a frequencia de cada caractere em um arquivo de texto. */


#include <stdio.h>  

int main ()
{
    FILE *file;     //// abrindo arquivo como escrita e leitura
    file = fopen ("ex35_freq_caracter.txt", "w+");

    if (file == NULL)   ///// verificando se encontra o arquivo
    {
        printf ("Nao foi encontrado o arquivo!!\n\n");
        return -1;
    }

    char conteudo[100];
    printf ("Informe um conteudo tudo em minusculo: "); //// pegando o conteudo (TEM Q SER EM MINUSCULOS PARA QUE A CONTAGEM ESTEJA CERTA)
    gets (conteudo);

    fprintf (file, "%s\n", conteudo);       //// passando para o arquivo txt

    rewind (file);


    int caracteres[36]; /// letras + numeros
    

    for (int i = 0; i < 36; i++)        /// atribuindo zero em tudo
    {
        caracteres[i] = 0;
    }

    char c;
   
    while (fscanf(file, "%c", &c) != EOF)   //// loop para armazenar a frequencia dos caracteres
    {
        

        switch (c)      //// switch case para armazenar a frequencia (sim esta bem ruim o codigo)
        {
            case 'a':
            caracteres[0]++;
            break;
            
            case 'b':
            caracteres[1]++;
            break;
            
            case 'c':
            caracteres[2]++;
            break;
            
            case 'd':
            caracteres[3]++;
            break;
            
            case 'e':
            caracteres[4]++;
            break;
            
            case 'f':
            caracteres[5]++;
            break;
            
            case 'g':
            caracteres[6]++;
            break;
            
            case 'h':
            caracteres[7]++;
            break;
            
            case 'i':
            caracteres[8]++;
            break;
            
            case 'j':
            caracteres[9]++;
            break;
            
            case 'k':
            caracteres[10]++;
            break;
            
            case 'l':
            caracteres[11]++;
            break;
            
            case 'm':
            caracteres[12]++;
            break;
            
            case 'n':
            caracteres[13]++;
            break;
            
            case 'o':
            caracteres[14]++;
            break;
            
            case 'p':
            caracteres[15]++;
            break;
            
            case 'q':
            caracteres[16]++;
            break;
            
            case 'r':
            caracteres[17]++;
            break;
            
            case 's':
            caracteres[18]++;
            break;
            
            case 't':
            caracteres[19]++;
            break;
            
            case 'u':
            caracteres[20]++;
            break;
            
            case 'v':
            caracteres[21]++;
            break;
            
            case 'w':
            caracteres[22]++;
            break;
            
            case 'x':
            caracteres[23]++;
            break;
            
            case 'y':
            caracteres[24]++;
            break;
            
            case 'z':
            caracteres[25]++;
            break;
            
            case '0':
            caracteres[26]++;
            break;
            
            case '1':
            caracteres[27]++;
            break;
            
            case '2':
            caracteres[28]++;
            break;
            
            case '3':
            caracteres[29]++;
            break;
            
            case '4':
            caracteres[30]++;
            break;
            
            case '5':
            caracteres[31]++;
            break;
            
            case '6':
            caracteres[32]++;
            break;
            
            case '7':
            caracteres[33]++;
            break;
            
            case '8':
            caracteres[34]++;
            break;
            
            case '9':
            caracteres[35]++;
            break;
            
            



        }


    }

    for (int i = 0; i < 36; i++)        //// switch case para printar aqueles com frequencia >= 1
    {
        if (caracteres[i] > 0)
        {
        switch (i)
        {
            case 0:
            printf ("A : %d\n", caracteres[i]);
            break;
            
            case 1:
            printf ("B : %d\n", caracteres[i]);
            break;
            
            case 2:
            printf ("C : %d\n", caracteres[i]);
            break;
            
            case 3:
            printf ("D : %d\n", caracteres[i]);
            break;
            
            case 4:
            printf ("E : %d\n", caracteres[i]);
            break;
            
            case 5:
            printf ("F : %d\n", caracteres[i]);
            break;
            
            case 6:
            printf ("G : %d\n", caracteres[i]);
            break;
            
            case 7:
            printf ("H : %d\n", caracteres[i]);
            break;
            
            case 8:
            printf ("I : %d\n", caracteres[i]);
            break;
            
            case 9:
            printf ("J : %d\n", caracteres[i]);
            break;
            
            case 10:
            printf ("K : %d\n", caracteres[i]);
            break;
            
            case 11:
            printf ("L : %d\n", caracteres[i]);
            break;
            
            case 12:
            printf ("M : %d\n", caracteres[i]);
            break;
            
            case 13:
            printf ("N : %d\n", caracteres[i]);
            break;
            
            case 14:
            printf ("O : %d\n", caracteres[i]);
            break;
            
            case 15:
            printf ("P : %d\n", caracteres[i]);
            break;
            
            case 16:
            printf ("Q : %d\n", caracteres[i]);
            break;
            
            case 17:
            printf ("R : %d\n", caracteres[i]);
            break;
            
            case 18:
            printf ("S : %d\n", caracteres[i]);
            break;
            
            case 19:
            printf ("T : %d\n", caracteres[i]);
            break;
            
            case 20:
            printf ("U : %d\n", caracteres[i]);
            break;
            
            case 21:
            printf ("V : %d\n", caracteres[i]);
            break;
            
            case 22:
            printf ("W : %d\n", caracteres[i]);
            break;
            
            case 23:
            printf ("X : %d\n", caracteres[i]);
            break;
            
            case 24:
            printf ("Y : %d\n", caracteres[i]);
            break;
            
            case 25:
            printf ("Z : %d\n", caracteres[i]);
            break;
            
            case 26:
            printf ("0 : %d\n", caracteres[i]);
            break;
            
            case 27:
            printf ("1 : %d\n", caracteres[i]);
            break;
            
            case 28:
            printf ("2 : %d\n", caracteres[i]);
            break;
            
            case 29:
            printf ("3 : %d\n", caracteres[i]);
            break;
            
            case 30:
            printf ("4 : %d\n", caracteres[i]);
            break;
            
            case 31:
            printf ("5 : %d\n", caracteres[i]);
            break;
            
            case 32:
            printf ("6 : %d\n", caracteres[i]);
            break;
            
            case 33:
            printf ("7 : %d\n", caracteres[i]);
            break;
            
            case 34:
            printf ("8 : %d\n", caracteres[i]);
            break;
            
            case 35:
            printf ("9 : %d\n", caracteres[i]);
            break;
            
            }
        }
    }

    fclose (file);      /// fechando arquivo

    return 0;
}