#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Entre com o dividendo \n");
    scanf("%d", &a);
    printf("Entre com o divisor \n");
    scanf("%d", &b);
    int resultado;
    if(b){ // equivale-se a if (b!=0) {
        resultado = a / b;
    }else{
        printf("Impossível dividir por ZERO \n");
        exit(1);
    }
    printf("Resultado: %d \n", resultado);

    return 0;
}
