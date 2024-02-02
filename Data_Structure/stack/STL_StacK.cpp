#include<iostream>
#include <stack> //its build in library called stack
using namespace std;

int main()

{
stack<int> stkNumbers;
// Push into the stack
stkNumbers.push(10);
stkNumbers.push(20);
stkNumbers.push(30);
stkNumbers.push(40);
stkNumbers.push(50);
// To know number in my stack included Elements => size()
cout<<"Count="<<stkNumbers.size() <<endl;

// lets clear the elements in my stack
while (!stkNumbers.empty())
{
    cout<<"Numbers are:\n";
    // we can print the now top elements in my stack
    cout<< stkNumbers.top()<<endl;
    stkNumbers.pop();
}
system("pause>0");
return 0;

}

