#include <stdio.h>
#include <stdlib.h>
/*
    Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O
	monge, necessitando de alimentos , indagou à rainha sobre o pagamento, se poderia ser
	feito com grãos de trigo dispostos em um tabuleiro de xadrez, de tal forma que o primeiro
	quadro deveria conter apenas um grão e os quadros subsequentes , o dobro do quadro
	anterior. A rainha achou o trabalho barato e pediu que o serviço fosse executado, sem se
	dar conta de que seria impossível efetuar o pagamento. Faça um algoritmo para calcular o
	número de grãos que o monge esperava receber
*/
int main()
{
    double total_graos=1, grao_na_casa=1;
    printf("Casa 1: %.0lf \n", grao_na_casa);
    for(int i=2; i<=64; i++){
        grao_na_casa *= 2;
        printf("Casa %d: %.0lf \n", i, grao_na_casa);
        total_graos += grao_na_casa;
    }
    printf("\nTotal de graos %.0lf\n", total_graos);
    return 0;
}
