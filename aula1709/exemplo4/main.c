#include <stdio.h>
#include <stdlib.h>
//Somatória dos valores entrados pelo usuário
//até que soma seja maior que 100

int main()
{
    int somatoria = 0;
    int num;

    while(somatoria < 100){
        printf("Digite um valor: ");
        scanf("%d", &num);
        somatoria += num; //atribuição composta
    }

    printf("Valor da somatoria: %d \n", somatoria);


    return 0;
}
