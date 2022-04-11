#include<stdio.h>

int main()
{
    int x,y,z,w,i,j,k,a[10][10], b[10][10],c[10][10],sum=0;

    printf("how many number:\n");
    scanf("%d %d",&x,&y);
    printf("how many number:\n");
    scanf("%d %d",&z,&w);

    while(y!=z)
    {
        printf("Error !!!!\n");

        printf("how many number:\n");
        scanf("%d %d",&x,&y);
        printf("how many number:\n");
        scanf("%d %d",&z,&w);
    }
    printf("Input1:\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Input2:\n");

    for(i=0; i<z; i++)
    {
        for(j=0; j<w; j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("print1=\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("print2=\n");
    for(i=0; i<z; i++)
    {
        for(j=0; j<w; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("multiple=\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<w; j++)
        {
           for(k=0;k<y;k++)
           {
               sum=sum+(a[i][k]*b[k][j]);
           }
           c[i][j]=sum;
           sum=0;
        }
        printf("\n");
    }

    printf("multiple result:\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<w; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

  return 0;
}

