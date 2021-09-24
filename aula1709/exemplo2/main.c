#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Tabuada do número: \n");
    scanf("%d", &num);
    for(int i=1; i<=10; i++){
        int resultado = num * i;

        if(resultado == 25) {
           continue; //volta na condição do laço, sem executar o que esta abaixo do if
        }
        printf("%d  X  %d  =  %d  \n", num, i, resultado);
    }
    printf("Acabou \n");
    return 0;
}
