#include <stdio.h>

int soma_divisores(int n)
{
    int divisores,soma;
    soma = 0;

    printf("Qual o valor a calcular os divisores: "); scanf("%d",&n);


    for (divisores = 1; divisores<n; divisores++)
    {
        if (n % divisores == 0)
        {
            soma += divisores;
            printf("%d \n",divisores);
        }
    }
    printf("Soma dos divisores: %d\n",soma);
    return soma;
    
}


