/*题面描述：
输入两个正整数a和b，求其最大公约数和最小公倍数。

gcd.png

输入：
标准输入，两个正整数a和b。

输出：
标准输出，两个正整数，即a和b的最大公约数和最小公倍数，以空格间隔。

示例输入：
153 123

示例输出：
3 6273*/
#include <stdio.h>
int main(void)
{
    long long a, b, x, y, c, gcd, lcm;
    scanf("%lld %lld", &a, &b);
    x = a;
    y = b;
    while (y != 0)
    {
        c = x % y;
        x = y;
        y = c;
    }
    gcd = x;
    lcm = a / gcd * b;
    printf("%lld %lld\n", gcd, lcm);
    return 0;
}
/*学会了while:在达成这个条件时就一直循环。学会了求最大公约数的方法*/