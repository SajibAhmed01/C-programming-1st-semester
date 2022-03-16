#include<stdio.h>

int main ()
{

int choice;

double c,f;

printf("Temperature conversion menu\n");
printf("1.Fahrenheit to Celsius\n");
printf("2.Celsius to Fahrenheit\n");
printf("Enter the choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:
    {
        printf("Enter the Fahrenheit number:");
        scanf("%lf",&f);
        c=(5*f-180)/9;
        printf("The Celsius value = %lf\n",c);
        break;
    }
case 2:
    {
         printf("Enter the Celsius number:");
        scanf("%lf",&c);
        f=(9*c+180)/5;
        printf("The Fahrenheite value = %lf\n",f);
        break;
    }

    default:
    {
        printf("Not converter value:");
    }

}

    return 0;
}
