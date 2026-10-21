#include<stdio.h>
int main(void)
{
int n,i;
long long c=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    c+=i*i;
}
printf("%lld\n",c);
return 0;
}