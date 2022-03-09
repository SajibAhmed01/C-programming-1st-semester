#include<stdio.h>

int main ()
{
    int a,b,c;

    printf("Please enter the number:");

    scanf("%d",&c);

    for(b=1;b<=c;b++)
    {
        for(a=1;a<=10;a++)
        {
            printf("%d * %d = %d\n",a,b,a*b);
        }
    }

    return 0;
}
