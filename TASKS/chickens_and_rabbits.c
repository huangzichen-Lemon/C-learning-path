#include<stdio.h>
int main()
{int num,leg,ji,tu;
    scanf("%d %d",&num,&leg);
    tu=(leg - 2*num)/2;
    ji=num-tu;
if ((leg-2*num)%2!=0||ji<0||tu<0)
    {printf("No answer\n");}
else{

    printf("%d %d\n",ji,tu);
    }
}