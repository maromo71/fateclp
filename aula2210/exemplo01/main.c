#include <stdio.h>
#include <stdlib.h>
/* vetor para armazenar 10 notas de alunos
   encontrar o melhor resultado, e quantos alunos
   tiraram esta maior nota */

int main()
{
    int i;
    float notas[10]; //Armazenar 10 notas do tipo float
    //este for é para alimentar o vetor com os dados
    for(i=0; i<10; i++){
        //percorre os indices do vetor (i)
        printf("Digite a %d) nota \n", i+1);
        scanf("%f", &notas[i]);
    }

    //algoritmo para encontrar a maior nota no vetor
    float maior = notas[0];
    for(i=1; i<10; i++){
        //percorrer da segunda casa em diante, trocando
        //sempre que achar um valor maior
        if(maior < notas[i]){
            maior = notas[i];
        }
    }
    //Vamos mostrar o resultado
    printf("Maior valor entrado foi: %.2f \n", maior);
    //algoritmos para contar quantas vezes aparece este maior no vetor
    int cont = 0;
    for(i=0; i<10; i++){
        if(maior == notas[i]){
            cont++;
        }
    }
    printf("%d alunos tiraram a maior nota \n", cont);
    return 0;
}
