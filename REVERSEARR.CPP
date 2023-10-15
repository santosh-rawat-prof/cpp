#include<iostream>

using namespace std;

int main()
{
	char arr[10];
	int i;
	
	cout<<"\n Enter the elements: ";
	
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\n The reverse of the entered elements are: ";
	
	for(i=9;i>=0;i--)
	{
		cout<<" "<<arr[i];
	}
	
	return 0;
}