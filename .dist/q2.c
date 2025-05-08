// Create a C program to find the largest element in an 1D array

#include<stdio.h>
int main(){
   int n,i;
   int largest;

   printf("enter the number of elements:");
   scanf("%d", &n);

   int arr[n];
   printf("Enter the elements: \n");
   for (i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }
   largest = arr[0];

   printf(" Enter the elements of the array:\n");
   for(i=1;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
   }
   printf("the largest element in the array is : %d",largest);
   return 0;
}












