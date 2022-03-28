#include<stdio.h>

int main ()
{
    int number,row,collum;

    printf("Please enter the number:");
    scanf("%d",&number);

    for(row=number;row>=1;row=row-1)
    {
        for(collum=1;collum<=row;collum++)
        {
            printf("% d ",collum);
        }
        printf("\n");
    }

    return 0;
}
