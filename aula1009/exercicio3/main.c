#include <stdio.h>
#include <stdlib.h>
//Faça um programa que dados 10 números pelo usuário, verifique quantos são
//pares.

int main()
{
    int n, cont, qtdPares = 0;
    for(cont =1; cont<=10; cont++){
        printf("Digite um valor: \n");
        scanf("%d", &n);
        if (n % 2 == 0) qtdPares++;
    }
    printf("A quantidade de pares entrados foram: %d \n", qtdPares);
    return 0;
}
