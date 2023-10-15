#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char name[10];
	
	printf("\n Enter the elements: ");
	scanf("%s",name);
	
	printf("\n Size of the string is: %i",strlen(name));
	
	printf("\n Reverse of the string is: %s",strrev(name));
	
	return 0;
}
	