#include<stdio.h>

int main()
{
    int number[10000],sum=0,i,x;
    printf("How many number:");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        scanf("%d",&number[i]);
    }

    for(i=0;i<x;i++)
    {
        sum=sum+i;
    }
    printf("SUM = %d\n",sum);
    printf("AVAREG = %0.2lf\n",(double)sum/x);

    return 0;
}
