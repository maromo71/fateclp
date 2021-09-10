#include <stdio.h>
#include <stdlib.h>
//For que repete e nunca acaba.... (laço infinito) -- feito de proposito
//Para você abortar, você tecla CTRL + C
int main()
{
    int cont;
    for(cont = 1;;cont++){
        printf("%d \n", cont);
        if((cont * 8989 / 3) > 500000) break; //força a saida do laço
    }
    printf("Acabou....\n");
    return 0;
}
