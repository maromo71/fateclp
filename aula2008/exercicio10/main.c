#include <stdio.h>
#include <stdlib.h>
//Faça um Programa que peça a temperatura em graus Celsius,
//transforme e mostre em graus Fahrenheit.
//fahr = (celsius × 9/5) + 32
int main()
{
    float celsius, fahr;
    printf("Digite a temperatura em graus Celsius \n");
    scanf("%f", &celsius);
    fahr = (celsius * 9.0 / 5) + 32;
    printf("A temperatura em Fahrenheit = %.2f \n", fahr);
    return 0;
}
