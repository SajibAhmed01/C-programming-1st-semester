#include<stdio.h>

int main ()
{
    int number,row,collum;

    printf("Please enter the number:");
    scanf("%d",&number);

    for(row=1;row<=number;row++)
    {
        for(collum=1;collum<=row;collum++)
        {
            printf(" %d ",collum%2);
        }
        printf("\n");
    }

    return 0;
}
