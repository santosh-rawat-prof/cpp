#include<iostream>

using namespace std;

int main()
{
  int *a, *b;

  int x = 10, y = 20;

  a = &x;
  b = &y;

  cout<<"\n Sum = "<<( *a + *b )<<endl;

  return 0;
}
