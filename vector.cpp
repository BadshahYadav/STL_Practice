#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // vector<int> v;
    // v = {20,40,35,15};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // Another way to initialize and traversing..
    
    vector<int> v={20,30,35,40};
    // for(int x : v){
    //     cout << x << " ";
    // }

    // for(int &x : v){ 
    //     x = 6;
    //     cout << x << " ";
    // }

    for(auto i = v.begin(); i!= v.end();i++){
        cout<<(*i)<<" ";
    }
    cout << endl; 
// Iterate in reverse direction ...Using rbegin and rend.
    for(auto i = v.rbegin(); i!= v.rend();i++){
        cout<<(*i)<<" ";
    }
    return 0;
}