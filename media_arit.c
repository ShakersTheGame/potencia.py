#include <stdio.h>

int main()
{
    int valores,soma,nr_elem;
    float media;
    
    scanf("%d", &valores);
    soma = valores;
    nr_elem = 0;

    while (valores != 0)
    {
        scanf("%d", &valores);
        soma += valores;
        nr_elem +=1;
    }
    media =  (float)soma / nr_elem;
    printf("%.2f\n", media);
    return 0; 
}