#include<stdio.h>
int sum(int a,int b)
{
    printf("sum=%d\n",a-b);
}
int main ()
{
    int s1,s2,i,x;

    printf("enter the number of x:\n");
    scanf("%d",&x);

    for(i=1;i<x;i++)
    {
        printf("please enter the number:");
        scanf("%d %d",&s1,&s2);
        sum(s1,s2);
    }

}
