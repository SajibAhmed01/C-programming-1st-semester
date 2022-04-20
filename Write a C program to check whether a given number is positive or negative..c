#include<stdio.h>

int main()
{
    int x;
    printf("Please enter the number:");
    scanf("%d",&x);

    if(x>=0)
    {
        printf("positive number = %d",x);
    }
     if(x<=0)
    {
        printf("negetive number = %d",x);
    }

    return 0;
}
