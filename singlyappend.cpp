#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};


void insertEnd(Node** head, int data)
{

    Node* freshNode = new Node();

    freshNode->data = data;
    // since this will be the last node so it will point to NULL
    freshNode->next = NULL;

    //need this if there is no node present in linked list at all
    if(*head==NULL)
    {
        *head = freshNode;
        cout << freshNode->data << " inserted" << endl; 
        return; 
    }
 
    struct Node* temp = *head; 

    // traverse to the last node of Linked List 
    while(temp->next!=NULL)
        temp = temp->next;

    // assign last node's next to this freshNode
    temp->next = freshNode;
    cout << freshNode->data << " inserted" << endl;
}


void display(Node* node)
{

    //as linked list will end when Node is Null
    while(node!=NULL)
    {
        cout << node->data << " "; 
        node = node->next;
    }
    cout << endl;
}

int main()
{

    Node* head = NULL;

    insertEnd(&head,7);
    insertEnd(&head,8);
    insertEnd(&head,9);
    insertEnd(&head,10);

    display(head); 
    return 0;  
}