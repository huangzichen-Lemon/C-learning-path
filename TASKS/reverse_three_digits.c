#include<stdio.h>
int main()
{int e,a,b,c;
scanf("%d",&e);
a=e/100;
b=(e-a*100)/10;
c=(e-a*100-b*10);


printf("%03d\n",c*100+b*10+a);
return 0;







}