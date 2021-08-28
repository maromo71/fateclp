#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Gere um numero mágico, 0 e 999
    Usuário dar um palpite
*/
int main()
{
    srand(time(NULL));
    int magico, palpite;
    //gerar o magico
    magico = rand() % 1000;
    //Pedir o palpite
    printf("Digite o seu palpite, um valor entre 0 e 999 \n");
    scanf("%d", &palpite);
    //Compara para ver se ele acertou
    if(magico==palpite){
        printf("Parabéns. Você acertou \n");
        exit(0); //forçar saida sem erro
    }else{
        printf("Ahh! Infelizmente você não acertou \n");
        if(palpite < magico){
            printf("Seu palpite foi BAIXO \n");
        }else{
            printf("Seu palpite foi ALTO \n");
        }
    }
    printf("O Mágico: %d \n", magico);


    return 0;
}
