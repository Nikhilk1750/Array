// Write a C program to count frequency of each element in an array.


#include<stdio.h>
int main()
{
	int i,j,n,count,arr[50];
	puts("Enter the array size:");
	scanf("%d",&n);
	puts("Enter the array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	puts("\nArray elements are:");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			break;
		}
		if(i==j)
		{
			for(j=0;j<n;j++)
			if(arr[j]==arr[j])
			count++;
			printf("\n%d  %d\n",arr[i],count);
		}
	}
}
