#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[] = {15,5,11,9,1,12};
    sort(arr,arr+6);
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;

    if(binary_search(arr,arr+6,8)){
        cout << "Element is Found";
    }
    else{
        cout << "Element is Not Found";
    }
    return 0;
}