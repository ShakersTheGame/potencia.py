#include <stdio.h>


int main(void)
{
    double x,exp;
    scanf("valor de x: %lf",&x);
    // 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
    exp = ((((3*x+2)*x -5)*x -1)*x+1)*x-6;

    printf("resultado final: %lf\n", exp);
    
    return 0;
}