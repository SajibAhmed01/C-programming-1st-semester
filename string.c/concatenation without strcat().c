#include<stdio.h>

int main()
{
    char s1[100],s2[100];

    printf("Enter the string s1:");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter the string s2:");
    fgets(s2,sizeof(s2),stdin);


    int i=0,j=0,len=0;

    while(s1[i]!='\0')
    {
        len++;
        i++;
    }

    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }

    printf("New string=%s",s1);

    return 0;

}
