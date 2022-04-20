#include<stdio.h>

int main()
{
    int x,y;

    printf("Enter the two number:");
    scanf("%d %d",&x,&y);

    if(x>y)
    {
        printf("the number of x is longer:");
    }

   else if(x<y)
    {
        printf("the number of y is longer:");
    }
    else
    {
        printf("number1 and number2 is same %d = %d",x,y);
    }

    return 0;
}
