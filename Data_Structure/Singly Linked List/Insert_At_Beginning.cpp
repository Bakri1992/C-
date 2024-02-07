#include<iostream>
using namespace std;


class Node
{
public:
    int data;
    Node *next;
};

void InsertAtBeginning(Node* &head ,int Value)
{
    // Allocate memory to a new node in the heap
    Node* new_node=new Node();
    // Insert data
    new_node->data=Value;
    new_node->next=head;

    // Lets let head points to the first node
    head=new_node; // it will be maintained in the main cause its called by ref
    // head here is a pointer of type Node and new_node is the reference
    // of my node.

}
void PrintLinkedList(Node *head)
{
while(head!=NULL)
{
    cout<< head->data <<endl;
    head= head->next;
}
}


int main()
{
Node * head =NULL;
InsertAtBeginning(head,1);
InsertAtBeginning(head,2);
InsertAtBeginning(head,3);
InsertAtBeginning(head,4);
InsertAtBeginning(head,5); 
PrintLinkedList(head);

system("pause>0");
return 0;
}




