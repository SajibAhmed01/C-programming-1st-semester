#include<stdio.h>

int main()
{
    int x,y;

    printf("Please enter the two number:");
    scanf("%d %d",&x,&y);

    if(y>x)
    {
        printf("profit=%d\n",y-x);
    }
    else    if(y<x)
    {
        printf("loss=%d\n",x-y);
    }

    else
    {
        printf("balance:%d = %d",x,y);
    }
    return 0;
}
