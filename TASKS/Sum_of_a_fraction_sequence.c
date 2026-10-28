#include<stdio.h>
int main(void)
{int n,i;
double t=2.0,sum=2.0;
scanf("%d",&n);
for(i=1;i<n;i++)
    {t=1+1.0/t;
    sum+=t;}

printf("%lf",sum);
return 0;
}