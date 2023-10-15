#include<iostream>

using namespace std;

int main()
{
	int i;
	float n,s = 0;
	
	cout<<"\n The given series is: ";
	cout<<"\n 1X(1-0) + 2X(2-1) + 3X(3-2) + ...... + nX(n-(n-1)) ";
	cout<<"\n Enter the value of n: ";
	cin>>n;
	
	for(i = 1; i <= n; i++)
	{
		s = s + i*(i-(i-1));
	}
	
	cout<<"\n The output of the series after putting n = "<<n<<" is: "<<s;
	
	return 0;

}