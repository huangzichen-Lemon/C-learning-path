#include<stdio.h>
int main(void)
{int num,t,i,g;
scanf("%d",&num);
int s[num];
for(i=0;i<=num-1;i++)
    {scanf("%d",&s[i]);}
t=s[0];
g=s[0];
for(i=1;i<=num-1;i++)
    {if(s[i]>=t)
          {t=s[i]  ;}
    }
printf("最高分是%d",t);
    for(i=1;i<=num-1;i++)
    {if(s[i]<=g)
          {g=s[i]  ;}
    }
printf("最低分是%d",g);

return 0;
}