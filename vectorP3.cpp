#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// bool mycp(pair<int, int>p1, pair<int, int>p2){
//     return p1.second > p2.second;
// }

// void printSortedByMarks(int roll[], int marks[],int n){
//     vector<pair<int,int>>v;
//     for(int i=0; i<n; i++){
//         v.push_back({roll[i],marks[i]});
//     }
//     sort(v.begin(),v.end(),mycp);
//     for(int i=0; i<n; i++){
//         cout<<v[i].first <<" "<< v[i].second;
//         cout<<endl;
//     }
// }

// int main(){
//     int roll[] = {101,103,105};
//     int marks[] = {80,70,90};
//     printSortedByMarks(roll,marks,3);
//     return 0;
// }


// Another method to solve ...Instead of using mycp we can use greater function
// Which also used to sort the vector in decreasing order..

void printSortedByMarks(int roll[], int marks[],int n){
    vector<pair<int,int>>v;
    for(int i=0; i<n; i++){
        v.push_back({roll[i],marks[i]});
    }
    sort(v.begin(),v.end(),greater<pair<int, int>>());
    for(int i=0; i<n; i++){
        cout<<v[i].first <<" "<< v[i].second;
        cout<<endl; 
    }
}

int main(){
    int roll[] = {101,103,105};
    int marks[] = {80,70,90};
    printSortedByMarks(roll,marks,3);
    return 0;
}