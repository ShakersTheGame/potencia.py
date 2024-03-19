#include <stdio.h>


int contar_maiores(int vec[],int size,int val)
{
    int qtd_maiores = 0;

    for (int i = 0; i < size;i++)
    {
        if (vec[i] > val)
            qtd_maiores++;
    }
    return qtd_maiores;
}

int main(void)
{
    int a[12] = {1,5,3,7,6,3,4,4,1,9,8,7};
    int size,val;

    printf("diga o tamanho e o valor a comparar: "); scanf("%d %d", &size, &val);

    printf("resultado: %d", contar_maiores(a,size,val));
    return 0;
}