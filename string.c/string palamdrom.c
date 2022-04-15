#include<stdio.h>

int main()
{
   char s1[30];
   char s2[30];

   printf("Enter the string s1:");
   gets(s1);
   int i,len=0,j;
   while(s1[i]!='\0')
   {
       i++;
      len++;
   }

   for(j=0,i=len-1;i>=0;i--,j++)
   {
       s2[j]=s1[i];
   }

   printf("%s\n",s1);
   printf("%s\n",s2);
   s2[j]='\0';

   int d=strcmp(s1,s2);

   if(d==0)
   {
       printf("Plaindrom number:\n");
   }
   else
   {
       printf("Not palaindrom:\n");
   }


   return 0;
}
