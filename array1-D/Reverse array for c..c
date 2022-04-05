#include<stdio.h>
int main(){

    int n,i;
    printf("Array Size: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){

    printf("Elements: ");
    scanf("%d",&arr[i]);


    }

    printf("\n");
    printf("Reverse Array: ");
    for(i=n-1;i>=0;i--){
    printf("%d\t",arr[i]);

    }

    printf("\n");

    return 0;


}
