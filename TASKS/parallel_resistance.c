/*#include<stdio.h>
int main()
{double r1,r2;
scanf("%lf %lf",&r1,&r2);
printf("%.2f\n",1/(1/r1 + 1/r2));
}*/
/*#include<stdio.h>
int main(){
double f;
scanf("%lf",&f);
printf("%.5lf\n",5*(f-32)/9);
}*/
/*#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
if(a<0)
    a=-a;
printf("%d\n",a);
}*/
/*#include<stdio.h>
int main(){
float a,b,c,t;
scanf("%f %f %f",&a,&b,&c);
while(a>b||b>c)
{if(a>b)
    {t=a;a=b;b=t;}
if(b>c){t=b;b=c;c=t;}}
printf("%d %d %d\n",(int)a,(int)b,(int)c);
return 0;
}*/
#include<stdio.h>
int main(void)
{float x;
scanf("%f",&x);
if(x>=90)
    {printf("A\n");}
else if(x>=80)
    {printf("B\n");}
else if(x>=70)
    {printf("C\n");}
else if(x>=60)
    {printf("D\n");}
else
    printf("E\n");
return 0;
}