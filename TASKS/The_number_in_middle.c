/*题面描述：
对于任意输入的三个整数中，找出大小顺序处于中间的那个数。
mid.png
输入：
三个整数，以空格间隔。

输出：
共一行，即中间数。

示例输入：
1 2 3

示例输出：2*/
#include<stdio.h>
int main()
{
    int num[3],i,j,temp;
    for(i=0;i<3;i++)
        {
            scanf("%d",&num[i]);
        }
    for(i=1;i<3;i++)
        {
            for(j=0;j<3-i;j++)
                {
                    if (num[j]>num[j+1])
                        {
                            temp=num[j];
                            num[j]=num[j+1];
                            num[j+1]=temp;
                        }
                }
        }
    printf("%d",num[1]);
    return 0;
}