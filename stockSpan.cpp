#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int stockSpan(int arr[], int n){
    stack<int> s;
    s.push(0);
    for(int i =1; i<n; i++){
        while(s.empty()==false && arr[s.top()]<= arr[i]){
            s.pop();
        }
        int span = (s.empty())?(i+1):(i-s.top());
        cout<<span <<" ";
        s.push(i);
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the size of an Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements : ";
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    stockSpan(arr,n);
    return 0;
}