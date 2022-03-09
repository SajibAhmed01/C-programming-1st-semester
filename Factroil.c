#include<stdio.h>

int main ()
{
    int a,b,c=1;

    printf("Please enter the number:");

    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
       c=c*b;
    }
    printf("%d\n",c);

    return 0;
}
