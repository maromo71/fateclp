#include <stdio.h>
#include <stdlib.h>
//Laço infinito nada estranho. As razoes (logica do programa)
//exigiu essa criatividade

int main()
{
    int soma = 0;
    int valor;
    while(1){
        printf("Entrei no laço...\n");
        printf("Digitar um valor: ");
        //entrada
        scanf("%d", &valor);
        //verificação
        if(valor < 0) continue;
        //processamento
        soma = soma + valor;
        //verificação
        if(soma % 10 == 0) break;
    }
    printf("Soma: %d \n", soma);
    return 0;
}
