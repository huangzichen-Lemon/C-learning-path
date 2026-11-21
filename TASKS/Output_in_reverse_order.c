/*逆序输出
Grade: 5 / Discount: 0.8
Input:console/Output:console
题面描述：
黑暗魔法中有一招叫“以彼之道，还施彼身”，用数学方法表示的话，就相当于输入Ｎ个数字，用数组保存，再逆序输出。
reverseout.png

输入：
一行中有Ｎ(0<N<1000)个数字，以空格分隔。

输出：
逆序输出Ｎ个数字，以空格分隔，最后一个数值之后无空格。

示例输入：
1 2 3 4

示例输出：
4 3 2 1*/
#include<stdio.h>
int main()
{
    int num[1000],i,d,g,n=0;
    for(g=0;g<1000;g++)
    {
        if(scanf("%d",&d)==1)
            {
                num[g]=d;
                n++;
            }
        else
            break;
    }
    
    for(i=1;i<=n;i++)
        {
            if(i>1)
                printf(" ");
            printf("%d",num[n-i]);
        }
    return 0;
}