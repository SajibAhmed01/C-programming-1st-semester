#include<stdio.h>

int main()
{
    char s1[100],s2[100],s3[100];

    printf("Enter the two string s1,s2:");
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);

    printf("Before swapping:\n");
    printf("%s",s1);
    printf("%s",s2);

   strcpy(s3,s1);
   strcpy(s1,s2);
   strcpy(s2,s3);

    printf("After swapping:\n");
    printf("%s",s1);
    printf("%s",s2);

    return 0;
}
