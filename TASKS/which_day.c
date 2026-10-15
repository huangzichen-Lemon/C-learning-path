#include <stdio.h>
int main()
{
    int a, b, c, i;
    int e = 0;
    scanf("%d%d%d", &a, &b, &c);
    if (b > 12 || b < 1 || c > 31 || c < 1)
    {
        printf("data error!\n");
        return 0;
    }
    int d[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (a % 100 == 0 && a % 400 == 0)
    {
        d[1] = 29;
    }
    else if (a % 4 == 0 && a % 100 != 0)
    {
        d[1] = 29;
    }

    if (c > d[b - 1])
    {
        printf("data error!\n");
        return 0;
    }
    for (i = 0; i < b - 1; i++)
    {
        e += d[i];
    }
    e = e + c;

    printf("%d\n", e);
    return 0;
}
/*通过该题，学会了使用数组储存数字。明白了分支运行完若要结束程序要用return 0,学会了用for循环调用数组数字。*/