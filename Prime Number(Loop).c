#include<stdio.h>

int main ()

{
    int a,b;
   int count=0;

    printf("Please enter the number:");

    scanf("%d",&a);
    if(a<=1) {
        printf("Not prime number:");
    }

    for(b=2;b<a;b++)
    {
        if(a%b==0)
        {   count++;
            break;
        }
    }

    if(count==0)
    {
        printf("The prime number:");
    }

    else if (count==1)
    {
        printf("Not prime number:");
    }

    return 0;
}
