#include<stdio.h>

int main ()
{
    double n,i;
    double sum=0;

    printf("Please enter the number:");

    scanf("%lf",&n);

    printf("1+1/2+1/3+1/4+...........+1/%d\n",n);

    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }

    printf("SUM = %lf\n",sum);

    return 0;
}
