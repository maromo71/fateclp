#include <stdio.h>
#include <stdlib.h>
/*
A série de Fibonacci é formada pela sequência 1,1,2,3,5,8,13,21,34,55,...
Faça um programa capaz de gerar a série até o enésimo termo.
*/
int main()
{
    int teto;
    printf("Quantidade da sequencia de Fibonacci. Maior que 2. \n");
    scanf("%d", &teto);
    int pri = 1;
    printf("%d ", pri);
    int seg = 1;
    printf("%d ", seg);
    //repeti do terceiro até o enésimo elemento (teto)
    for(int i =3; i<=teto; i++){
        int prox = pri + seg;
        printf("%d ", prox);
        pri = seg;
        seg = prox;
    }

    return 0;
}
