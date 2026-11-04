#include <stdio.h>
int main(void)
{
    int i;
    double c = 1.0;
    double a = 1.0;
    for (i = 1; i <= 100; i++)
    {
        if ((2.718281828459045 - a) >= 0.00001)
        {
            c = c * i;
            a += (1.0 / c);
        }
        else
            break;
    }
    printf("%d %lf", i - 1, a);
}