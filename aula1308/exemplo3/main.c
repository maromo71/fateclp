#include <stdio.h>
#include <stdlib.h>
//Uso de operadores
// + soma, - subtração, * multiplicação, / divisão, % resto (módulo)
int main()
{
    int a = 10, b = 3;
    int resultado;
    resultado = a + b;
    printf("A soma de %d + %d = %d \n", a, b, resultado);

    resultado = a - b;
    printf("A subtração de %d por %d = %d \n", a, b, resultado);

    resultado = a * b;
    printf("A multiplicação de %d por %d = %d \n", a, b, resultado);

    resultado = a / b;
    printf("A divisao de %d por %d = %d \n", a, b, resultado);
    resultado = a % b;
    printf("O resto da divisao inteira de %d por %d = %d \n", a, b, resultado);
    return 0; //pratica para saber que o programa chegou ao final
    //sem erro.
}
