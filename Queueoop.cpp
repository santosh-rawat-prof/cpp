#include<iostream>
#define MAX 5

using namespace std;

class Queue
{
    int arr[MAX];
    int front, rear;

    public : 
                Queue()
                {
                    front = 0;
                    rear = -1;
                }

                void push(int x)
                {
                    if(rear == MAX - 1)
                    {
                        cout<<"\n Can't add element, Queue is Full ...OVERFLOW\n";
                    }
                    else
                    {
                        rear++;
                        arr[rear] = x;
                        cout<<"\n "<<x<<" is successfully inserted";
                    }
                }

                void pop()
                {
                    if(front == 0 && rear == -1)
                    {
                        cout<<"\n Queue is Empty, can't delete ...UNDERFLOW\n";
                    }
                    else
                    {
                        front++;
                        if(front > rear)
                        {
                            front = 0;
                            rear = -1;
                        }
                        cout<<"\n Successfully Deleted !! \n";
                    }
                }

                int count()
                {
                    return( (rear - front ) + 1);
                }

                void display()
                {
                    int i;

                    if(front == 0 && rear == -1)
                    {
                        cout<<"\n QUEUE IS EMPTY\n";
                    }
                    else
                    {
                        for(i = front; i <= rear; i++)
                        {
                            cout<<" \t"<<arr[i];
                        }
                    }
                }

                void search(int x)
                {
                    int i,counter = 0;

                    for(i = front; i <= rear; i++)
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
    Queue q;

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
                q.push(val);
                break;

        case 2: q.pop();
                break;

        case 3: cout<<"\n "<<q.count()<<" number of elements are present in Queue \n";
                break;

        case 4: q.display();
                break;

        case 5: cout<<"\n Enter the value to pass and search: ";
                cin>>val;
                q.search(val);
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