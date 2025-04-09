#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

// void printMax(vector<int> &v, int n, int k){
//     for(int i=0; i<n-k+1; i++){
//         int mx = v[i];
//         for(int j = i+1; j<i+k; j++){
//             mx = max(v[j],mx);
//         }
//         cout << mx << " ";
//     }
// }

//  Another Optimized method to solve to solve this problem By using doubly linked list..

void printMax(vector<int> &v, int n, int k) {
    deque<int> dq;

    // Process the first k elements
    for (int i = 0; i < k; i++) {
        while (!dq.empty() && v[i] >= v[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    // Process the remaining elements
    for (int i = k; i < n; i++) {
        // Print the max element of the previous window
        cout << v[dq.front()] << " ";

        // Remove elements that are out of the current window
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Remove smaller elements in the current window
        while (!dq.empty() && v[i] >= v[dq.back()]) {
            dq.pop_back();
        }

        // Add the current element
        dq.push_back(i);
    }

    // Print the max of the last window
    cout << v[dq.front()] << endl;
}

int main(){
    int n,k;
    cout<<"Enter the size of the Arrays:"<<endl;
    cin>>n;
    vector<int>v(n);
    cout << "Enter the elements: "<<endl;
    for(int i =0; i<n; i++)
        cin>>v[i];

    cout<<"Enter the subarry size: " ;
    cin>>k;
    cout << "Maximum in each subarray of size " << k << ": ";
    printMax(v, n, k);
    return 0;
}