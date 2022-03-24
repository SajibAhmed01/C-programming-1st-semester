#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Please enter the number:");
    scanf("%d",&n);

    printf("1+3+5+7+9+..........+%d\n",n);

    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;

        printf("%d\n",i);
    }

    printf("SUM = %d\n",sum);

    return 0;
}
