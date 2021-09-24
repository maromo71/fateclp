#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba dois números inteiros e gere os
números inteiros que estão no intervalo compreendido por eles.
*/
int main()
{
    int v1, v2;
    printf("Digite o valor 1: \n");
    scanf("%d", &v1);
    printf("Digite o valor 2: \n");
    scanf("%d", &v2);
    if(v1<=v2){
        for(int i=v1; i<=v2; i++){
            printf("%d ", i);
        }
    }else{
        for(int i=v1; i>=v2; i--){
            printf("%d ", i);
        }
    }
    return 0;
}
