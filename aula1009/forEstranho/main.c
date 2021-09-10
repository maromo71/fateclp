#include <stdio.h>
#include <stdlib.h>
//For que repete e nunca acaba.... (laço infinito) -- normalmente é erro de lógica
//Para você abortar, você tecla CTRL + C
int main()
{
    int cont;
    for(cont = 1; cont < 100; cont--){
        printf("%d ", cont);
    }
    return 0;
}
