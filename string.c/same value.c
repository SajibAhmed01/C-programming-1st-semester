#include<stdio.h>

int main()
{
    char s1[50],s2[50];
    int d;
    printf("Enter the string s1:");
    fgets(s1,50,stdin);
    printf("Enter the string s2:");
    fgets(s2,50,stdin);



    d = strcmp(s1,s2);

    if(d==0)
    {
        printf("same");
    }

    else
    {
        printf("Not same:");
    }

    return 0;
}
