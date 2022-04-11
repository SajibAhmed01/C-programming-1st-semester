#include<stdio.h>

int main()
{
    int row,collum,i,j,a[10][10],uppersum=0,lowersum=0;

    printf("How many number:");
    scanf("%d %d",&row,&collum);

    printf("Input value:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<collum;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Print:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<collum;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<row;i++)
    {
        for(j=0;j<collum;j++)
        {
            if(i<j)
            {
                uppersum=uppersum+a[i][j];
            }
            if(i>j)
            {
                lowersum=lowersum+a[i][j];
            }

        }
        printf("\n");
    }

   printf(" sum of diagonal = %d\n",uppersum);
   printf(" sum of diagonal = %d\n",lowersum);

   return 0;
}


