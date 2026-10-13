#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, x1, x2;
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (a == 0)
    {
        printf("%d\n", 0);
    }
    else if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1=%.2f\nx2=%.2f\n", x1, x2);
    }
    else if (d == 0)
    {
        printf("x1=%.2f\nx2=%.2f\n", -b / (2 * a), -b / (2 * a));
    }
    else
    {
        printf("%d\n", -1);
    }
    return 0;
}