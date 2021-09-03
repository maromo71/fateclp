#include <stdio.h>
#include <stdlib.h>
//Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
int main()
{
    int valor;
    printf("Digite um valor: \n");
    scanf("%d", &valor);

    if(valor!=0){
        if(valor > 0){
            printf("Valor positivo \n");
        }else{
            printf("Valor negativo \n");
        }
    }else{
        printf("O Valor é zero \n");
    }

    return 0;
}
