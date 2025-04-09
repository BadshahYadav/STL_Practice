// Pair is c++ 
#include<iostream>
#include<utility>
using namespace std;
// int main(){
//     // pair<int, int>p1(10,20);
//     pair<int, int>p1; //Default value of is zero..
//     p1={10,20};
//     pair<int , string>p2(69,"bestPosition");
//     cout<<p1.first <<" "<<p1.second <<endl;
//     cout<<p2.first <<" "<<p2.second <<endl;
//     return 0;
// }

// comparision of pairs in cpp..

int main(){
    pair<int , int>p1,p2;
    p1 = {1,12};
    p2 = {9,12};
    cout<<(p1==p2)<<" ";
    cout<<(p1!=p2)<<" ";
    cout<<(p1>p2)<<" ";
    cout<<(p1<p2)<<" ";
    return 0;
}

