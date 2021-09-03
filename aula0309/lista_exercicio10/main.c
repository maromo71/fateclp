#include <stdio.h>
#include <stdlib.h>
//Faça um Programa que pergunte em que turno você estuda.
//Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.
//Imprima a mensagem "Bom Dia!",
//"Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.
int main()
{
    char letra;
    printf("Turno que trabalha \n");
    printf("M-matutino \n");
    printf("V-vespertino \n");
    printf("N-noturno\n");
    printf("Digite o turno: \n");
    letra = getchar();

    switch(letra){
        case 'm':
        case 'M':
            printf("Bom dia, aluno \n");
            break;
        case 'v':
        case 'V':
            printf("Boa tarde, aluno \n");
            break;
        case 'n':
        case 'N':
            printf("Boa noite, aluno \n");
            break;
        default:
            printf("Valor invalido \n");
    }
    return 0;
}
