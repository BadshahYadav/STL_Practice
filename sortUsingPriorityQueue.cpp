#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    int arr[]={7,5,9,4,3,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>> q(arr,arr+n);

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    return 0;
}