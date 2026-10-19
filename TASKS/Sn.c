/*Sn
Grade: 5 / Discount: 0.8
Input:console/Output:console
题面描述：
光明系魔法的魔法力增长值遵循Sn=a+aa+aaa+aaaa+…的公式，其中a是一个数字。如某学徒初始魔法力为3，则4年后的魔法力为3+33+333+3333，试求n年后该学徒的魔法力Sn，其中a，n由键盘输入。
mag.jpg
输入：
标准输入，两个整数a和n。

输出：
标准输出，输出Sn的值。

示例输入：
1 2

示例输出：
12*/
/*第一版：#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, n;
    double i;
    long long d = 0, c;
    scanf("%d %d", &a, &n);
    for (i = 0.0; i < n; i++)
    {
        c = a * (n - i) * pow(10, i);
        d += c;
    }
    printf("%lld\n", d);
    return 0;
}*/
/*第二版*/
#include <stdio.h>
int main(void)
{
    int a, n, i, e = 0, sum = 0;
    scanf("%d %d", &a, &n);
    for (i = 0; i < n; i++)
    {
        e = e * 10 + a;
        sum += e;
    }
    printf("%d\n", sum);
    return 0;
}
/*记得了scanf取数前要加&，巩固了关于pow（x,y)[x的y次方]参数与结果都是double形式的记忆*/