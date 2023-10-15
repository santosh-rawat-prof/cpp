#include<iostream>

using namespace std;

struct Node
{
	int data;
	struct Node *link;
};

struct Node *p, *start, *temp;

void append(int x);
void display();

int main()
{
	start = NULL;
	int ch,val;

	do
	{
		cout<<"\n Enter your Choice";
		cout<<"\n 1 for insert/append \n 2 for display \n ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				cout<<"\n Enter the value to pass and append: ";
				cin>>val;
				append(val);
				break;

            case 2: 
                display();
				break;

            default: 
                cout<<"\n Invalid Choice\n";
				 break;
		}

        cout<<"\n Press 0 to repeat the process or any other number to end : ";
		cin>>val;
	}

	while(val == 0);

	return 0;
}

void append(int x)
{
	if(start == NULL)
	{
		start = (struct Node *) malloc(sizeof(struct Node));
		start -> data = x;
		start -> link = start;
	}
	else
	{
		p = start;
		while(p -> link != start)
			p = p -> link;

		temp = (struct Node *) malloc(sizeof(struct Node));
		p -> link = temp;
		temp -> data = x;
		temp -> link = start;
	}
	cout<<"\n Node Inserted Successfully\n";
}

void display()
{
	if(start == NULL)
		cout<<"\n No list present\n";
	else
	{
		p = start;
		
		cout<<"\n";
		do
		{
			cout<<"\t"<<p -> data;
			p = p -> link;
		}
		while(p != start);
		cout<<"\n";
	}
}

/*
OUTPUT:

 Enter your Choice
 1 for insert/append 
 2 for display 
 1

 Enter the value to pass and append: 10

 Node Inserted Successfully

 Press 0 to repeat the process or any other number to end : 0

 Enter your Choice
 1 for insert/append 
 2 for display 
 1

 Enter the value to pass and append: 20

 Node Inserted Successfully

 Press 0 to repeat the process or any other number to end : 0

 Enter your Choice
 1 for insert/append 
 2 for display 
 2

	10	20

 Press 0 to repeat the process or any other number to end : 1

*/