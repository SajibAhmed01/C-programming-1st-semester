#include<stdio.h>

int main()
{
    int x,sum=0,i,y;

    printf("Enter the number:");
    scanf("%d",&x);

    y=9;

    for(i=1;i<=x;i++)
    {
        sum=sum+y;
        y=(y*10)+9;
    }

    printf("%d\n",sum);
    return 0;
}
