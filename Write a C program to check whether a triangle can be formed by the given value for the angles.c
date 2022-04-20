#include<stdio.h>

int main()
{
    int x,y,z,total;

    printf("Please enter the number:");
    scanf("%d %d %d",&x,&y,&z);

    total=(x+y+z);

    if(total==180)
    {
        printf("The triangle");
    }

    else
    {
        printf("The not triangle:");
    }

    return 0;
}
