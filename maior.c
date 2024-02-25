#include <stdio.h>

int main()
{
    int a,b,c,maior;
    scanf("%d %d %d", &a,&b,&c);
    if ((a > b && a > c) ||(a>b && b==c))
    {
        maior = a;
    }
    else if ((b>a && b>c) || (b>a && a==c))
    {
        maior = b;
    }
    else 
    {
        maior = c;
    }
    printf("%d\n",maior);
    return 0;
}