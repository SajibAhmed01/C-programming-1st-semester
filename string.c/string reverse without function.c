#include<stdio.h>

int main()
{
    char s1[100],s2[100];
    printf("Enter the string s1:");
    fgets(s1,100,stdin);

    int i=0,len=0,j=0;
    while(s1[i]!='\0')
    {
        len++;
        i++;
    }

    for(j=0,i=len-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }


    printf("reverse=%s",s2);
    return 0;
}
