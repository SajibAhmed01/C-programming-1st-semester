#include<stdio.h>

int main()
{
    int year;
    printf("Enter the number:");
    scanf("%d",&year);

    if(year%400==0||year%4==0 && year%100!=0)
    {
        printf("leap year=%d",year);
    }
    else
    {
        printf("Not leap year:");
    }
    return 0;
}
