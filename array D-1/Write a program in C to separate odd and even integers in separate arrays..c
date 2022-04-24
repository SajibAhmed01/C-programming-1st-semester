#include<stdio.h>

int main()
{
    int x,i;
    printf("Enter the array size:");
    scanf("%d",&x);
    int s[x];

    for(i=0;i<x;i++)
    {
        printf("s[%d]=",i);
        scanf("%d",&s[i]);
    }
    for(i=0;i<x;i++)
    {
        if(s[i]%2==0)
        {
            printf("even number= %d\n",s[i]);
        }
         else
        {
            printf("odd number=%d\n",s[i]);
        }

    }
    return 0;
}
