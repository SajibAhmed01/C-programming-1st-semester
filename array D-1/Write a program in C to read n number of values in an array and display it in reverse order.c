#include<stdio.h>

int main()
{
    int i,x,count=0;

    printf("Enter the array size:");
    scanf("%d",&x);

    int s[x];

    for(i=0;i<x;i++)
    {
        printf("s[%d]=",i);
        scanf("%d",&s[i]);
    }
    printf("print:\n");
    for(i=0;i<x;i++)
    {
        printf("%d",s[i]);
    }

    for(i=0;i<x;i++)
    {
        count++;
    }
    printf("\nreverse:\n");
    for(i=count-1;i>=0;i--)
    {
        printf("%d",s[i]);
    }

    return 0;
}
