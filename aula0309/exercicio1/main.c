#include <stdio.h>
#include <stdlib.h>
//Exercicio slide 28 do material 03
int main()
{
    double salarioLiquido, salarioBruto, imposto;
    printf("Digite o Salário Bruto do Funcinario: \n ");
    scanf("%lf", &salarioBruto);

    if(salarioBruto < 1000){
        imposto = salarioBruto * 0.05;
    }else{
        if(salarioBruto < 5000){
            imposto = salarioBruto * 0.11;
        }else{
            imposto = salarioBruto * 0.35;
        }
    }
    salarioLiquido = salarioBruto - imposto;
    printf("Salario Bruto: %.2lf \n", salarioBruto);
    printf("Imposto a pagar: %.2lf \n", imposto);
    printf("Salario Liquido: %.2lf \n", salarioLiquido );

    return 0;
}
