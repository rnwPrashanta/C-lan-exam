// Write a C program to find square of each elements of an 1D array using Pointer
#include<stdio.h>
int main(){
    int arr[100],n,i;
    int*ptr;

    printf("Enter number of eleements to be entered in array:");
    scanf("%d",&n);

    printf("Enter %d eleements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    ptr=arr;
    for(i=0;i<n;i++){
        *(ptr+i)=(*(ptr+i))*(*(ptr+i));
    }
    printf("square of array elements:\n");
    for(i=0;i<n;i++){
        printf("%d",*(ptr+i));
    }
    printf("\n");
}

































































