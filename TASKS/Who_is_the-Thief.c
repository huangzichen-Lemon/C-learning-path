/*一位法官在审理一起盗窃案时，对涉及的四名嫌疑人A、B、C和D进行了审问。四人分别供述如下：

A：“罪犯在B、C、D三人之中”

B：“我没有作案，是C偷的”

C：“在A和D中有一个是罪犯”

D：“B说的是事实”

经过充分的调查，证实4人之中只有两人说了真话，并且罪犯只有一个。编写程序，输出ABCD哪个是罪犯。

 实验步骤与要求：

（1）用变量a、b、c、d表示A、B、C、D是否是罪犯，如果是罪犯，则值为1，反之，值为0。

（2）用变量la、lb、lc、ld表示A、B、C、D供述的话是否为真，如果为真，则值为1，反之，值为0。*/
#include <stdio.h>
int main()
{
    int la, lb, lc, ld, a, b, c, d;
    for (a = 0; a <= 1; a++)
        for (b = 0; b <= 1; b++)
            for (c = 0; c <= 1; c++)
                for (d = 0; d <= 1; d++)
                {
                    if (a + b + c + d == 1)
                    {
                        la = (a == 0 && (b == 1 || c == 1 || d == 1));
                        lb = (b == 0 && c == 1);
                        lc = (a == 1 || d == 1);
                        ld = lb;
                        if (la + lb + lc + ld == 2)
                        {
                            if (a == 1)
                                printf("A是小偷");
                            if (b == 1)
                                printf("B是小偷");
                            if (c == 1)
                                printf("C是小偷");
                            if (d == 1)
                                printf("D是小偷");
                        }
                    }
                }
    return 0;
}