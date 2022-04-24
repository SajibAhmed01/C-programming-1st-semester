#include<stdio.h>
int main()
{
    int x,i;

    printf("Please enter the array size:");
    scanf("%d",&x);
    int s[x],s1[10];

    for(i=0;i<x;i++)
    {
        scanf("%d",&s[i]);
    }

    printf("print output:\n");
    for(i=0;i<x;i++)
    {
        printf("%d",s[i]);
    }

    for(i=0;i<x;i++)
    {
        s1[i]=s[i];
    }

    printf("\nprint copy number:\n");
    for(i=0;i<x;i++)
    {
        printf("%d",s1[i]);
    }
    getch();
}
