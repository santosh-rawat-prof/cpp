#include<iostream>
#define MAX 5

using namespace std;

struct Stack
{
    int arr[MAX];
    int top;
}s;

void push(int x);
void pop(); 
void display();

int main()
{
    s.top = -1;
    int ch,val;

    do
    {
       cout<<"\n Enter your Choice";
       cout<<"\n 1 For push / insert\n 2 For pop / delete\n 3 For display the stack\n ";
       cin>>ch;

       switch(ch)
       {
        case 1: cout<<"\n Enter the value to pass and insert: ";
                cin>>val;
                push(val);
                break;

        case 2: pop();
                break;

        case 3: display();
                break;

        default : cout<<"\n Invalid Choice !!\n";
                  break;
       } 

       cout<<"\n\n Press 0 to repeat the process or any other number to terminate: ";
       cin>>val;
    }

    while(val == 0);

    return 0;
}

void push(int x)
{
    if(s.top == MAX - 1)
    {
        cout<<"\n Can't add element, Stack is Full ...OVERFLOW\n";
    }
    else
    {
        s.top++;
        s.arr[s.top] = x;
        cout<<"\n "<<x<<" is successfully inserted";
    }
}

void pop()
{
    if(s.top == -1)
    {
        cout<<"\n Stack is Empty, can't delete ...UNDERFLOW\n";
    }
    else
    {
        s.top--;
        cout<<"\n Successfully Deleted !! \n";
    }
}

void display()
{
    int i;

    if(s.top == -1)
    {
        cout<<"\n STACK IS EMPTY\n";
    }
    else
    {
        for(i = s.top; i >= 0; i--)
        {
            cout<<"\n "<<s.arr[i];
        }
    }
}

/*
OUTPUT:

 Enter your Choice
 1 For push / insert
 2 For pop / delete
 3 For display the stack
 1

 Enter the value to pass and insert: 10

 10 is successfully inserted

 Press 0 to repeat the process or any other number to terminate: 0

 Enter your Choice
 1 For push / insert
 2 For pop / delete
 3 For display the stack
 1

 Enter the value to pass and insert: 20

 20 is successfully inserted

 Press 0 to repeat the process or any other number to terminate: 0

 Enter your Choice
 1 For push / insert
 2 For pop / delete
 3 For display the stack
 3

 20
 10

 Press 0 to repeat the process or any other number to terminate: 0

 Enter your Choice
 1 For push / insert
 2 For pop / delete
 3 For display the stack
 2

 Successfully Deleted !! 


 Press 0 to repeat the process or any other number to terminate: 0

 Enter your Choice
 1 For push / insert
 2 For pop / delete
 3 For display the stack
 3

 10

 Press 0 to repeat the process or any other number to terminate: 1

*/