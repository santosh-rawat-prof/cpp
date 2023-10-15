#include<iostream>

float area(int);

using namespace std;

int main()
{
	int r;
	float a;
	
	cout<<"\n Enter the radius of the circle:  ";
	cin>>r;
	
	a = area(r);
	
	cout<<"\n Area of the cicle is: "<<a;
	
	return 0;
}

float area(int r)
{
	return(3.14*r*r);
}