#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    double salarioBruto;
    double imposto = 0;

    printf("Digite o salario bruto da pessoa: \n");
    scanf("%lf", &salarioBruto);
    //fflush(stdin); //windows
    __fpurge(stdin); //linux
    printf("Digite [s] para solteiro ou [c] para casado: \n");
    sexo = getchar();

    if(sexo=='c' || sexo=='C'){
        imposto = salarioBruto * 0.09;
    }else{
        if(sexo=='s' || sexo=='S'){
            imposto = salarioBruto * 0.10;
        }else{
            printf("Não tenho como calcular para esse estado civil\n");
        }
    }
    printf("Imposto a pagar: %.2lf \n", imposto);

    return 0;
}
