#include<stdio.h>

int main ()
{
    int x;

    printf("Please enter the number:");
    scanf("%d",&x);

     printf("x=%d\n",x++);//x=10
     printf("x=%d\n",x);//x=11
     printf("x=%d\n",++x);//x=12
     printf("x=%d\n",x);//x=12

     printf("x=%d\n",x--);//x=10
     printf("x=%d\n",x);//x=9
     printf("x=%d\n",--x);//x=10
     printf("x=%d\n",x);//x=10

    return 0;
}
