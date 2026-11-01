/*题面描述：
定义N阶三角形为高为N、底边长为2*N-1的等腰三角形，如下图所示，注意最后一行的左边无空格：
triangle.png

输入：
一个整数N，如上所述。

输出：
类似上图的N阶三角形。

示例输入：
4

示例输出：
triangle.png

No.
Te*/
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
}
/*学会了：在for循环出现无限循环时，优先检查for三个参数有没有问题，
尤其是条件

*/