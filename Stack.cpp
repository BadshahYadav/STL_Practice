#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(5);
    s.push(11);
    s.pop();
    s.push(10);
    cout<<"The size of the stack is : "<<s.size()<<endl;
    cout<<"Top of the Stack is : "<<s.top()<<endl;
    return 0;
}