/*Perfect number is a positive number which sum of all positive divisors excluding that number is equal to that number. For example 6 is perfect number since divisor of 6 are 1, 2 and 3.  Sum of its divisor is 1 + 2+ 3 = 6*/
#include <stdio.h>
int  main()
{
  int n,i,sum;
  int mn,mx;

  printf("Input the  number : ");
  scanf("%d",&n);
    sum = 0;
 printf("The positive divisor  : ");
    for (i=1;i<n;i++)
      {
      if(n%i==0)
         {
         sum=sum+i;
         printf("%d  ",i);
         }
       }
printf("\nThe sum of the divisor is : %d",sum);
    if(sum==n)
      printf("\nSo, the number is perfect.");
    else
      printf("\nSo, the number is not perfect.");
printf("\n");

return 0;
}
