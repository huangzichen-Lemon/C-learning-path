/*题面描述：
输出如图所示的数字菱形，图中所示为4阶数字菱形。
diamond1.png
输入：
一个整数(<10)，表示菱形的阶数。

输出：
类似图示的数字菱形。

示例输入：
略

示例输出：
略*/
#include <stdio.h>
int main(void)
{
    int i, t, n, w;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        w = n - i;
        printf("%*s", w, "");
        for (t = 1; t <= 2 * i - 1; t++)
        {
            printf("%d", n + 1 - i);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        w = n - i;
        printf("%*s", w, "");
        for (t = 1; t <= 2 * i - 1; t++)
        {
            printf("%d", n + 1 - i);
        }
        printf("\n");
    }
}