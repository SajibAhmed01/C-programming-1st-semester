#include<stdio.h>

int main()
{
    FILE *file;
    file=fopen("max.txt","r");
    char s1[20];
    fgets(s1,20,file);
    if(file==NULL)
    {
        printf("file not exist\n");
    }
    else
    {
        printf("file is exist\n");
        printf("%s",s1);
        fclose(s1);
    }
    return 0;
}
