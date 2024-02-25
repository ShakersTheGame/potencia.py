#include <stdio.h>

int potencia(int x, int n)
{
    int pot=1;
    scanf("%d %d",&x,&n);
    if (n==0)
    {
        pot = 1;
    }
    else
    {
        while (n>0)
        {
            pot *= x;
            --n;
        }
    }
    return pot;
}