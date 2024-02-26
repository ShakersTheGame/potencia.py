#include <stdio.h>


int main()
{
    int valor, divisor = 2;

    scanf("%d",&valor);

    while (divisor > 1)
    {
        while (valor % divisor == 0)
        {
            printf("%d ",divisor);
            valor = valor / divisor;
        }
        divisor += 1;
    }
    return 0;
}