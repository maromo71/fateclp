#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pi = 3.1415;
    double raio;

    //Entrada
    printf("Digite o raio da circunferencia \n");
    scanf("%lf", &raio);

    //Processamento
    double area = pi * (raio * raio);

    //Saída
    printf("Valor da area: %lf \n", area);
    return 0;
}
