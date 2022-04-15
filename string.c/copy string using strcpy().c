#include<stdio.h>

int main()
{
    char s1[100],s2[100];

    printf("Enter the word:");
    gets(s1);

    strcpy(s2,s1);

    printf("%s",s2);
    return 0;
}
