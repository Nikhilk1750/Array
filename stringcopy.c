// Write a C program to copy one string to another string and find length of new string using pointers


#include<stdio.h>
#include<string.h> 
void strcopy(char *dest,char *src) 
{ 
	while(*src!='\0') 
    *dest++=*src++; 
    *dest='\0'; 
} 
int main() 
{ 
    char *str1[50];
	puts("Enter the string name:");
	fgets(str1,50,stdin); 
	printf("srt1=%s",str1);
    char str2[30]; 
  //strcpy(str2,str1); 
    strcopy(str2,str1);
    printf("str2=%s",str2);
	int length=strlen(str2)-1; 
	printf("%d",length);
 } 
 
