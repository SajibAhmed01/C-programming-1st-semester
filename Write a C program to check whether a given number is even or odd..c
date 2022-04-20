#include<stdio.h>

int main()
{
    int x;

    printf("Enter the  number:");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("even number:");
    }

 else if(x%2!=0)
    {
        printf("odd number:");
    }

    return 0;
}
