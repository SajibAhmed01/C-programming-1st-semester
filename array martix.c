#include<stdio.h>
int main()
{
    int a[3][4];
    int i,j,number;

    printf("How many number:");
    scanf("%d",&number);

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }

        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
