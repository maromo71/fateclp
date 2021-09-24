#include <stdio.h>
#include <stdlib.h>

/*
    Supondo que a população de um país A seja da ordem de 80000 habitantes
    com uma taxa anual de crescimento de 3% e que a população de B seja 200000
    habitantes com uma taxa de crescimento de 1.5%.
    Faça um programa que calcule e escreva o número de anos necessários
    para que a população do país A ultrapasse ou iguale a população do país B,
    mantidas as taxas de crescimento.
*/
int main()
{
    double popA, popB;
    int anos = 0;
    popA = 80000;
    popB = 200000;
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
