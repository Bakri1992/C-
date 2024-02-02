#include<iostream>
#include <stack> //its build in library called stack
using namespace std;

int main()
{
stack<int> Mystack1;
stack<int> Mystack2;

// Pushing elements into first stack
Mystack1.push(10);
Mystack1.push(20);
Mystack1.push(30);
Mystack1.push(40);

// Pushing elements into second stack
Mystack2.push(50); 
Mystack2.push(60); 
Mystack2.push(70); 
Mystack2.push(80);
// use swap() to swap elements of the stack
// Elements of stack1 will be elements of stack 2 and otherwise
Mystack1.swap(Mystack2);

 // Printing the first stack
cout<<"MyStack1 = ";
while (!Mystack1.empty())
{
    // we can print the now top elements in my stack
    cout<< Mystack1.top()<<" ";
    Mystack1.pop();
}

 // Printing the second stack
cout<<"\nMyStack2 = ";
while (!Mystack2.empty())
{
    // we can print the now top elements in my stack
    cout<< Mystack2.top()<<" ";
    Mystack2.pop();
}
system("pause>0");
return 0;
}