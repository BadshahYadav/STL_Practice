#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    forward_list<int>l1= {12,20,30};
    auto it = l1.insert_after(l1.begin(),10);
    it = l1.insert_after(it, {2,4,6});
    it = l1.emplace_after(it,40);
    it = l1.erase_after(it);
    
    for(auto x : l1){
        cout << x <<" ";
    }
    return 0;
}