#include<iostream>

using namespace std;

int main()
{
	int x, y, *a, *b, temp;
	
	cout<<"\n Enter the values of x and y: ";
	cin>>x>>y;
	
	cout<<"\n Before Swapping: \n x = "<<x<<"\n y = "<<y;
	
	a = &x;
	b = &y;
	
	temp = *b;
	*b = *a;
	*a = temp;
	
	cout<<"\n After Swapping:\n x = "<<x<<"\n y = "<<y;
	
	return 0;
}
	
	
	
	
	
	