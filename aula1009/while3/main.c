#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra = '\0';
    while(letra != 'q'){
        printf("\nDigite uma letra (ou 'q' para sair:) ");
        //fflush(stdin);
        __fpurge(stdin);
        letra = getchar();
    }

    printf("\nAcabou a digitação!\n");
    return 0;
}
