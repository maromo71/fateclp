#include <stdio.h>
#include <stdlib.h>
//Programa que efetua a somatória de valores entrados pelo usuario onde
// 0<=n<=20. Ao final o programa deve exibir a somatória. Nota
//todos os valores fora da faixa entre 0 e 20 deve ser desconsiderados.
//O programa deve ser encerrado quando o usuario digitar 0 como entrada.
int main(){
    int soma = 0;
    int n;
    do{
        do{
            printf("Digite um numero: \n");
            scanf("%d", &n);
        }while(n < 0 || n > 20);
        soma = soma + n;
    }while(n != 0);
    printf("Somatoria: %d \n", soma);
    return 0;
}
