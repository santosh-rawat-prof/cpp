#include<iostream>

using namespace std;

struct Node
{
	struct Node *prev;
	int data;
	struct Node *next;
};

struct Node *p, *start, *temp;

void append(int x);
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
		cout<<"\n 1 for insert/append \n 2 for delete from end \n 3 for delete from begining \n 4 for display \n 5 for count elements \n 6 for searching an element\n ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				cout<<"\n Enter the value to pass and append: ";
				cin>>val;
				append(val);
				break;

			case 2: deleteFromEnd();
				break;
				
			case 3: deleteFromBegining();
				break;

			case 4: display();
				break;
				
			case 5: count();
				break;
				
			case 6:
				cout<<"\n Enter the value to pass and search: ";
				cin>>val;
				search(val);
				break;

			default: cout<<"\n Invalid Choice !!\n";
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
		start -> prev = NULL;
		start -> data = x;
		start -> next = NULL;
	}
	else
	{
	p = start;
	while(p -> next != NULL)
		p = p -> next;

	temp = (struct Node *) malloc(sizeof(struct Node));
	p -> next = temp;
	temp -> prev = p;
	temp -> data = x;
	temp -> next = NULL;
	}
	cout<<"\n Node Inserted Successfully\n";
}

void deleteFromEnd()
{
	if(start == NULL)
		cout<<"\n No Node present\n";

	else if(start -> next == NULL)
	{
		free(start);
		start = NULL;
		cout<<"\n Node deleted Successfully\n";
	}
	else
	{
		p = start;
		while(p -> next -> next != NULL)
			p = p -> next;

		temp = p -> next;
		free(temp);
		p -> next = NULL;
		cout<<"\n Node deleted Successfully\n";
	}
}

void deleteFromBegining()
{
	if(start == NULL)
		cout<<"\n No Node present\n";

	else if(start -> next == NULL)
	{
		free(start);
		start = NULL;
		cout<<"\n Node deleted Successfully\n";
	}
	else
	{
		p = start;
		start = start -> next;
		free(p);
		start -> prev = NULL;
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
		while(p != NULL)
		{
			cout<<"\t"<<p -> data;
			p = p -> next;
		}
		cout<<"\n";
	}
}

void count()
{
	int counter = 0;
	p = start;
	while(p != NULL)
	{
		counter++;
		p = p-> next;
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
		p = p -> next;
	}
	if(counter == 0)
		cout<<"\n "<<x<<" is not found\n";
	else
		cout<<"\n "<<x<<" is found "<<counter<<" times\n";
}
