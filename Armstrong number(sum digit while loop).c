#include<stdio.h>

int main ()
{
    int number,remainder,sum=0,temp;

    printf("Please enter the number:");
    scanf("%d",&number);

    temp=number;

    while(temp!=0)
    {
        remainder=temp%10;
        sum=sum+(remainder*remainder*remainder);//153=1^3+5^3+3^3=153 kiup seris sum = main same so armstrong number...
        temp=temp/10;
    }

    printf("Sum= %d\n",sum);

    if(sum==number)
    {
        printf("Armstrong number:");
    }

    else
    {
        printf("Not Armstrong number:");
    }

    return 0;
}
