#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortArray(int arr[], int n){
    vector<pair<int, int>>v;
    for(int i=0;i<n;i++){
        v.push_back({arr[i],i});
    }
    sort(v.begin(),v.end());

    for(auto x : v)
        cout<<x.first <<" "<<x.second <<endl;
}

int main(){
   int arr[]={20,40,30,10};  
    sortArray(arr,4);
    return 0;
}