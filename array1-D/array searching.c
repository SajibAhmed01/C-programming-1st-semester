#include<stdio.h>

int main()
{
    int a[100],number,i,position,value;

    printf("How many number:");
    scanf("%d",&number);

    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }

    value=15;
    position =-1;

    for(i=0;i<number;i++)
    {
        if(value==a[i])
        {
            position=i+1;
            break;
        }
    }

    if(position==-1)
    {
        printf("item not found");
    }
    else
    {
        printf("The value is found  = %d\n",position);
    }

    return 0;
}
