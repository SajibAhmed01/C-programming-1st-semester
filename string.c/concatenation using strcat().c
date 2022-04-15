#include<stdio.h>

int main()
{
    char s1[20],s2[20];

    printf("How  many word:\n");
    gets(s1);
    printf("How  many word:\n");
    gets(s2);

    strcat(s1,s2);
    strcat(s2,s1);

    printf("New word=%s\n",s1);
    printf("New word=%s\n",s2);
    return 0;
}
