#include<stdio.h>

void passing_array(int g1[])
{
    int i,x;
    printf("Enter the number:");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("%d",g1[i]);
    }
}


int main()
{
    int x,i;

    printf("Enter the number:");
    scanf("%d",&x);

    int s1[x];
    for(i=0;i<x;i++)
    {
        printf("s1[%d]=\n",i);
        scanf("%d",&s1[i]);
    }
    passing_array(s1);
}
