#include <stdio.h>
#include <stdlib.h>
#define T 10

/* vetor para armazenar T notas de alunos
   encontrar o melhor resultado, e quantos alunos
   tiraram esta maior nota */

int main()
{
    float notas[T]; //Armazenar T notas do tipo float
    //este for é para alimentar o vetor com os dados
    for(int i=0; i<T; i++){
        //percorre os indices do vetor (i)
        printf("Digite a %d) nota \n", i+1);
        scanf("%f", &notas[i]);
    }
    //algoritmo para encontrar a maior nota no vetor
    float maior = notas[0];
    for(int i=1; i<T; i++){
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
    for(int i=0; i<T; i++){
        if(maior == notas[i]){
            cont++;
        }
    }
    printf("%d alunos tiraram a maior nota \n", cont);
    return 0;
}
