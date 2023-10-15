#include<iostream>

using namespace std;

int main()
{
  int fact=1,i,n;

  cout<<"\n Enter any number: ";
  cin>>n;
  
  i = 1;

  while(i<=n)
  {
    fact=fact*i;
	i++;
  }

   cout<<"\n The factorial of "<<n<<" is "<<fact;
   
   return 0;
}