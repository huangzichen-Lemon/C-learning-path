/*题面描述：
定义N阶菱形为对角线长均为为2*N-1的菱形，如下图所示，注意最宽行的左边无空格：
diamond.png

输入：
一个整数N，如上所述。

输出：
类似上图的N阶菱形。

示例输入：
4

示例输出：
diamond.png*/
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
            printf("*");
        }
        printf("\n");
    }
    for (i = n-1; i >=1; i--)
    {
        w = n - i;
        printf("%*s", w, "");
        for (t = 1; t <= 2 * i - 1; t++)
        {
            printf("*");
        }
        printf("\n");
    }
}