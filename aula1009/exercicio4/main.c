#include <stdio.h>
#include <stdlib.h>
//de fahrenheit para celsius de 0 a 100 f, quero ser quantos é em Celsius
int main()
{
    int fah;
    double celsius;
    for(fah = 0; fah<=100; fah++){
        celsius = (fah - 32) / 1.8;
        printf("%dº Fahrenheit é ==> %.2fº Celsius \n", fah, celsius);
    }
    return 0;
}
