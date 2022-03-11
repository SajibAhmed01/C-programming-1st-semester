#include<stdio.h>

int main ()
{
    int num1,num2,num3,i,sum=0;

    printf("Please enter the three number:");

    scanf("%d %d %d",&num1,&num2,&num3);

    for(i=num1;i<=num2;i++)
    {
        if(i%num3==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
