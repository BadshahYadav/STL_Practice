#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l = {10,2,5,20};
    // l.push_back(10);
    // l.push_back(20);
    // l.push_front(5);
    l.pop_front();
    l.pop_back();
    for(auto x : l)
        cout<<x <<" ";
    return 0;
}