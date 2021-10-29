#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{
    /* Programa que pede ao usuário dois valores e qual a
       operação básica ele deseja efetuar */

    int a, b, opcao;
    printf("Digite um valor para a: \n");
    scanf("%d", &a);
    printf("Digite um valor para b: \n");
    scanf("%d", &b);
    printf("Entre com a operação: \n");
    printf("1. Somar \n");
    printf("2. Subtrair \n");
    printf("3. Multiplicar \n");
    printf("4. Dividir \n");
    printf("Sua escolha: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("Resultado da soma: %d \n", somar(a, b) );
            break;
        case 2:
            printf("Resultado da subtração: %d \n", subtrair(a, b) );
            break;
        case 3:
            printf("Resultado da multiplicação: %d \n", multiplicar(a, b) );
            break;
        case 4:
            printf("Resultado da divisão: %d \n", dividir(a, b));
            break;
        default:
            printf("Opção inválida \n");
    }
    return 0;
}
