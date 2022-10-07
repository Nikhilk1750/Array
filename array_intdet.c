// Write a C program to insert and delete  an element in an array at specified position 
// write fns  insert(n) , delete(n), get(n) where  n is specfied position taken from user




#include<stdio.h>
#include<string.h>


void printmenu(void)
{
	printf("......MENU......\n");
	printf("i:insert\nd:delete\n");
	printf("x:exit\np:print\n");
}
void print(int *p,int n)
{
	int i=0;
	for(i=0;i<n;i++)
		printf("%d,",*(p+i));
}

void insert(int *p,int n)
{
	int i,pos,num;
	puts("Enter the insert element: ");
	scanf("%d",&num);
	printf("Enter a position : ");
	scanf("%d",&pos);
	for(i=n-1;i>=pos-1;i--)
	p[i+1]=p[i];
	p[pos-1]=num;
}

void delete(int *p,int n)
{
	int pos,i;
	printf("Enter the index to delete : ");
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	{
		p[i]=p[i+1];
	}

}

int cnt=0;
int main()
{
	int arr[100];
	int n,i;

	puts("Enter a number of element in array : ");
	scanf("%d",&n);

	puts("Enter a array elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		cnt++;
	}

	while(1)
	{
		char choice;
		printmenu();
		printf("Enter a choice : ");
		scanf("%c",&choice);

		switch(choice)
		{
			case 'i' :insert(arr,n);
				  break;
			case 'd' :delete(arr,n);
				  break;
			case 'p' :print(arr,n);
				  break;
			case 'x' :return 0;
			default : printf("Error :- Invalid entry\n");

		}
	}
}

