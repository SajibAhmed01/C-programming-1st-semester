#include<stdio.h>

int main()
{
    int n,i,sum=0;

    printf("Please enter the number:");
    scanf("%d",&n);

    printf("1+2+3+4+5+............+%d\n",n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("%d+\n",i);
    }

    printf("SUM = %d\n",sum);

    return 0;
}
