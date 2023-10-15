#include<iostream>

using namespace std;

class Series
{
	int n,i,s,fact;
	
	public:
	
	void input()
	{
		cout<<"\n The given series is:";
		cout<<"\n 1 + 2!/2 + 3!/3 + .... + n!/n";
		cout<<"\n Enter the value of n: ";
		cin>>n;
	}
	
	void process()
	{
		i=1;
		s=1;
		fact=1;
		
		while(i<n)
		{
			i++;
			fact = fact*i;
			while(n>0)
			{
				s = s + fact/i;
				break;
			}
		}
	}
	
	void display()
	{
		cout<<"\n The output of the series after putting n = "<<n<<" is: "<<s;
	}
};

int main()
{
	Series obj;
	
	obj.input();
	obj.process();
	obj.display();
}