#include<iostream>

using namespace std;

int main()
{
	int i, j=0, size=0, flag=0;
	
	char name[100], rev[100];
	
	cout<<"\n Enter any string to be checked to be palindrome or not: ";
	cin>>name;
	
	for(i = 0; name[i] != '\0'; i++)
	{
		size++;
	}
	
	for(i = size - 1; i >= 0; i--)
	{
		rev[j] = name[i];
		j++;
	}
	
	rev[j] = '\0';
	
	for(i=0; i<size; i++)
	{
		if(name[i] != rev[i])
		{
			flag = 1;
			break;
		}
	}
	
	if(flag == 0)
	{
		cout<<"\n Entered string is palindrome\n";
	}
	else
	{
		cout<<"\n Entered string is not a palindrome\n";
	}
	
	return 0;
}
		