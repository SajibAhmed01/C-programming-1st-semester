#include<stdio.h>

int main()
{
    char s1[100],s2[100];
    printf("Enter the string s1:");
    fgets(s1,100,stdin);
    printf("Enter the string s1:");
    fgets(s2,100,stdin);

    strupr(s1);
    strlwr(s2);

    printf("Upper case %s\n",s1);
    printf("lower case %s\n",s2);

    return 0;
}
