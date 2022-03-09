#include<stdio.h>
int main ()
{
    int number1,number2;

    printf("Enter the number:");
    scanf("%d",&number1);

    printf("Enter the another number:");
    scanf("%d",&number2);

    if(number1>number2)
    {
        printf("number1 is big");
    }
    else if(number1<number2)
    {
        printf("number2 is big");
    }
    else
    {
        printf(" number is same");
    }

    return 0;
}
