#include <stdio.h>
#include <stdlib.h>
/* Matriz identidade de ordem T */
#define T 15
int main()
{
    int matriz[T][T] = {{0}}; //Colocou 0 em todas as posições e depois
    //Pela logica posicao de linha e colunas iguais recebem 1
    for(int i=0; i<T; i++){
        matriz[i][i]=1;
    }

    //Percorrer e mostrar a matriz
    for(int i=0; i<T; i++){ //linha
        for(int j=0; j<T; j++){ //coluna
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
