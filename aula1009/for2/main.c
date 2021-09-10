#include <stdio.h>
#include <stdlib.h>
//Tabuada de um número, informado pelo usuário

int main()
{
    int num, cont;
    printf("Entre com o número para a tabuada \n");
    scanf("%d", &num);
    for(cont = 1 ; cont <=10 ; cont++){
        int resultado = num * cont;
        printf("%3d X %3d = %3d \n", num, cont, resultado);
    }

    return 0;
}
