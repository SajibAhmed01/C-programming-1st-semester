#include<stdio.h>
int main()
{
    int x,y,z;

    printf("Please enter the number:");
    scanf("%d %d %d",&x,&y,&z);

    if(x==y&&y==z&&z==x)
    {
        printf(" Equilateral");
    }
     if((x==y&&y==z)||(x!=z&&y!=z))
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }

    return 0;
}
