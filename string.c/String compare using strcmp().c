#include<stdio.h>

int main()
{
    char s1[100],s2[100];

    printf("Enter the string s1:");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter the string s2:");
    fgets(s2,sizeof(s2),stdin);


    int a;
    a=strcmp(s1,s2);

    if(a==0)
    {
        printf("String is same:\n");
    }

    else
    {
         printf("String is not same:\n");
    }

    return 0;
}
