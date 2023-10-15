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
int count();
void display();
void search(int x);

int main()
{
    s.top = -1;
    int ch,val;

    do
    {
       cout<<"\n Enter your Choice";
       cout<<"\n 1 For push / insert\n 2 For pop / delete\n 3 For count the elements present\n 4 For display the stack\n 5 For searching an element\n ";
       cin>>ch;

       switch(ch)
       {
        case 1: cout<<"\n Enter the value to pass and insert: ";
                cin>>val;
                push(val);
                break;

        case 2: pop();
                break;

        case 3: cout<<"\n "<<count()<<" number of elements are present in Stack\n";
                break;

        case 4: display();
                break;

        case 5: cout<<"\n Enter the value to pass and search: ";
                cin>>val;
                search(val);
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

int count()
{
    return(s.top + 1);
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

void search(int x)
{
    int i,counter = 0;

    for(i = s.top; i >= 0; i--)
    {
        if(s.arr[i] == x)
        {
            counter++;
        }
    }

    if(counter == 0)
    {
        cout<<"\n NOT FOUND\n";
    }
    else
    {
        cout<<"\n "<<x<<" is found "<<counter<<" times\n";
    }
}



