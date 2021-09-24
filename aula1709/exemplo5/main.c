#include <stdio.h>
#include <stdlib.h>
//Dado um valor de salario, aplique um aumento de 10%
int main()
{
    double salario;
    printf("Entre com o valor do salario: \n");
    scanf("%lf", &salario);

    salario *= 1.10; //equivale-se a -->   salario = salario * 1.10;

    printf("Novo Salario: %.2lf \n", salario);
    return 0;
}
