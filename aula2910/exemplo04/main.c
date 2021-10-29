#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa, com uma função que necessite de um argumento.
A função retorna o valor de caractere 'P', se seu argumento for positivo,
'N' para negativo ou 'Z' para 0.
*/

char ver_positividade(int num);

int main()
{
    int numero;
    printf("Digite um número: \n");
    scanf("%d", &numero);

    switch(ver_positividade(numero)){
        case 'N':
            printf("Negativo \n");
            break;
        case 'P':
            printf("Positivo \n");
            break;
        case 'Z':
            printf("O numéro é ZERO \n");
    }
    return 0;
}

char ver_positividade(int num){
    if (num == 0){
        return 'Z';
    }else{
        if(num > 0){
            return 'P';
        }else{
            return 'N';
        }
    }
}
