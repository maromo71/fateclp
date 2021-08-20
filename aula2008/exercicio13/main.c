#include <stdio.h>
#include <stdlib.h>
/*
Tendo como dado de entrada a altura (h) de uma pessoa,
construa um algoritmo que calcule seu peso ideal,
utilizando as seguintes fórmulas:
Para homens: (72.7*h) - 58
Para mulheres: (62.1*h) - 44.7
*/
int main()
{
    double peso_ideal_homem, peso_ideal_mulher, altura;
    printf("Digite a altura da pessoa: \n");
    scanf("%lf", &altura);
    peso_ideal_homem = (72.7 * altura) - 58;
    peso_ideal_mulher = (62.1 * altura) - 44.7;
    printf("O peso ideal da pessoa \n");
    printf("Se homem: %.2lf \n", peso_ideal_homem);
    printf("Se mulher: %.2lf \n", peso_ideal_mulher);
    return 0;
}
