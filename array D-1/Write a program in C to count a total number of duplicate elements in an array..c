#include<stdio.h>

int main()
{
    int x,i,j,count=0;

    printf("Please enter the array size:");
    scanf("%d",&x);
    int s1[x];

    for(i=0;i<x;i++)
    {
        printf("s1[%d]=",i);
        scanf("%d",&s1[i]);
    }

    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(s1[i]==s1[j])
            {
                count++;
                break;
            }
        }
    }

    printf("count value=%d\n",count);
    return 0;
}
