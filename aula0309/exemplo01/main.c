#include <stdio.h>
#include <stdlib.h>
//Cardapio para o usuario fazer suas escolhas
int main()
{
    int opcao;
    printf("MENU PRINCIPAL \n");
    printf("1.. Café \n");
    printf("2.. Leite \n");
    printf("3.. Pãozinho \n");
    printf("4.. Mortadela \n");
    printf("5.. Presunto \n");
    printf("9.. Sair \n");
    printf("Escolha sua opção:  ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Você escolheu café, pague R$ 3,00 \n");
            break;
        case 2:
            printf("Você escolheu leite, pague R$ 5,00 \n");
            break;
        case 3:
            printf("Você escoheu pãozinho, pague R$ 1,00 \n");
            break;
        case 4:
            printf("Você escolheu mortadela, pague R$ 3,00 \n");
            break;
        case 5:
            printf("Você escolheu presunto, pague R$ 3,50 \n");
            break;
        case 9:
            printf("Acabou o programa \n");
            break;
        default:
            printf("Opção inválida \n");
    }
    return 0;
}
