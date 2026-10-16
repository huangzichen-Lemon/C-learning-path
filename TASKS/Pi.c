#include<stdio.h>
int main()
{int n,i;
double pi=1;
    scanf("%d",&n);
for(i=3;i<=n;i+=2)
    {if (((i-1)/2)%2!=0)
        pi=(pi-1.0/i);
     else 
        pi=(pi+1.0/i);
    }
pi=pi*4;
printf("%.8lf\n",pi);
return 0;}