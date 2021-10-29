#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Reverso do número. Faça uma função que retorne o reverso
de um número inteiro informado. Por exemplo: 127 -> 721.
*/
void reversoNumero(char * num, int algarismos);
int main()
{
    char numero[15];
    printf("Digite um numero inteiro \n");
    scanf("%s", numero);

    reversoNumero(numero, strlen(numero));

    return 0;
}

void reversoNumero(char * num, int algarismos){
    for(int i=algarismos-1; i>=0; i--){
        printf("%c", num[i]);
    }
}
