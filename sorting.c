// Write a C program to sort an int array using pointers. [ increasing order / decreasing order ]


#include<stdio.h>
#define SIZE 50
void ace(int *ptr,int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(ptr[i]>=ptr[j])
			{
				int temp;
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	
}
void dec(int *ptr,int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(ptr[i]<=ptr[j])
			{
				int temp;
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	
}
int main()
{
 int arr1[SIZE], arr2[SIZE],size, i;
 scanf("%d",&size);
 int *ptr1 = arr1; 
 for(i=0; i<size; i++)
 {
    scanf("%d",ptr1 + i); 
 }
 puts("Before sorting:");
 for(i=0; i<size; i++)
 {
 printf("%d ",*(ptr1+i));

}
int x;
puts("\nEnter the x value:");
scanf("%d",&x);
switch(x)
{
	case 1: ace(arr1,size);
				printf("\n");
				puts("After sorting increasing order is:");
				for(i=0;i<size;i++)
					{
						printf("%d ",*(ptr1+i));
					}
					break;
	case 2: dec(arr1,size);
				printf("\n");
				puts("After sorting the decreasing order is:");
				for(i=0;i<size;i++)
					{
						printf("%d ",*(ptr1+i));
					}
					break;				
}

}
