#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;
void previousGreater(int arr[], int n){
    for(int i =0; i<n;i++){
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[i]<arr[j]){
                cout<<arr[j] <<" ";
                break;
            }
            
        }
        if(j==-1)
        cout<< -1 <<" ";
    }
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

    previousGreater(arr,n);
    return 0;
}