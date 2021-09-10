#include <stdio.h>
#include <stdlib.h>
//Laço for sem conteudo. Gerar tempo de espera.
int main()
{
    int i;
    for(i=0; i<1000000000; i++);
    printf("Acabou o programa \n");
    return 0;
}
