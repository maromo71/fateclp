#include <stdio.h>
#include <stdlib.h>
//Aumento de salario de uma pessoa. Condições
//Se a pessoa for do sexo feminino, aplicaremos 10% de aumento
//Se a pessoa for de sexo masculino, aplicaremos 9% de aumento
int main()
{
    char sexo;
    double salario;
    printf("Digite o salario da pessoa: \n");
    scanf("%lf", &salario);
    //fflush(stdin); //windows
    __fpurge(stdin); //Linux
    printf("Digite [f] feminino ou [m] masculino \n");
    sexo = getchar();

    salario = (sexo=='f' || sexo=='F') ? salario * 1.10 : salario * 1.09;

    printf("Seu novo salario: %.2lf \n", salario);
    return 0;
}
