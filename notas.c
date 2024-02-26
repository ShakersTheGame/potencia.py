#include <stdio.h>

int main()
{
    int a= 0,b= 0,c= 0,d= 0,quantia;
    printf("Quantia: ");scanf("%d",&quantia);
    
    if (quantia >= 20)
    {
        a = quantia / 20;
        quantia = quantia % 20;
    }
    if (quantia >= 10)
    {
        b = quantia /10;
        quantia = quantia % 10;
    }
    if (quantia >= 5)
    {
        c = quantia / 5;
        quantia = quantia % 5;
    }
    if (quantia >= 1)    
    {
        d = quantia / 1;
    }
    printf("Notas de 20 EUR: %d \n",a);
    printf("Notas de 10 EUR: %d\n",b);
    printf("Notas de 5 EUR: %d \n",c);
    printf("Notas de 1 EUR: %d \n",d);
    return 0;
}