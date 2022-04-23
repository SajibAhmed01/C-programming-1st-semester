#include<stdio.h>

int main()
{
    int x,sum=0,i,y;

    printf("Enter the number:");
    scanf("%d",&x);

    y=1;

    for(i=1;i<=x;i++)
    {
        sum=sum+y;
        y=(y*10)+1;
    }

    printf("%d\n",sum);
    return 0;
}

