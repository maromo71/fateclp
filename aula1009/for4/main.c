#include <stdio.h>
#include <stdlib.h>
//imprimir na tela, os impares que estao na faixa de 1 a 100

int main()
{
    int cont;
    for(cont = 1; cont < 100; cont += 2){
        printf("%d ", cont);
    }
    return 0;
}
