#include<stdio.h>

int main ()
{
    int a,b,c,sum=0;

    printf("Please enter the number:");

    scanf("%d",&c);

    for(a=1;a<=c;a++)
    {
        for(b=1;b<=10;b++)
        {
            sum=sum+a;
            printf("%d * %d = %d\n",b,a,sum );
            if(b==10)
            {
              sum=0;
            }

        }

        printf("\n");
    }

    return 0;
}
