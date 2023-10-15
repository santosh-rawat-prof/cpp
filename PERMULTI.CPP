#include<iostream>

using namespace std;

class Person
{
  char name[100],gender[10],dob[100];
  
  public:
   void input()
   {
     cout<<"\nName: ";
     cin>>name;
     cout<<"DOB: ";
     cin>>dob;
     cout<<"Gender: ";
     cin>>gender;
   }
   void display()
   {
      cout<<"\nName: "<<name;
     cout<<"\nDOB: "<<dob;
     cout<<"\nGender: "<<gender;
   }
};

class Student: public Person
{
  char school[100],cls[10];
  
  public:
    void getdatas()
    {
      Person::input();
      cout<<"Name of School: ";
      cin>>school;
      cout<<"Class: ";
      cin>>cls;
    }
    void displays()
    {
      Person::display();
      cout<<"\nName of School: "<<school;
      cout<<"\nClass: "<<cls;
    }
};

class Teacher: public Person
{
  char school[100],subject[100];
   public:
    void getdatat()
    {
      Person::input();
      cout<<"Name of School: ";
      cin>>school;
      cout<<"Subject: "; 
      cin>>subject;
    }
    void displayt()
    {
      Person::display();
      cout<<"\nName of School: "<<school;
      cout<<"\nSubject: "<<subject;
    }
};

int main()
{
 Student s;
 Teacher t;
 
 cout<<"\n----Student----\n";
 cout<<"\nEnter Data:";
 s.getdatas();
 cout<<"\nDisplaying Data-\n";
 s.displays();
 cout<<"\n\n----Teacher----\n";
 cout<<"Enter Data:";
 t.getdatat();
 cout<<"\nDisplaying Data-\n";
 t.displayt();
 
 return 0;
}

