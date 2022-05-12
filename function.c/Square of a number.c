#include<stdio.h>

void squre(int a)
{
    int i;
    printf("squre=%d\n",a*a);

}

int main ()
{
    int s1,x,i;

    printf("Enter the number of x:\n");
    scanf("%d",&x);

    for(i=1; i<=x; i++)
    {
        printf("enter the number:\n");
        scanf("%d",&s1);
        squre(s1);
    }
}
