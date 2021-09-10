#include <stdio.h>
#include <stdlib.h>
//While (Enquanto) - Na prática, enquanto condição for verdadeira
//ele repete o laço.
int main()
{
    int soma = 0;
    int num;
    //Não temos o controle do numero de vezes que se repete
    while(soma < 1000){
        printf("Digite um numero: \n");
        scanf("%d", &num);
        soma = soma + num;
        printf("Soma parcial: %d \n", soma);
    }
    printf("Valor da soma: %d \n", soma);
    return 0;
}
