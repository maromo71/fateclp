#include <stdio.h>
#include <stdlib.h>
//Faça um Programa que converta metros para centímetros.
int main()
{
    double metros, cm;
    printf("Entre com o valor em metros\n");
    scanf("%lf", &metros);
    cm = metros * 100;
    printf("%.2lf metros corresponde a %.0lf centimetros \n", metros, cm);
    return 0;
}
