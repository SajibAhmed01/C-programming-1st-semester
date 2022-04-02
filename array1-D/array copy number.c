#include<stdio.h>

int main()
{
    int array1[100],number,i,array2[100];

    printf("How many number:");
    scanf("%d",&number);

    for(i=0;i<number;i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("\n");

    for(i=0;i<number;i++)
    {
        printf("ARRAY1 = %d\n",array1[i]);
    }

    for(i=0;i<number;i++)
    {
        array2[i]=array1[i];
    }

    printf("\n");

    for(i=0;i<number;i++)
    {
        printf("ARRAY2 = %d\n",array2[i]);
    }

    return 0;
}
