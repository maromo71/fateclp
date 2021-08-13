#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi = 3.1415;
    float raio;

    //Entrada
    printf("Digite o raio da circunferencia \n");
    scanf("%f", &raio);

    //Processamento
    float area = pi * (raio * raio);

    //Saída
    printf("Valor da area: %f \n", area);
    return 0;
}
