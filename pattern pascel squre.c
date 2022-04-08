#include<stdio.h>

int main()
{
    int number,row,collum;

    printf("Please enter the number:");
    scanf("%d",&number);

    for(row=1; row<=number; row++)
    {
        for(collum=1; collum<=number-row; collum++)
            printf(" ");
        for(collum=1; collum<=row; collum++)
            printf("%d",collum);

for(collum=row-1; collum>=1; collum--)
            printf("%d",collum);
        printf("\n");
    }

    for(row=number-1; row>=1; row--)
    {
        for(collum=1; collum<=number-row; collum++)
            printf(" ");
        for(collum=1; collum<=row; collum++)
            printf("%d",collum);

for(collum=row-1; collum>=1; collum--)
            printf("%d",collum);
        printf("\n");
    }





    return 0;
}

