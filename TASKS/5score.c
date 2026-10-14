#include<stdio.h>
int main(void)
{int a;
    char b;
    scanf("%d",&a);
switch(a){
case 5:
    b='A';
    break;
case 4:
    b='B';
    break;
case 3:
    b='C';
    break;
case 2:
    b='D';
    break;
case 1:
    b='E';
    break;}
printf("%c\n",b);
return 0;
}