#include<iostream>
//when we included  queue we can define a variable of type queue
#include<queue>
using namespace std;

int main()
{
queue <int> MyQueue;
// Pushing Elements into my Queue
MyQueue.push(10);
MyQueue.push(20);
MyQueue.push(30);
MyQueue.push(40);

cout<<"\nCount: "<<MyQueue.size();
cout<<"\nFront: "<<MyQueue.front(); // front returns my current first element => 10
cout<<"\nBack: "<<MyQueue.back()<<endl;   // back returns my last element => 40

cout<<"My Queue: ";
while(! MyQueue.empty())
{
cout<<MyQueue.front()<<" ";
MyQueue.pop();
}
cout<<endl<<MyQueue.empty();
system("pause>0");
return 0;

}
