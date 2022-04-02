#include<stdio.h>

int main()
{
    int a[100],number,i,max;

    printf("How many number:");
    scanf("%d",&number);

    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];

    for(i=0;i<number;i++)
    {
        if(max<a[i])
        max=a[i];
    }

printf("maximum number = %d\n",max);
    return 0;
}
