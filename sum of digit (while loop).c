#include<stdio.h>

int main ()
{
    int number,sum=0,remainder,temp;

    printf("Please enter the number:");
    scanf("%d",&number);

    temp=number;

    while(temp!=0)
    {
        remainder=temp%10;
        sum=sum+remainder;
        temp=temp/10;
    }

    printf("SUM = %d\n",sum);

    return 0;
}
