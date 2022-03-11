#include<stdio.h>

int main ()
{
    int Number1,Number2,remainder,GCD,LCD,n1,n2;
    printf("Please enter the two number:");
    scanf("%d %d",&Number1,&Number2);

       n1=Number1;
       n2=Number2;

    while(n2!=0)
    {
        remainder=(n1%n2);
        n1=n2;
        n2=remainder;
    }

    GCD=n1;
    LCD=(Number1*Number2)/GCD;

    printf("GCD = %d\n, LCD =%d\n",GCD,LCD);

    return 0;
}
