#include<iostream>

using namespace std;
int rec(int);
int main()
{
 int num,fact;

 cout<<"Enter any number: ";
 cin>>num;

 fact=rec(num);
 cout<<"Factorial value of "<<num<< " = "<<fact;
 
 return 0;
}
int rec(int x)
{
  int f;

  if(x==0)
    return (1);
  else
  return(f=x*rec(x-1));
}





