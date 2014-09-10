#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("please enter base 10 number:");
    scanf("%d",&a);
    printf("please select output base [8 or 16]:");
    scanf("%d",&b);
    if(b==8)
    {
        printf("%o",a);
    }
    if(b==16)
    {
        printf("%x",a);
    }
    return 0;
}
