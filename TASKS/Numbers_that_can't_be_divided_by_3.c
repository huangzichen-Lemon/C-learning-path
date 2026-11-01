#include<stdio.h>
int main(void)
{
int m,n,i,t;
scanf("%d %d",&m,&n);
if(m>n)
    {t=m;
     m=n;
     n=t;
    }

for(i=m;i<=n;i++)
    {if(i%3!=0)
        printf("%d ",i);
    }
printf("\n");
}