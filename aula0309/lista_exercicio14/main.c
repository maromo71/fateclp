#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que lê as duas notas parciais obtidas
por um aluno numa disciplina ao longo de um semestre,
e calcule a sua média.
A atribuição de conceitos obedece à tabela abaixo:
  Média de Aproveitamento  Conceito
  Entre 9.0 e 10.0        A
  Entre 7.5 e 9.0         B
  Entre 6.0 e 7.5         C
  Entre 4.0 e 6.0         D
  Entre 4.0 e zero        E
O algoritmo deve mostrar na tela as notas, a média,
o conceito correspondente e a mensagem “APROVADO”
se o conceito for A, B ou C ou “REPROVADO”
se o conceito for D ou E.
*/
int main()
{
    char conceito;
    double n1, n2, media;
    printf("Digite a nota 1: \n");
    scanf("%lf", &n1);
    printf("Digite a nota 2: \n");
    scanf("%lf", &n2);

    media = (n1 + n2) / 2;
    if(media >= 9){
        conceito = 'A';
    }else if(media >= 7.5){
        conceito = 'B';
    }else if(media >= 6){
        conceito = 'C';
    }else if(media >= 4){
        conceito = 'D';
    }else{
        conceito = 'E';
    }
    printf("Sua média é %.2lf, seu conceeito é %c ", media, conceito);
    if(conceito == 'A' || conceito=='B' ||conceito=='C'){
        printf("resultado aprovado\n");
    }else{
        printf("resultado reprovado\n");
    }
    return 0;
}
