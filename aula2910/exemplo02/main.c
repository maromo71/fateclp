#include <stdio.h>
#include <stdlib.h>
/*
 A função recebe um valor n inteiro e imprima até a n-ésima linha.
*/
void imprimir_enesima_linha(int n);

int main()
{
    imprimir_enesima_linha(27);
    return 0;
}

void imprimir_enesima_linha(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%2d ", i);
        }
        printf("\n");
    }
}
