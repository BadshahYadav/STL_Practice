#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int main(){
//     vector<int> v {10,2,5,15,20};
//     v.pop_back();
//     // v.front contains reference which means if modified it actually change the value of the vector container..
//     v.front()= 100;
//     for(int x : v){
//         cout<<x<<" ";
//     }
//     cout<<endl;
//     cout << v.front()<<" ";
//     cout << v.back()<<" ";
//     return 0;
// }


// int main(){
//     vector<int> v {10,2,5,15,20};
//     auto it = v.insert(v.begin(),169);
//     v.insert(v.begin()+2, 200);
//     v.insert(v.begin(),2, 6969);
//     for(int x :v){
//         cout<<x<<" ";
//     }
//     cout<<endl; 
//     vector<int> v2;
//     v2.insert(v.begin(),v.begin(),v.begin()+2);
//     for(int x :v2){
//         cout<<x<<" ";
//     }
//     return 0;
// }



int main(){
    vector<int> v {10,2,5,15};
    v.clear();
    for(int x : v){
        cout<<x << " ";
    }
   return 0;
}

// Resize in vector
// int main(){
//     vector<int> v {10,2,5,15};
//     v.resize(3);
//     for(int x : v){
//         cout<<x << " ";
//     }
//     cout<<endl;   
//     v.resize(5);
//     for(int x : v){
//         cout<<x << " ";
//     }
//     cout<<endl;
//     v.resize(8,100);
//     for(int x : v){
//         cout<<x << " ";
//     }
//     return 0;
// }