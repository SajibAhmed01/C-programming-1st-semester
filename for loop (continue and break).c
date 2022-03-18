#include<stdio.h>

int main ()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        if(i%2==0)
            continue;
        for(j=0;j<5;j++)
        {
            if(j>3)
                break;
            printf("Loop run = %d, j = %d\n",i,j);
        }
    }

    return 0;
}
