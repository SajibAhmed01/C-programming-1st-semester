#include<stdio.h>

void passing_array(char g1[])
{
        printf("%s\n",g1);

}


int main()
{
    char s1[100];
    gets(s1);
    passing_array(s1);
}

