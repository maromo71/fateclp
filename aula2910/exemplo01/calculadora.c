#include <stdio.h>
#include <stdlib.h>

int somar(int x, int y){
    return x + y;
}

int subtrair(int x, int y){
    return x - y;
}

int multiplicar(int x, int y){
    return x * y;
}

int dividir(int x, int y){
    if(y){
        return x / y;
    }else{
        printf("Impossivel dividir por zero \n");
        exit(1);
    }
}
