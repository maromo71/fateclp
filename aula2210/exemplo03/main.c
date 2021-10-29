#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    //dar carga no vetor, atribuir valores as posicoes
    int vetor[TAM] = {0};

    for(int i=0; i<TAM; i++){
        printf("[ %d ] ", vetor[i]);
    }
    printf("\n");

    return 0;
}
