#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Entre com dois valores respectivamente, para x e para y\n");
    scanf("%d%d", &x, &y);
    if(x > y){
        printf("X é maior que Y. Seu valor: %d \n", x);
    } else {
        if(x < y) {
            printf("Y é maior, seu valor: %d \n", y);
        }
        else {
            printf("Valores são iguais: %d  e  %d \n", x, y);
        }
    }
    return 0;
}
