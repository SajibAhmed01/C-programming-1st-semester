#include<stdio.h>

int main()
{
    int x,i;
    printf("enter the array size:");
    scanf("%d",&x);
    int s[x],y,max,mini;

    for(i=0;i<x;i++)
    {
        printf("s[%d]=",i);
        scanf("%d",&s[i]);
    }
    max=s[0];
    printf("maximum value:\n");
    for(i=0;i<x;i++)
    {
        if(s[i]>max)
        max=s[i];
    }
printf("max=%d\n",max);

  mini=s[0];
  printf("minimum value:\n");
    for(i=0;i<x;i++)
    {
        if(s[i]<mini)
        mini=s[i];
    }
printf("max=%d\n",mini);

    return 0;
}
