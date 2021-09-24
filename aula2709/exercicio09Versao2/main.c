#include <stdio.h>
#include <stdlib.h>
/*
Desenvolva um gerador de tabuada, capaz de gerar as
tabuadas de 1 a 10.
A saída deve ser conforme o exemplo abaixo:
3 x 1 = 3 ....
*/
int main()
{
    for(int i=1; i<=10; i++){
        //Tabuada do i
        printf("Tabuada do %d \n", i);
        for(int j=1; j<=10; j++){
            printf("%d X %d =%d \n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
