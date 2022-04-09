#include<stdio.h>

int main()
{
    int i,j,x,y,b[10][10];
    printf("How many two array number:");
    scanf("%d %d",&x,&y);
    int  a[x][y];

    printf("Input the matrix:\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("MARTIX:\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            b[i][j]=a[i][j]*a[i][j];
        }
        printf("\n");
    }
    printf("MARTIX addition A+A =\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

