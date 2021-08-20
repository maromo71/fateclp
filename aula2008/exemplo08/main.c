#include <stdio.h>
#include <stdlib.h>
//Faça um Programa que pergunte quanto você ganha por hora
//e o número de horas trabalhadas no mês.
//Calcule e mostre o total do seu salário no referido mês.
int main()
{
    int horas;
    double valor_hora, total_salario;
    printf("Digite o numero de horas trabalhadas no mes \n");
    scanf("%d", &horas);
    printf("Digite o valor do salario por hora \n");
    scanf("%lf", &valor_hora);
    total_salario = horas * valor_hora;
    printf("Total do salario no mes: %.2lf \n", total_salario);
    return 0;
}
