#include<stdio.h>

int main() {
   char s1[100], s2[100];
   int i;

   printf("\nEnter two strings :");
   gets(s1);
   gets(s2);
   i = 0;
   while (s1[i] == s2[i] && s1[i] != '\0')
      i++;
   if (s1[i] > s2[i])
      printf("s1 is greater than s2");
   else if (s1[i] < s2[i])
      printf("s1 is less than s2");
   else
      printf("s1 is equal to s2");

   return 0;
}
