#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba dois números inteiros e gere os
números inteiros que estão no intervalo compreendido por eles.
Altere o programa anterior para mostrar no final a soma dos números.
*/
int main()
{
    int v1, v2;
    int soma = 0;
    printf("Digite o valor 1: \n");
    scanf("%d", &v1);
    printf("Digite o valor 2: \n");
    scanf("%d", &v2);
    if(v1<=v2){
        for(int i=v1; i<=v2; i++){
            printf("%d ", i);
            soma+= i;
        }
    }else{
        for(int i=v1; i>=v2; i--){
            printf("%d ", i);
            soma+= i;
        }
    }
    printf("\nSoma dos valores da sequencia: %d \n", soma);
    return 0;
}
