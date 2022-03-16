#include<stdio.h>

int main ()
{
    char opra;

    double num1,num2, value;

    printf("1.'+' Summation:\n");
    printf("2.'-' Minus:\n");
    printf("3.'*' Multiply:\n");
    printf("4.'/' Divission:\n");

    printf("Enter the operator number +,-,*,/");
    scanf("%c",&opra);

    switch(opra)
    {
    case '+' :
    {
        printf("Enter the two number:");
        scanf("%lf %lf",&num1,&num2);
        value=(num1+num2);
                  printf("Summation = %lf\n",value);
                  break;
    }

    case '-' :
    {
        printf("Enter the two number:");
        scanf("%lf %lf",&num1,&num2);
        value=(num1-num2);
                  printf("Minus = %lf\n",value);
                  break;

    }

    case '*' :
    {
        printf("Enter the two number:");
        scanf("%lf %lf",&num1,&num2);
        value=(num1*num2);
                  printf("Multiply = %lf\n",value);
                  break;
    }

    case '/' :
    {
        printf("Enter the two number:");
        scanf("%lf %lf",&num1,&num2);
        value=(num1/num2);
                  printf("Divission = %lf\n",value);
                  break;

    }

    default:
        {
            printf("Not calculation:");
            break;
        }
    }

    return 0;
}
