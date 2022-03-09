#include<stdio.h>
#include<conio.h>
int main()
{
    int i, count=0, j,a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               count++;
               break;
           }
        }
        if(count==0 && i!=1)
            printf("%d\n", i);
        count = 0;
    }
    getch();
    return 0;
}

