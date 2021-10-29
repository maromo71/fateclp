#include <stdio.h>
#include <stdlib.h>
//Programa que guarda dois nomes na memoria

int main()
{
    char nome1[51];
    char nome2[51];
    //fflush(stdin); windows
    __fpurge(stdin);
    printf("Digite o primeiro nome: \n");
    scanf("%[^\n]", nome1);
    //fflush(stdin); windows
    __fpurge(stdin);
    printf("Digite o segundo nome: \n");
    scanf("%[^\n]", nome2);

    printf("Primeiro nome: %s \n", nome1);
    printf("Segundo nome: %s \n", nome2);

    return 0;
}
