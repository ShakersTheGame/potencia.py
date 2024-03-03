#include <stdio.h>
#include <stdbool.h>



int nr_divisores(int n)
{
    int qtd=0,i;

    for (i=1; i<=n;i++)
    {
        if (n%i==0)
        {
            qtd += 1;
        }
    }
    return qtd;
}


bool primos(int n)
{
    if(n<=1)
    {
        return false;
    }

    if (nr_divisores(n) == 2)
    {
        return true;
    }

    return false;
}


int main(void)
{
    int limite_superior;

    scanf("%d",&limite_superior);


    for (int i = 2; i<=limite_superior;i++)
    {
        if (primos(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}