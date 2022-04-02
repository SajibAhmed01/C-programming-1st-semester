#include<stdio.h>

int main()
{
    int a[100],number,i,sum=0;

    printf("How many number:");
    scanf("%d",&number);


    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<number;i++)
    {
      sum=sum+a[i];
    }
      printf("SUM = %d\n",sum);


    return 0;
}
