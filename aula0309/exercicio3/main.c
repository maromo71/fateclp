#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, novoSalario;
    printf("Digite o salario da pessoa: \n");
    scanf("%lf", &salario);
    novoSalario = salario > 1000 ? salario * 1.05 : salario * 1.07;

    printf("Novo Salario: %.2lf \n", novoSalario);
    return 0;
}
