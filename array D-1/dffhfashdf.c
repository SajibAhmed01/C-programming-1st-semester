#include<stdio.h>

int main()
{
    int X,Y,i;
    scanf("%d %d",&X,&Y);

    for(i=1;i<4;i++)
    {
        if(X>Y)
        {
            printf("Decrescente");
        }
        else
        {
            printf("Crescente");
        }
    }
    return 0;
}
