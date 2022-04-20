#include<stdio.h>

int main()
{
    int age;

    printf("Please enter  the age:");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Congratulation! You are eligible for casting your vote.");
    }

    else
    {
        printf("you are not eligible for casting your vote:\n");
         printf("You would be able to caste your vote after %d year.\n",18-age);
    }
    return 0;
}
