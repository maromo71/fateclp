#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior=-1, num;
    printf("%d", maior);
    for(int i=1; i<=5 ; i++){
        //repetir 5 vezes
        printf("Digite um numero:  \n");
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
    }
    printf("O maior valor entrado pelo usuario foi %d \n", maior);
    return 0;
}
