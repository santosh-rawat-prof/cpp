#include<iostream>

using namespace std;

int main()
{
	int a = 10;
	int *b = &a;
	int **c = &b;
	
	cout<<"value of a is: "<<a<<endl;
	
	cout<<"address of a is: "<<&a<<endl;
	
	cout<<"value of b is: "<<b<<endl;
	
	cout<<"address of b is: "<<&b<<endl;
	
	cout<<"value of *b is: "<<*b<<endl;
	
	cout<<"value of c is: "<<c<<endl;
	
	cout<<"address of c is: "<<&c<<endl;
	
	cout<<"value of *c is: "<<*c<<endl;
	
	cout<<"value of **c is: "<<**c<<endl;
	
	return 0;
	
}