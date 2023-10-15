#include<iostream>
#define MAX 5

using namespace std;

class Stack 
{
    int arr[MAX];
    int top;

    public : 
                Stack()
                {
                    top = -1;
                }

                void push(int x)
                {
                    if(top == MAX - 1)
                    {
                        cout<<"\n Can't add element, Stack is Full ...OVERFLOW\n";
                    }
                    else
                    {
                        top++;
                        arr[top] = x;
                        cout<<"\n "<<x<<" is successfully inserted";
                    }   
                }

                void pop()
                {
                    if(top == -1)
                    {
                        cout<<"\n Stack is Empty, can't delete ...UNDERFLOW\n";
                    }
                    else
                    {
                        top--;
                        cout<<"\n Successfully Deleted !! \n";
                    }
                }
                
                int count()
                {
                    return(top + 1);
                }
                
                void display()
                {
                    int i;
                
                    if(top == -1)
                    {
                        cout<<"\n STACK IS EMPTY\n";
                    }
                    else
                    {
                        for(i = top; i >= 0; i--)
                        {
                            cout<<"\n "<<arr[i];
                        }
                    }
                }
                
                void search(int x)
                {
                    int i,counter = 0;
                
                    for(i = top; i >= 0; i--)
                    {
                        if(arr[i] == x)
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
};

int main()
{
    Stack s;

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
                s.push(val);
                break;

        case 2: s.pop();
                break;

        case 3: cout<<"\n "<<s.count()<<" number of elements are present in Stack\n";
                break;

        case 4: s.display();
                break;

        case 5: cout<<"\n Enter the value to pass and search: ";
                cin>>val;
                s.search(val);
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