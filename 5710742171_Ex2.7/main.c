#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Mr.Peeraphon Sukjai");

    scanf("%d",&a);
    if(a> 80 )
    {
        printf("A");
    }
    if((a>=70) && (a<=79))
    {
        printf("B");
    }
    if((a>=60) && (a<=69))
    {
        printf("C");
    }
    if((a>=50) &&(a<=59))
    {
        printf("D");
    }
    if((a<50))
    {
        printf("F");
    }
    return 0;
}
