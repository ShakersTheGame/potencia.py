#include <stdio.h>


int mdc(int a, int b)
{
    int r;

    r = a % b;
    while (r!=0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}


int main()
{
    int num,denom,irre_n,irre_d,irre;


    scanf("%d %d",&num,&denom);
    printf("%d/%d\n",num,denom);
    irre = mdc(num,denom);
    irre_n = num/irre;
    irre_d = denom/irre;
    printf("%d/%d\n", irre_n,irre_d);

    return 0;
}