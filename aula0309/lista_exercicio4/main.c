#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    //fflush(stdin);
    __fpurge(stdin);
    printf("Digite uma letra: (não numérico) \n");
    letra = getchar();
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("A letra é uma vogal: %c \n", letra);
            break;
        default:
            printf("A letra é uma consoante: %c \n", letra);
    }

    return 0;
}
