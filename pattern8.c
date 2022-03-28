#include<stdio.h>

int main ()
{
    int number,row,collum;

    printf("please enter the number:");
    scanf("%d",&number);

    for(row=number;row>=1;row--)
    {
        for(collum=1;collum<=row;collum++)
        {
            printf(" * ",collum);
        }

        printf("\n");
    }

    return 0;
}
