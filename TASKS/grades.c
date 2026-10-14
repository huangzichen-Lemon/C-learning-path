#include<stdio.h>
int main(void)
{char a;
scanf("%c",&a);
if(a=='A')
    printf("Very good!\n");
else if(a=='B')
    printf("Good!\n");
else if(a=='C')
    printf("OK!\n");
else if(a=='D')
    printf("Bad!\n");
else
    printf("Too bad!\n");
return 0;}