#include <stdio.h>
#include <stdlib.h>
//imprimir na tela, os impares que estao na faixa de 1 a 100

int main()
{
    int cont;
    for(cont = 1; cont < 100; cont++){
        if(cont % 2 == 1) {
            printf("%d ", cont);
        }
    }
    return 0;
}
