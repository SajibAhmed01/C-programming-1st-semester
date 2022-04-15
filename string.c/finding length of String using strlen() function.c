#include<stdio.h>
int main()
{
    char s1[100];
    printf("Enter the name:");
    gets(s1);

    int len=strlen(s1);
    printf("%d",len);
    return 0;
}
