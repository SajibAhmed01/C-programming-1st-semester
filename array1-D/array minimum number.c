#include<stdio.h>

int main()

{
    int a[100],number,i,mini;

    printf("How many number:");
    scanf("%d",&number);

    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }

    mini=a[0];
    for(i=0;i<number;i++)
    {
        if(mini>a[i])
        {
            mini=a[i];
        }
    }

    printf("MINIMUM = %d\n",mini);

    return 0;
}
