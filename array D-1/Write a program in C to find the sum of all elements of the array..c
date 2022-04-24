#include<stdio.h>

int main()
{
    int x,i;

    printf("Enter the array size:");
    scanf("%d",&x);

    int s[x],sum=0;

      for(i=0;i<x;i++)
    {
        printf("s[%d]=",i);
        scanf("%d",&s[i]);
    }

    for(i=0;i<x;i++)
    {
        sum=sum+s[i];
    }
    printf("sum=%d\n",sum);

    return 0;
}

