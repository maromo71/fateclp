#include <stdio.h>
#include <stdlib.h>
/*
Faça um Programa que peça 2 números inteiros e um número real.
Calcule e mostre:
o produto do dobro do primeiro com metade do segundo .
a soma do triplo do primeiro com o terceiro.
o terceiro elevado ao cubo.
*/
int main()
{
    int n1, n2;
    double n3;
    printf("Digite um numero inteiro \n");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro \n");
    scanf("%d", &n2);
    printf("Digite um valor real (com casa decimal) \n");
    scanf("%lf", &n3);
    double resultado = (2 * n1) + (n2 / 2.0);
    printf("Primeiro resultado: %.2lf \n", resultado);
    resultado = (3 * n1) + n3;
    printf("Segundo resultado: %.2lf \n", resultado);
    resultado = (n3 * n3 * n3);
    printf("Terceiro resultado: %.2lf \n", resultado);
    return 0;
}
