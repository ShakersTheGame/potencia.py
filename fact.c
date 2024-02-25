#include <stdio.h>

int main(void)
{
    int n, m,fact;
    fact = 1;
    printf("Até que valor queres o fatoral? "); scanf("%d",&m);
    printf("O fatorial até %d é: \n",m);
    for (n = 1; n < (m+1); n++)
    {
        fact *= n;
        printf("%d! = %d\n", n, fact);
    }
    return 0;
}