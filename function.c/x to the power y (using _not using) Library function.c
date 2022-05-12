#include<stdio.h>
 void power_function(int b,int e)
{
    int i,result=1;
    for(i=1;i<=e;i++)
    {
     result=result*b;
    }
    printf("%d\n",result);
}

int main()
{
    int base,exp,result;

    printf("Enter the base=\n");
    scanf("%d",&base);

    printf("Enter the exp=\n");
    scanf("%d",&exp);

    power_function(base,exp);

}
