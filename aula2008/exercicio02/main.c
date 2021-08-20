#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>
//Faça um Programa que peça um número e então mostre
//a mensagem: O número informado foi [número].
int main()
{
    //setlocale(LC_ALL, 'pt_BR');
    int valor;
    printf("Digite um valor numerico: \n");
    scanf("%d", &valor);
    printf("O número informado foi %d \n", valor);
    return 0;
}
