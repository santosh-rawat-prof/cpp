#include<iostream>

using namespace std;
class Reverse
{
	int a[10];
	int i;
	
	public:
	
	void input()
	{
		cout<<"\n Enter the elements: ";
		for(i = 0; i < 10; i++)
		{
			cin>>a[i];
		}
	}
	
	void display()
	{
		cout<<"\n After reversing we get: ";
		for(i = 9; i >= 0; i--)
		{
			if(i == 0)
				cout<<" "<<a[i];
			else
				cout<<" "<<a[i];
		}
	}
};

int main()
{
	Reverse obj;
	obj.input();
	obj.display();
	
	return 0;
}