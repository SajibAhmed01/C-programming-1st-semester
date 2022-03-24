#include<stdio.h>

int main ()
{
    int n,i,sum=1;

    printf("Please enter the number:");
    scanf("%d",&n);

    printf("1*2*3*4*5*6*........................*%d\n",n);

    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }

    printf("SUM = %d\n",sum);

    return 0;
}
