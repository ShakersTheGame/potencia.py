#include <stdio.h>
#include <ctype.h>



int ebranco(int ch)
{
    return (ch == ' ' || ch == '\n' || ch == '\t');
}


int contar()
{
    int ch, palavras = 0;
    int ch_anterior = 0; // compara o caracter atual com o anterior

    while((ch = getchar()) != EOF)
    {
        if(!ebranco(ch))
        {
            /* se o caracter atual for letra e o anterior tb for (!ch_anterior) entao estamos em 1 palavra*/ 
            if(!ch_anterior)
            {
                palavras++;
                ch_anterior = 1;
            }
        }
        else
        {
            ch_anterior = 0;
        }
    }

    return palavras;
}


int main(void)
{
    int comprimento = 0;

    comprimento = contar();
    printf("%d \n",comprimento);
    return 0;
}










