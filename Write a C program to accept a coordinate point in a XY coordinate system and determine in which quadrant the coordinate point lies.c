#include<stdio.h>

int main()
{
    int x,y;

    printf("Please enter the number:");
    scanf("%d %d",&x,&y);

    if(x>0 && y>0)
    {
        printf("first coordinate:");
    }
    if(x<0 && y>0)
    {
        printf("two coordinate:");
    }
    if(x<0 && y<0)
    {
        printf("third coordinate:");
    }
    else
    {
        printf("fourth coordinate:");
    }

    return 0;
}
