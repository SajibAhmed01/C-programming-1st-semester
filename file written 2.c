#include<stdio.h>

int main()
{
    FILE *file;
    file=fopen("text.txt","w");
    char s1[20];
    int i,lengh=0;
    gets(s1);
    lengh=strlen(s1);

    if(file==NULL)
    {
        printf("file is not exist\n");
    }
    else
    {
        printf("file is open\n");
        for(i=0;i<lengh;i++)
        {
            fprintf(file,"%s\n",s1);
        }
        fclose(file);
    }
    return 0;
}

