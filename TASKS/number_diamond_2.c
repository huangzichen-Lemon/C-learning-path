/*题面描述：
输出如图所示的数字菱形，图中所示为4阶数字菱形。
diamond2.png
输入：
一个整数(<10)，表示菱形的阶数。
输出：
类似图示的数字菱形。
示例输入：
略

示例输出：
略*/
#include <stdio.h>
int main()
{
    int n, t, i;
    scanf("%d", &n);
    for (t = 1; t <= n; t++)
    {

        {
            printf("%*s", n - t, "");
            for (i = t; i >= 1; i--)
            {
                printf("%d", i);
            }
            for (i = 2; i <= t; i++)
            {
                printf("%d", i);
            }
        }
        printf("\n");
    }
    for (t = n - 1; t > 0; t--)
    {

        {
            printf("%*s", n - t, "");
            for (i = t; i >= 1; i--)
            {
                printf("%d", i);
            }
            for (i = 2; i <= t; i++)
            {
                printf("%d", i);
            }
        }
        printf("\n");
    }
    return 0;
}