#include <stdio.h>
int main(void)
{
    int x, sum = 0;

    scanf("%d", &x);
    while (x != 0)
    {
        sum += x;
        scanf("%d", &x);
    }
    printf("%d\n", sum);
    return 0;
}


