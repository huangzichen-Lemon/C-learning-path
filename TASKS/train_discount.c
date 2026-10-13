#include<stdio.h>
int main()
{int w,dt,p;
 float dc;
    scanf("%d %d %d",&w,&dt,&p);
if(dt<500)
    dc=0;
else if(dt<1000)
    dc=0.1;
else if(dt<1500)
    dc=0.15;
else dc=0.2;
printf("final price=%f\n",w*dt*p*(1-dc));






}