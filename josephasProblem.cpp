#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int get_save(int n, int k){
    list<int> l;
    for(int i =0; i<n; i++){
        l.push_back(i);
    }
    auto it = l.begin();
    while(l.size()>1){
        for(int count = 1; count<k; count++){
            it++;
            if(it== l.end()){
                it = l.begin();
            }
        }
        it = l.erase(it);
        if(it== l.end()){
            it = l.begin();
        }
    }
    return *l.begin();
}
int main(){
    int n=7,k=3;
    int res =  get_save(n,k);
        cout<<"Safe Position is : "<<res <<" ";
    return 0;
}