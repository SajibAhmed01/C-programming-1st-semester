#include<stdio.h>

int main()
{
    int number[1000],minimum,x,i;

    printf("How enter any number:");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        scanf("%d",&number[i]);
    }

    minimum=number[0];

    for(i=1;i<x;i++)
    {
        if(number[0]>i)
        {
            minimum=i;
        }
    }

    printf("MINIMUM= %d\n",minimum);

    return 0;
}
