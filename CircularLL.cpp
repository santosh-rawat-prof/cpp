#include<iostream>

using namespace std;

struct Node
{
	int data;
	struct Node *link;
};

struct Node *p, *start, *temp;

void append(int x);
void insertAtBegin(int x);
void deleteFromEnd();
void deleteFromBegining();
void display();
void count();
void search(int x);

int main()
{
	start = NULL;
	int ch,val;

	do
	{
		cout<<"\n Enter your Choice";
		cout<<"\n 1 for insert/append \n 2 for insert at Begining \n 3 for delete from end \n 4 for delete from begining \n 5 for display \n 6 for count elements \n 7 for searching an element\n ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				cout<<"\n Enter the value to pass and append: ";
				cin>>val;
				append(val);
				break;

			case 2:
				cout<<"\n Enter the value to pass and insert at begining: ";
				cin>>val;
				insertAtBegin(val);
				break;

			case 3: deleteFromEnd();
				break;
				
			case 4: deleteFromBegining();
				break;

			case 5: display();
				break;
				
			case 6: count();
				break;
				
			case 7:
				cout<<"\n Enter the value to pass and search: ";
				cin>>val;
				search(val);
				break;

			default: cout<<"\n Invalid Choice\n";
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

void insertAtBegin(int x)
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

		temp -> link = start;
		start = temp;
		start -> data = x;
		p -> link = start;
	}
}

void deleteFromEnd()
{
	if(start == NULL)
		cout<<"\n No Node present to delete !!\n";

	else if(start -> link == start)
	{
		free(start);
		start = NULL;
		cout<<"\n Node deleted Successfully\n";
	}
	else
	{
		p = start;
		while(p -> link -> link != start)
			p = p -> link;

		temp = p -> link;
		free(temp);
		p -> link = start;
		cout<<"\n Node deleted Successfully\n";
	}
}

void deleteFromBegining()
{
	if(start == NULL)
		cout<<"\n No Node present to delete !!\n";

	else if(start -> link == start)
	{
		free(start);
		start = NULL;
		cout<<"\n Node deleted Successfully\n";
	}
	else
	{
		p = start;
		while(p -> link != start)
			p = p -> link;

		temp = start;
		start = start -> link;
		p -> link = start;
		free(temp);
		cout<<"\n Node deleted Successfully\n";
	}

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

void count()
{
	int counter = 0;
	p = start;

	do
	{
		counter++;
		p = p-> link;
	}
	while(p != start);

	cout<<"\n "<<counter<<" number of Nodes are present\n";
}

void search(int x)
{
	int counter = 0;
	p = start;
	do
	{
		if(p -> data == x)
			counter++;
		p = p -> link;
	}
	while(p != start);

	if(counter == 0)
		cout<<"\n "<<x<<" is not found\n";
	else
		cout<<"\n "<<x<<" is found "<<counter<<" times\n";
}
