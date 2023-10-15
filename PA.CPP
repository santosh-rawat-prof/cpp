#include<stdio.h>
#include<conio.h>

void main()

{
	int i=0,j,length=0;
	char word[80];

	clrscr();

	printf("\n enter a string to be checked to be a palindrome or not: ");
	scanf("%s",&word);

	while(word[i]!=NULL)
	{
		length++;
		i++;
	}
	i=0;
	j=length-1;


	while(i<=length/2)
	{
		if(word[i]==word[j])
		{
		i++;
		j--;
		}
		else
		{
		break;
		}
	}
	if(i>=j)
	printf("\n the entered string is palindrome");
	else
	printf("\n the entered string is not palindrome");

	getch();
}