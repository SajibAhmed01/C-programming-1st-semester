#include<stdio.h>

int main ()
{
    int n,i,sum=0;

    printf("Please enter the number:");
    scanf("%d",&n);

    printf("1^2+2^2+3^2+4^2+.......%d^2\n",n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;

        printf("%d\n",i);
    }

    printf("SUM = %d\n",sum);

    return 0;
}
