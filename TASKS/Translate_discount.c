/*魔法学院需要运输一批魔法材料，已知运费计算公式为f=p×w×s×(1－d)，其中p为运输物品价值，w为运送物品重量，s为运送物品距离，d为折扣。现已知p，w，s的值，而折扣d的计算遵守以下规则：
s<250 没有折扣
250≤s<500 2%折扣
500≤s<1000 5%折扣
1000≤s<2000 8%折扣
2000≤s<3000 10%折扣
3000≤s 15%折扣
试计算运费f的值。注意，只能用switch语句判断和计算折扣值。*/


#include <stdio.h>

int main(void)
{
    float p, w, s, d;
    scanf("%f %f %f", &p, &w, &s);

    switch ((int)(s / 250))
    {
    case 0:
        d = 0;
        break;
    case 1:
        d = 0.02;
        break;
    case 2:
    case 3:
        d = 0.05;
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        d = 0.08;
        break;
    case 8:
    case 9:
    case 10:
    case 11:
        d = 0.1;
        break;
    default:
        d = 0.15;
        break;
    }

    printf("%.2f", p * w * s * (1 - d));
    return 0;
}