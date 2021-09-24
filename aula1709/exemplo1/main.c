#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Tabuada do número: \n");
    scanf("%d", &num);
    for(int i=1; i<=10; i++){
        int resultado = num * i;
        printf("%d  X  %d  =  %d  \n", num, i, resultado);
        if(resultado == 25) {
           break; //saia do laco
        }
    }
    printf("Acabou \n");
    return 0;
}
