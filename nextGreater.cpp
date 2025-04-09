#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;
// void nextGreater(int arr[], int n){
//     for(int i =0; i<n;i++){
//         int j;
//         for(j=i+1;j<n;j++){
//             if(arr[i]<arr[j]){
//                 cout<<arr[j] <<" ";
//                 break;
//             }
            
//         }
//         if(j==n)
//         cout<< -1 <<" ";
//     }
// }

// Another solution using stack in O(N) time.

vector <int> nextGreater(int arr[], int n){
    vector<int> v;
    stack<int> s;

    s.push(arr[n-1]);
    v.push_back(-1);

    for(int i = n-2; i>=0; i--){
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }   

        int NG = (s.empty())? (-1) : (s.top());
        v.push_back(NG);
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}




int main(){
    int n;
    cout<<"Enter the size of an Array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the Array Elements : ";

    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

   vector<int> res = nextGreater(arr,n);
   
   cout<<"Next Greater Elements are : ";
   for(auto x : res)
    cout<<x <<" ";
    return 0;
}