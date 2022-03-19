#include<stdio.h>

int main()
{
    int number,count=0;

    printf("Please enter the number:");
    scanf("%d",&number);

    while(number!=0)
    {
        number=number/10;
        count++;
    }

    printf("Count number = %d\n",count);

    return 0;
}
