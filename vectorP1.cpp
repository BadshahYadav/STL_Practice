#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    v.push_back(20);
    cout<<v.size() << " ";
    cout<<v.capacity()<< " ";
    return 0;
}