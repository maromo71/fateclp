#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, imposto;
    char sexo;
    printf("Digite o salario da pessoa: \n");
    scanf("%lf", &salario);
    //fflush(stdin);
    __fpurge(stdin);
    printf("Digite sexo: m[masculino], f[feminino] \n");
    sexo = getchar();

    switch(sexo){
        case 'm':
        case 'M':
            imposto = salario * 0.15;
            break;
        case 'f':
        case 'F':
            imposto = salario * 0.10;
            break;
        default:
            printf("Opcao invalida \n");
            imposto = 0;
    }
    printf("Imposto a pagar: %.2lf \n", imposto);

    return 0;
}
