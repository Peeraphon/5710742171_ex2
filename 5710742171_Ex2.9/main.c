#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("Hello My name is Peeraphon Sukjai\n Please enter coordinate");
    scanf("%float %float",&x,&y);
    if((x>0) && (y>0))
    {
        printf("Result: Q1");
    }
     if((x<0) && (y>0))
     {
        printf("Result: Q2");
     }
     if((x<0) && (y<0))
     {
         printf("Result: Q3");
     }
     if((x=0) && (y=0))
     {
        printf("Result:Origin");
     }




    return 0;
}
