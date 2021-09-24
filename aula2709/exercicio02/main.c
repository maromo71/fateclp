#include <stdio.h>
#include <stdlib.h>
/*
    Mesmo anterior, com as modificações abaixo:
    Altere o programa anterior permitindo ao usuário
    informar as populações e as taxas de crescimento iniciais.
    Valide a entrada e permita repetir a operação.
*/
int main()
{
    double popA, popB;
    int anos = 0;
    int flag = 1;

    do{
        //validação de entrada
        if(flag > 1){
            printf("Repita a entrada, valor do Pais A deve ser menor do que de B \n");
        }
        printf("Digite a população do pais A: \n");
        scanf("%lf", &popA);
        printf("Digite a população do pais B: \n");
        scanf("%lf", &popB);
        flag++;
    }while(popA > popB);


    while(popA < popB){
        popA *= 1.03;
        popB *= 1.015;
        anos++;
        printf("População de A no ano %d ==> %.0lf \n", anos, popA);
        printf("População de B no ano %d ==> %.0lf \n\n", anos, popB);
    }
    printf("Total de anos para a população de país A, ultrapassa a de B: %d \n", anos);
    return 0;
}
