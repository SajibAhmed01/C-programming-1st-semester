#include<stdio.h>

int main ()
{
    int number,row,collum;

    printf("Please enter the number:");
    scanf("%d",&number);

    for(row=number;row>=1;row--)
    {
        for(collum=1;collum<=row;collum++)
        {
            printf("% c ",row+64);
        }
        printf("\n");
    }

    return 0;
}
