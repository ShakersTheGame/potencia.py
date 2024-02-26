#include <stdio.h>
#include <stdbool.h>


int prox_bissexto(int n)
{
    /*o ano é bissexto se for divisivel por 4
    se o ano for divisivel por 100 entoa tb tem de ser divisivel por 400 
    para ser bissexto*/
    int biss;
    bool estado = true;
    scanf("%d",&n);
    if (n%4==0)
    {
        biss = n;
    }
    else if (n%100==0 && n%400==0)
    {
            biss = n;
    }
    else
    {
        while (estado)
        {
            n+= 1;//2198
            if (n%4==0 && n%100==0 && n%400==0)
            {
                biss = n;
                estado = false;
            } 
            else if (n%100==0 && n%400==0)
            {
                biss = n;
                estado = false;
            }
            else if (n%100!=0 && n%400!=0 && n%4==0)
            {
                biss = n;
                estado = false;
            }
        }
    }
    return biss;
}