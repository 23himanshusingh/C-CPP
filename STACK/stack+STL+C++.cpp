#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
       
    stack.pop();
    stack.pop();
   
    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }
    stack<int> mystack1;
    stack<int> mystack2;

    mystack1.push(1);
    mystack1.push(2);
    mystack1.push(3);
    mystack1.push(4);

    mystack2.push(3);
    mystack2.push(5);
    mystack2.push(7);
    mystack2.push(9);
 
    // using swap() function to swap elements of stacks
    mystack1.swap(mystack2);
 
    // printing the first stack
    cout<<"mystack1 = ";
    while (!mystack1.empty()) {
        cout<<mystack1.top()<<" ";
        mystack1.pop();
    }
 
    // printing the second stack
    cout<<endl<<"mystack2 = ";
    while (!mystack2.empty()) {
        cout<<mystack2.top()<<" ";
        mystack2.pop();
    }
    return 0;
}