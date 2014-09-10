#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Mr.Peeraphon Sukjai 5710742171\nplease enter midterm final:");
    scanf("%d %d",&a,&b);
    if((a>=20) && (b>=30))

    {
        printf("Result: passed with score%d",a+b);
    }
    if((a<=19) && (b<=29))
    {
        printf("Result: not passed with score%d",a+b);
    }
    if((a>=10) && (b>=50))
    {
        printf("Result: passed with score%d",a+b);
    }
    if((a<=9) && (b<=49))
    {
        printf("Result: not passed with score%d",a+b);
    }
    if((a>=10) && (b>=40))
    {
        printf("Result: passed with score%d",a+b);
    }
    if((a<=9) && (b<=39))
    {
        printf("Result: not passed with score%d",a+b);
    }
   return 0;
}
