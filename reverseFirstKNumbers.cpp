#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverseFirstK(queue<int> &q , int k) {
    if(q.empty()==true || k>q.size()|| k<=0){
        return ;
    }
    stack<int> s;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }

    while(s.empty()==false){
        q.push(s.top());
        s.pop();
    }
    int size = q.size() - k;
    for(int i=0;i<size;i++){
        q.push(q.front());
        q.pop();
    }

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}

int main() {
    int n;
    cout << "Enter the range: ";
    cin >> n;
    queue<int> q;
    cout<<"Enter the Elemnts in queue :"<<endl;
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        q.push(x);
    }
    int k;
    cout<<"Enter the position Where you want to reverse the queue :";
    cin>> k;
    reverseFirstK(q,k);
    return 0;
}
