#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
void sortChar(int a[], char b[],int n);
int main(){
    int n = 3;
    int a[] ={10,15,5};
    char b[] = {'x','y','z'};
    sortChar(a,b,n);
    return 0;
}

void sortChar(int a[], char b[],int n){
    pair<int , char>p1[n];
    for(int i = 0; i <n; i++){
        p1[i]={a[i],b[i]};
    }

    sort(p1,p1+n);
    for(int i=0; i<n; i++){
        cout << p1[i].second<< " ";
    }
}