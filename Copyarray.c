// Write a C program to copy one array to another using pointers

#include <stdio.h>
#define SIZE 100
 void copy(int *arr, int size)
 {
   int i;
   for(i = 0; i <size; i++)
   {
    printf(" %d", *(arr + i));
   }
 }
 
int main()
{
 int arr1[SIZE], arr2[SIZE],size, i;
 int *ptr1 = arr1; 
 int *ptr2 = arr2; 
 int *arr3 = arr1+9; 
 printf("Enter size of array: ");
 scanf("%d", &size);
 printf("Please input arr1 elements: ");
 for(i=0; i<size; i++)
 {
    scanf("%d",ptr1 + i); 
 }
 printf("\narr1 elements before coping: ");
 copy(arr1,size);
 
 printf("\narr2 elements before coping: ");
 copy(arr2,size);
 while(ptr1 <=arr3){
   *ptr2 = *ptr1;
    ptr1++;
    ptr2++;
 }
 printf("\narr1 elements after coping: ");
 copy(arr1,size);
 printf("\narr2 elements after coping: ");
 copy(arr2,size);
}
