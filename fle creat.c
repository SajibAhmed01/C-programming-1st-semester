#include<stdio.h>

int main()
{
    FILE *file;

    file=fopen("student.txt","w");
    if(file==NULL)
    {
        printf("file no exist\n");
    }
    else
    {
        printf("file is open\n");
        fclose(file);
    }
    return 0;
}
