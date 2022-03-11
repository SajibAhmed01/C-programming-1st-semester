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
        sum=sum *10 + remainder;
        temp=temp/10;
    }
    if(number==sum)
    {
        printf("The number is palandrom");
    }

    else
    {
        printf("The number is not palandrom");
    }

    return 0;
}

