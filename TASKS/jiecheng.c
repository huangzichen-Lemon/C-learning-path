#include <stdio.h>
int main(void)
{
    int n, i;
    unsigned long long r = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        r = r * i;
    }
    printf("%llu\n", r);
    return 0;
}