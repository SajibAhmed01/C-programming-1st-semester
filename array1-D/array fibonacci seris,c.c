#include<stdio.h>
int main()
{
    int a[100],number,i;

    printf("How many number:");
    scanf("%d",&number);



    a[0]=0;
    a[1]=1;
    for(i=2;i<number;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }

    printf("\n");

    for(i=0;i<number;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
