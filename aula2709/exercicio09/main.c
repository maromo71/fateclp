#include <stdio.h>
#include <stdlib.h>
/*
Desenvolva um gerador de tabuada, capaz de gerar a
tabuada de qualquer número inteiro entre 1 a 10.
O usuário deve informar de qual numero ele deseja ver a tabuada.
A saída deve ser conforme o exemplo abaixo:
3 x 1 = 3 ....
*/
int main()
{
    int valor = 0;
    printf("Tabuada que deseja gerar ? \n");
    scanf("%d", &valor);

    for(int i=1; i<=10; i++){
        printf("%d X %d = %d \n", valor, i, valor * i);
    }

    return 0;
}
