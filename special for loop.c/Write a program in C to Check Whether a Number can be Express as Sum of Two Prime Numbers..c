#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int num,i,j,temp1,temp2,ctr=0;
printf("input the number:\n");
scanf("%d",&num);
for(i=2;i<=num/2;i++){
temp1=i;
temp2=num-i;
for(j=2;j<=i/2;j++){
if(i%j==0){ctr++;break;}
}
if(ctr==0){
for(j=2;j<=(num-i)/2;j++){
if((num-i)%j==0){ctr++;break;}
}
if(ctr==0) printf("%d can be written as %d + %d.\n ",num,i,num-i);
}
ctr=0;
}
return 0;
}
