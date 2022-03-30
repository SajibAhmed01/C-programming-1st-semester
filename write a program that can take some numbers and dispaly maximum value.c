#include<stdio.h>
int main ()
{
    int number[1000],x,i,maximum;

    printf("How many number:");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        scanf("%d",&number[i]);
    }

    maximum=number[0];

    for(i=1;i<x;i++)
    {
        if(number[0]<i)
        {
            maximum=i;
        }
    }
    printf("MAXIMUM = %d\n",maximum);

    return 0;
}
