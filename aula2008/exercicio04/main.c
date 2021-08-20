#include <stdio.h>
#include <stdlib.h>
//Faça um Programa que peça as 4 notas bimestrais e mostre a média.
int main()
{
    double n1, n2, n3, n4, media;
    printf("Entre com as 04 notas do aluno separado por espaco \n");
    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("A media do aluno = %.1lf \n", media);
    return 0;
}
