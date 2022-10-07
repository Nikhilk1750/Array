// Write a C program to copy all elements from an array to another array.

#include<stdio.h>
int main()
{
	int arr[50],arr1[50],size,i;
	printf("Enter the size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elements:");
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	for(i=0;i<size;i++)
	{
	arr1[i]=arr[i];
	}
	printf("\nAfter coping the array to array1:");
	for(i=0;i<size;i++)
	{
		printf("%d",arr1[i]);
	}
}
