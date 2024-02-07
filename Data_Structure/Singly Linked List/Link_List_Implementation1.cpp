#include<iostream>
using namespace std;

// Creating class Node
// For a Node we can define a structure or a class
class Node
{

public:
    int data;
    Node * next;
};

    


int main()
{
Node* head;
Node* Node1=NULL; // Pointer Node1 of type Node that doesnt point to any object when init 
Node* Node2=NULL; // Pointer Node2 of type Node that doesnt point to any object when init
Node* Node3=NULL; // Pointer Node3 of type Node that doesnt point to any object when init

// Allocating 3 nodes in the heap using new
Node1= new Node();
Node2= new Node();
Node3= new Node();
// I could do that directly Node* Node1= new Node()

// Assign Values
Node1->data =1; // we added the value to node 1
                // This arrow dereferences the value in my pointer
Node2->data =2; // we added the value to node 2
Node3->data =3; // we added the value to node 3

// Connect nodes
Node1->next=Node2; // we put next of Node1 to pointer Node 2
Node2->next=Node3; // we put next of Node1 to pointer Node 3
Node3->next=NULL;  // we put the next of Node3 => Null  

// Print the linked list value
head= Node1;
while(head!=NULL)
{
    cout<<head->data<<endl;
    head=head->next;
}
system("pause>0");
return 0;
}


