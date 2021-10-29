#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa com uma função chamada somaImposto.
A função possui dois parâmetros formais:
 -> taxaImposto, que é a quantia de imposto sobre vendas
    expressa em porcentagem e
 ->custo, que é o custo de um item antes do imposto.
A função “altera” o valor de custo para incluir o imposto sobre vendas.
*/
double somaImposto(double taxaImposto, double custo);

int main()
{
    double valorCusto;
    double valorVenda;
    double percentualImposto;

    printf("Digite o valor de custo da mercadoria: \n ");
    scanf("%lf", &valorCusto);

    printf("Digite o percentual de imposto em inteiros: \n");
    scanf("%lf", &percentualImposto);

    valorVenda = somaImposto(percentualImposto, valorCusto);

    printf("Valor de venda da mercadoria: %.2lf \n", valorVenda);
    return 0;
}

double somaImposto(double taxaImposto, double custo){
    return custo + (custo * taxaImposto / 100);
}
