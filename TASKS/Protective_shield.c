/*题面描述：
魔法世界的所有街区均为边长为1公里的正方形，如图所示整齐排列，为防止黑暗势力的魔法攻击，魔法学校欲建立一个以中心四个街区的交点为圆心，半径为r公里的圆形魔法防护罩，试计算防护罩所能保护的完整街区数N。
square.png
输入：
标准输入，一个单精度数r，r不超过1000。

输出：
标准输出，输出Ｎ的值。

示例输入：
5

示例输出：
60*/
#include<stdio.h>
#include<math.h>
int main()
{
    float r;
    int a,b,t=0;
    scanf("%f",&r);
    for(a=1;a<=r;a++)
        {
            for(b=1;b<=r;b++)
                {
                    if((a*a+b*b)<=r*r)
                        t++;
                }
        }
    printf("%d",t*4);
    return 0;
}