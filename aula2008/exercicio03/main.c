#include <stdio.h>
#include <stdlib.h>
//Faça um Programa que peça dois números e imprima a soma.
int main()
{
    int n1, n2;
    printf("Digite um valor !\n");
    scanf("%d", &n1);
    printf("Digite outro valor ! \n");
    scanf("%d", &n2);
    int soma = n1 + n2;
    printf("O resultado da soma = %d \n", soma);
    return 0;
}
