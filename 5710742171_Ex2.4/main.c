#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,i=0,max=0,min=0;

for(i=0;i<3;i++)

{
scanf("%d",&a);
if(i==0)
min=a;
if(max<a)
max=a;
if(min>a)
min=a;
}
printf("max=%dnmin=%d",max,min);
}
