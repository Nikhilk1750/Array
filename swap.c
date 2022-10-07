// Write a C program to swap two numbers using pointers

#include<stdio.h>
int swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int num1,num2;
	printf("Enter the num1 value:");
	scanf("%d",&num1);
	printf("\nEnter the num2 value:");
	scanf("%d",&num2);
	printf("\nBefore swaping num1=%d num2=%d",num1,num2);
	swap(&num1,&num2);
	printf("\nAfter swaping num1=%d num2=%d",num1,num2);
}
