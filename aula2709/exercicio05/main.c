#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que leia 5 números e informe a soma e a média dos números.
*/
int main()
{
    int soma=0;
    double media;
    int num;

    for(int i=1; i<=5; i++){
        printf("Digite um numero:  \n");
        scanf("%d", &num);
        soma += num;
    }
    media = soma / 5.0;
    printf("Media dos valores: %.2lf \n", media);
    printf("Soma dos valores: %d \n", soma);
    return 0;
}
