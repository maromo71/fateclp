#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int valor=0; valor<=255; valor++){
        printf("Caractere %d ===> %c \n", valor, (char)valor);
    }

    printf("%c\n", 177);
    return 0;
}
