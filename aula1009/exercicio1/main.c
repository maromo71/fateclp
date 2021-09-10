#include <stdio.h>
#include <stdlib.h>
//Escreva um algoritmo para gerar uma PA de razão qualquer, com uma série
//de 10 termos iniciando em 1.

int main()
{
    int cont;
    int razao;
    int pa = 1;
    printf("Digite a razao: \n");
    scanf("%d", &razao);
    for(cont=1; cont<=10; cont++){
        printf("o %d° termo é ==> %d \n", cont, pa);
        pa = pa + razao;
    }
    printf("Acabou ... \n");
    return 0;
}
