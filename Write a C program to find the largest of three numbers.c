#include<stdio.h>

int main()
{
    int x,y,z;

    printf("Please enter the three nummber:");
    scanf("%d %d %d",&x,&y,&z);

    if(x>y&&x>z)
    {
        printf("the number of x is longer= %d\n",x);
    }

    if(z>y&&z>x)
    {
        printf("the number of z is longer= %d\n",z);
    }

    else
    {
        printf("the number of y is longer= %d\n",y);
    }

    return 0;
}
