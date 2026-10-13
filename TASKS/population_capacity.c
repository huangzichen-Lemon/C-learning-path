#include<stdio.h>
int main(){
float x,a,y,b,t;
scanf("%f %f %f %f",&x,&a,&y,&b);
t= (a*x-b*y)/(a-b);
printf("%.2f\n",t);
return 0;   
}