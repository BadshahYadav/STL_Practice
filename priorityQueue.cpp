#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    // By default priority queue is max heap...
    // priority_queue<int> pq;
    // pq.push(10);
    // pq.push(15);
    // pq.push(5);
    // cout<< "Size of the queue : "<<pq.size() <<" "<<endl;
    // cout<< "Top of the queue :"<<pq.top() <<" "<<endl;
    // cout<< "Elements of the queue: ";
    // while (!pq.empty())
    // {
    //     cout<<pq.top()<<" ";
    //     pq.pop();   
    // }

    // To get output as the min heap for that 
    priority_queue<int,vector<int>, greater<int> > pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<< "Size of the queue : "<<pq.size() <<" "<<endl;
    cout<< "Top of the queue :"<<pq.top() <<" "<<endl;
    cout<< "Elements of the queue: ";
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();   
    }
    
    return 0;
}