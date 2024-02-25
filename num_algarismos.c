#include <stdio.h>

int main(void)
{
    int digits= 0,n;
    printf("Inteiro positivo: "); scanf("%d",&n);
    do
    {
        n/=10;
        digits +=1;
    } while (n>0);
    printf("%d algarismo(s)\n", digits);
    return 0;
}