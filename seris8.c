#include<stdio.h>

int main ()
{
    int n,sum,even=0,odd=0,i;

    printf("Please enter the number:");
    scanf("%d",&n);

    printf("1-2+3-4+5-...............+%d\n",n);


    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even=even+i;
        }

        else
        {
            odd=odd+i;
        }

        sum=(odd-even);
    }

    printf("SUM = %d\n",sum);

    return 0;
}
