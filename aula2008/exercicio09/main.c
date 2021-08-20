#include <stdio.h>
#include <stdlib.h>
/*
Faça um Programa que peça a temperatura em graus
Fahrenheit, transforme e mostre a temperatura em graus Celsius.
C = 5 * ((F-32) / 9).
*/
int main()
{
    float celsius, fahr;
    printf("Digite a temperatura em Fahrenheit \n");
    scanf("%f", &fahr);
    celsius = 5 * ((fahr - 32) / 9);
    printf("A temperatura convertida em celsius = %.2f ", celsius);
    return 0;
}
