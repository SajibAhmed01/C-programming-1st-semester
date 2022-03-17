#include<stdio.h>

int main ()
{
    int num1,num2,larger;

    printf("Enter the two number:");
    scanf("%d %d",&num1,&num2);

    larger= num1>num2 ? num1 : num2 ;

    printf("Larger number = %d\n",larger);

    return 0;
}
