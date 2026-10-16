#include<stdio.h>
int main(void)
{int x;
scanf("%d",&x);
printf("%d",x);
printf(" ");
while(x!=1)
{if(x%2==0)
    {x=x/2;
    printf("%d",x);
    printf(" ");}
 else 
    {x=x*3+1;
    printf("%d",x);
    printf(" ");}
}

return 0;
}