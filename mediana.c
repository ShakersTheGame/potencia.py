#include <stdio.h>
/*
int mediana(int a, int b,int c)
{
    int mediana;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a>b)
    {
        
    }
    
    return mediana;
}
*/
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