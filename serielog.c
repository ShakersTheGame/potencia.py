#include <stdio.h>


double serie_log(double x, int n)
{
    double termo = x,resultado = 0.0;

    for (int i = 1; i <= n; i++)
    {    
        resultado += termo / i;
        termo *= -x;
    }
    return resultado;
}

int main()
{
    double x;
    int n;
    scanf("%le", &x);
    scanf("%d", &n);
    
    printf("%.21f\n", serie_log(x,n));
    return 0;
}