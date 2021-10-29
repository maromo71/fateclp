#include <stdio.h>
#include <stdlib.h>
/* Programa para apresentar o resultado final de 08 alunos
Necessario armazenar o ra, 2 notas por aluno, e a media de cada aluno
No final mostar o resultado de cada aluno, se está aprovado ou reprovado
*/
#define L 8
#define C 2
int main()
{
    int ra[L];
    float notas[L][C];
    float medias[L];

    for(int i=0; i<L; i++){ //Percorrer as linhas
        printf("Digite o ra do %dº) aluno \n", i+1);
        scanf("%d", &ra[i]);
        float soma = 0;
        for(int j=0; j<C; j++){ //Percorrer as colunas
            printf("Digite a %dª) nota do aluno de ra %d \n", j+1, ra[i]);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        medias[i] = soma / C;
    }

    //Mostrar o resultado de cada aluno
    for(int i=0; i<L; i++){
        if(medias[i]>=6){
            printf("Aluno de ra %d teve media = %.2f. Situação: aprovado \n", ra[i], medias[i]);
        }else{
            printf("Aluno de ra %d teve media = %.2f. Situação: reprovado \n", ra[i], medias[i]);
        }
    }

    return 0;
}
