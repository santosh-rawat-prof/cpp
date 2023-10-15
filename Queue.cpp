#include<iostream>
#define MAX 5

using namespace std;

struct Queue
{
    int arr[MAX];
    int front,rear;
}q;

void push(int x);
void pop(); 
int count();
void display();
void search(int x);

int main()
{
    q.front = 0;
    q.rear = -1;
    int ch,val;

    do
    {
       cout<<"\n Enter your Choice";
       cout<<"\n 1 For push / insert\n 2 For pop / delete\n 3 For count the elements present\n 4 For display the Queue\n 5 For searching an element\n ";
       cin>>ch;

       switch(ch)
       {
        case 1: cout<<"\n Enter the value to pass and insert: ";
                cin>>val;
                push(val);
                break;

        case 2: pop();
                break;

        case 3: cout<<"\n "<<count()<<" number of elements are present in Queue \n";
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
    if(q.rear == MAX - 1)
    {
        cout<<"\n Can't add element, Queue is Full ...OVERFLOW\n";
    }
    else
    {
        q.rear++;
        q.arr[q.rear] = x;
        cout<<"\n "<<x<<" is successfully inserted";
    }
}

void pop()
{
    if(q.front == 0 && q.rear == -1)
    {
        cout<<"\n Queue is Empty, can't delete ...UNDERFLOW\n";
    }
    else
    {
        q.front++;
        if(q.front > q.rear)
        {
            q.front = 0;
            q.rear = -1;
        }
        cout<<"\n Successfully Deleted !! \n";
    }
}

int count()
{
    return( (q.rear - q.front ) + 1);
}

void display()
{
    int i;

    if(q.front == 0 && q.rear == -1)
    {
        cout<<"\n QUEUE IS EMPTY\n";
    }
    else
    {
        for(i = q.front; i <= q.rear; i++)
        {
            cout<<" \t"<<q.arr[i];
        }
    }
}

void search(int x)
{
    int i,counter = 0;

    for(i = q.front; i <= q.rear; i++)
    {
        if(q.arr[i] == x)
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



