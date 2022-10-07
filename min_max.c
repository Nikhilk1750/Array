// Write a C program to find maximum and minimum element in an array.


#include<stdio.h>

int check_max(int *p,int n)
{
	int max=0,i;
	for(i=0;i<n;i++)
	{
		if(p[i]>=max)
		{
			max=p[i];
		}
	}
	return max;
}
int check_min(int *p,int n)
{
	int min=9,i;
	for(i=0;i<n;i++)
	{
		if(p[i]<=min)
		{
			min=p[i];
		}
	}
	return min;
}

int main()
{
	int arr[100];
	int n,i;
	int *ptr=arr;

	printf("Enter a number of element : ");
	scanf("%d",&n);

	printf("Enter a Array element :\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Max Number is : %d\n",check_max(ptr,n));
	printf("Min Number is : %d\n",check_min(ptr,n));
}

