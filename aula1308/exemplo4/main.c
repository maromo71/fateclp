#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    idade = idade + 1;
    printf("Parabens aniversariante, sua nova idade e: %d \n", idade);
    printf("Tamanho em bytes da variavel idade: %d \n", sizeof(idade));
    return 0;
}
