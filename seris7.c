#include<stdio.h>

int main ()
{
    int n,i,sum=1;

    printf("Please enter the number:");
    scanf("%d",&n);

    printf("1^2*3^2*5^2*7^2*9^2*...........*%d^2\n",n);

    for(i=1;i<=n;i=i+2)
    {
        sum=sum*i*i;
    }

    printf("SUM = %d\n",sum);

    return 0;
}
