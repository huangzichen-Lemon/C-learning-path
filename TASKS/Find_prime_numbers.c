/*题面描述：
编程求给定区间的全部素数。
odd.png
输入：
两个正整数m和n，以空格间隔。

输出：
在单行中给定区间（包括边界）中的所有素数，每个数之后有一个空格，最后换行。

示例输入：
1 3

示例输出：
2 3*/
/*#include<stdio.h>
int main()
{
    int m,n,i,t,temp;
    scanf("%d %d",&m,&n);
    if (m>n)
        {
            temp=m;
            m=n;
            n=temp;

        }
    for(i=m;i<=n;i++)
        {
            
                {for(t=2;t<i;t++)
                    {
                        if(i%t==0)
                            break;
                    }
                }
            if(t==i)
                printf("%d ",i);
        }
printf("\n");
return 0;

}*/
//改进版
#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,t,temp,tof=1;
    scanf("%d %d",&m,&n);
    if (m>n)
        {
            temp=m;
            m=n;
            n=temp;

        }
    for(i=m;i<=n;i++)
        {
            if(i<2)
                tof=0;
            else
                {for(t=2;t<=sqrt(i);t++)
                    {
                        if(i%t==0)
                            {tof=0;
                            break;}
                    }}
                
            if(tof)
                printf("%d ",i);
            tof=1;
        }
printf("\n");
return 0;
}