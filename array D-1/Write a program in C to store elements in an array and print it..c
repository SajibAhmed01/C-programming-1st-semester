#include<stdio.h>

int main()
{
    int i,x;
    printf("enter the array size:");
    scanf("%d",&x);
    int s[x];

    for(i=0;i<x;i++)
    {
        printf("s[%d]=",i);
        scanf("%d",&s[i]);
    }

    printf("print output:");
    for(i=0;i<x;i++)
    {
        printf("%d\n",s[i]);
    }
    return 0;
}
