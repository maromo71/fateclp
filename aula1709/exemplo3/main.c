#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1, b=3, c=5;
    int x = ++a + ++b + ++c;
    printf("Valor de X: %d \n", x);
    printf("Valor de a: %d \n", a);
    printf("Valor de b: %d \n", b);
    printf("Valor de c: %d \n", c);

    int z = 10;

    printf("%d \n", z++);
    printf("%d \n", z);
    return 0;
}
