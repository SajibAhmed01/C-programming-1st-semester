#include<stdio.h>

int main ()
{
    int number,sum,remainder,temp;

    printf("Please enter the number:");

    scanf("%d",&number);

    temp=number;

    while(temp!=0)
    {
        remainder=temp%10;
        sum=sum *10 + remainder;
        temp=temp/10;
    }
    printf("revers = %d\n",sum);

    return 0;
}
