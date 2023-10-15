#include<iostream>
#include<math.h>

using namespace std;

class Number
{
	int n;
	public:
	
	void input()
	{
		cout<<"\n Enter any number: ";
		cin>>n;
	}

	int r,org,sum;
	
	void aprocess()
	{
		sum = 0;
		org = n;
		
		while(org>0)
		{
			r = org % 10;
			sum = sum + (r*r*r);
			org = org/10;
		}
		
		if(sum == n)
			cout<<" "<<n<<" is Armstrong\n";
		else
			cout<<" "<<n<<" is not Armstrong\n";
	}
	
	void fprocess()
	{
		
		/*root = sqrt(5.0 * n * n + 4.0);
		iroot = root;
		root1 =  sqrt(5.0 * n * n - 4.0);
		iroot1 = root1;
		
		if(root == iroot || root1 == iroot1)
			cout<<" "<<n<<" is Fibonacci\n";
		else
			cout<<" "<<n<<" is not Fibonacci\n";*/
		
		int a = 0, b = 1, i = 0;
		sum = 0;
		
		cout<<"\n Fibonacci series of "<<n<<" elements are: \n";
		cout<<" "<<a<<" "<<b;
		while(i < (n-2))
		{
			sum = a + b;
			a = b;
			b = sum;
			
			cout<<" "<<sum;
			i++;
		}
		
		
	}

	int num;
	int d,rev;
	
	void pprocess()
	{
		rev = 0;
		num = n;
		while(num>0)
		{
			d = num % 10;
			rev = rev * 10 + d;
			num = num / 10;
		}
		
		if(n == rev)
			cout<<" "<<n<<" is Palindrome\n";
		else
			cout<<" "<<n<<" is not Palindrome\n";
	}
	
	void rprocess()
	{
		rev = 0;
		num = n;
		
		while(num>0)
		{
			d = num % 10;
			rev = rev * 10 + d;
			num = num / 10;
		}
		cout<<"\n Reverse of "<<n<<" is "<<rev<<endl;
	}
};

int main()
{
	int ch;
	
	Number num;
	
	num.input();
	
	cout<<"\n Press 1 to check whether entered number is Armstrong,";
	cout<<"\n Press 2 to find Fibonacci series of entered numbers of elements,";
	cout<<"\n Press 3 to check whether entered number is Palindrome,";
	cout<<"\n Press 4 to find reverse of the entered number,";
	cout<<"\n Enter your choice: ";
	cin>>ch;
	
	switch(ch)
	{
		case 1: num.aprocess();
				break;
				
		case 2: num.fprocess();
				break;
				
		case 3: num.pprocess();
				break;
				
		case 4: num.rprocess();
				break;
				
		default:cout<<"\nWrong Choice";
				break;
	}
	
	return 0;
}