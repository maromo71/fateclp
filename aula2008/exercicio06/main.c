#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
//Faça um Programa que peça o raio de um círculo,
//calcule e mostre sua área.  area = valor do PI * raio ao quadrado
int main()
{
    double raio, area;
    printf("Digite o valor do raio da circunferencia \n");
    scanf("%lf", &raio);
    area = PI * (raio * raio);
    printf("A area da circunferencia = %.3lf \n", area);
    return 0;
}
