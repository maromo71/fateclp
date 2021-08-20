#include <stdio.h>
#include <stdlib.h>
//Faça um Programa que calcule a área de um quadrado,
//em seguida mostre o dobro desta área para o usuário.
int main()
{
    double lado, area;
    printf("Digite o valor do lado: \n");
    scanf("%lf", &lado);
    area = lado * lado;
    printf("O dobro desta area eh: %lf \n", 2 * area);
    return 0;
}
