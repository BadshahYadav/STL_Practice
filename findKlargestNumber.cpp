#include<iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;
void findKLargestNumber(int arr[],int n,int k){
    // priority_queue<int,vector<int>,greater<int>> q(arr,arr+n);

    // while(!q.empty()){
    //     cout<<q.top()<<" ";
    //     q.pop();
    // }

    priority_queue<int> q(arr,arr+n);
    stack<int> s;
    for(int i=0;i<k;i++){
        // cout<<q.top()<<" ";
        s.push(q.top());
        q.pop();
    }
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
}

int main(){
    int arr[]={7,5,9,4,3,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findKLargestNumber(arr,n,3);
    return 0;
}