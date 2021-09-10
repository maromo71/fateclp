#include <stdio.h>
#include <stdlib.h>
//Gosto de usar para validar entradas

int main()
{
    int opcao;
    do{
        printf("Escolha pelo numero \n");
        printf("1.. Big Mac \n");
        printf("2.. Mac Frango \n");
        printf("3.. Coca-cola \n");
        printf("Sua opção: \n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("Big mac, pague 5,00 \n");
                break;
            case 2:
                printf("Mac Frango, pague 4,00 \n");
                break;
            case 3:
                printf("Coca-cola, pague 3,00 \n");
                break;
        }
    }while(opcao <1 || opcao > 3);

    return 0;
}
