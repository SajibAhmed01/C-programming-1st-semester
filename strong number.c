#include<stdio.h>
int main()
{
    int number,temp,sum=0,r,i,fact;

    printf("Please enter the number:");
    scanf("%d",&number);

    temp=number;

    while(temp!=0)
    {
        r=temp%10;

        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==number)
    {
       printf("Strong number = %d\n",sum);
    }

    else
    {
        printf("Not strong number = %d\n",sum);
    }


    return 0;

}
