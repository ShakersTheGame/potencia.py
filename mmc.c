#include <stdio.h>


long mmc(int valor1, int valor2)
{
    int i,resto;
    
    for (i=1; i>0;i++)
    {
        resto = ((long)valor1 * i) % valor2;
        if (resto==0)
        {
            break;
        }
    }
    return (valor1 * i);
}

int main()
{
    int valor1,valor2;
    long res;
    scanf("%d %d",&valor1,&valor2);
    res = mmc(valor1,valor2);
    printf("%ld\n",res);
    return 0;
}
