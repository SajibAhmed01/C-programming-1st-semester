#include<stdio.h>

int main()
{
    char s1[100];
    printf("Enter the string s1:");
    fgets(s1,sizeof(s1),stdin);

    strrev(s1);

    printf("Reverse string= %s\n",s1);
    return 0;
}
