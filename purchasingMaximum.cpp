#include<iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;
void purchaseMaxItem(int cost[],int n,int sum){
    priority_queue<int,vector<int>,greater<int>> q(cost,cost+n);
    int res =0;
    while(!q.empty()){
        if(sum>=q.top()){
            sum-=q.top();
            res++;
            q.pop();
        }
        else break;
    }
    cout<<"Maximum item you can buy :"<<res<<endl;
}

int main(){
    int cost[]={1,12,5,111,200};
    int n = sizeof(cost)/sizeof(cost[0]);
    purchaseMaxItem(cost,n,10);
    return 0;
}