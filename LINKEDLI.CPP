#include<iostream>

using namespace std;

struct Node
{
	int data;
	struct Node *link;
};

struct Node *p, *start, *temp;

void insert(int x);
void deleteFromEnd();
void display();
void search(int x);
void count();


int main()
{
	start = NULL;
	int ch,val;

	do
	{
		cout<<"\n Enter your Choice";
		cout<<"\n 1 for insert/append \n 2 for delete from end \n 3 for display \n 4 for search \n 5 for count\n ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				cout<<"\n Enter the value to pass and insert: ";
				cin>>val;
				insert(val);
				break;

			case 2: deleteFromEnd();
				break;
				
			case 3: display();
				break;

            case 4: 
                cout<<"\n Enter the value to pass and search: ";
                cin>>val;
                search(val);
				break;

            case 5: count();
                break;

			default: cout<<"\n Invalid Choice";
				 break;
		}

		cout<<"\n Press 0 to repeat the process or any other number to end : ";
		cin>>val;
	}

	while(val == 0);

	return 0;
}

void insert(int x)
{
	if(start == NULL)
	{
		start = (struct Node *) malloc(sizeof(struct Node));
		start -> data = x;
		start -> link = NULL;
	}
	else
	{
	p = start;
	while(p -> link != NULL)
		p = p -> link;

	temp = (struct Node *) malloc(sizeof(struct Node));
	p -> link = temp;
	temp -> data = x;
	temp -> link = NULL;
	}
}

void deleteFromEnd()
{
	if(start == NULL)
		cout<<"\n No list present";

	else if(start -> link == NULL)
	{
		free(start);
		start = NULL;
	}
	else
	{
		p = start;
		while(p -> link -> link != NULL)
			p = p -> link;

		temp = p -> link;
		free(temp);
		p -> link = NULL;
	}
}

void display()
{
	if(start == NULL)
		cout<<"\n No list present";
	else
	{
		p = start;
		while(p != NULL)
		{
			cout<<"\t"<<p -> data;
			p = p -> link;
		}
	}
}

void count()
{
	int counter = 0;
	p = start;
	while(p != NULL)
	{
		counter++;
		p = p-> link;
	}
	cout<<"\n "<<counter<<" number of Nodes are present\n";
}

void search(int x)
{
	int counter = 0;
	p = start;
	while(p != NULL)
	{
		if(p -> data == x)
			counter++;
		p = p -> link;
	}
	if(counter == 0)
		cout<<"\n "<<x<<" is not found\n";
	else
		cout<<"\n "<<x<<" is found "<<counter<<" times\n";
}
