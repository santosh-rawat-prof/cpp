#include<iostream>

using namespace std;

class Circle
{
   public:
    void input(float r)
    {
      cout<<"\nEnter Radius: ";
      cin>>r;           
    }
    float area()
    {
	  float r;
      input(r);
      cout<<"\nArea of a circle is:"<<(3.14*r*r);
    }
};
int main()
{
  Circle obj;
  
  obj.area();
  
  return 0;
}




