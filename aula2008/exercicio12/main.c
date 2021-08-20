#include <stdio.h>
#include <stdlib.h>
/*
Tendo como dados de entrada a altura de uma pessoa,
construa um algoritmo que calcule seu peso ideal,
usando a seguinte fórmula: (72.7*altura) - 58
*/
int main()
{
    double peso_ideal, altura;
    printf("Digite a altura da pessoa: \n");
    scanf("%lf", &altura);
    peso_ideal = (72.7 * altura) - 58;
    printf("O peso ideal da pessoa = %.2lf \n", peso_ideal);
    return 0;
}
