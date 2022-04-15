#include<stdio.h>

int main()
{
    char s1[100];

    printf("Enter the name:");
    gets(s1);

    int i=0,len=0;

    while(s1[i]!='\0')
    {
        len++;
        i++;
    }
    printf("%d",len);
    return 0;
}

