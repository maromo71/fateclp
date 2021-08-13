#include <stdio.h>
#include <stdlib.h>
//Variável pode ser global
int x = 7, z = 10;
int main()
{
    int qtd = 44; //variavel local
    printf("Ola\n");
    int teste = 0;
    int total;

    printf("Valor de teste: %d \n", teste);
    z = somar(x, z);

    printf("Valor de Z do main: %d  \n", z);
    return 0;
}
int somar(int x, int z){ //variaveis declaradas como parametros formais
    return x + z;
}
