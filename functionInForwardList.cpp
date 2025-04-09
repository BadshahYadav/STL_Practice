#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    forward_list<int> l= { 10,2,30};
    forward_list<int> l1= { 10,20,30};
    forward_list<int> l2= { 5,15};
    // Reverse is used to reverse the forward_list..
    l.reverse();
    for(auto x : l)
        cout<<x<<" ";
        cout<<endl;
    // Empty is used to check list if empty or not...
    l1.merge(l2);
    for(auto x : l1)
        cout<<x<<" ";
        cout<<endl;
    //  sort function is used to sort the forwardList..
    l.sort();
    for(auto x : l)
        cout<<x<<" ";
    return 0;
}