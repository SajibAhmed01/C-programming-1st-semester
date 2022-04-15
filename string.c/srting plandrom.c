#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i,j,len=0,d;

    printf("Enter the string s1:");
    fgets(s1,100,stdin);
    while(s1[i]!='\0')
    {
        len++;
        i++;
    }
     s2[j]='\0';
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }

    printf("%s\n",s1);
    printf("%s\n",s2);



    return 0;
}
