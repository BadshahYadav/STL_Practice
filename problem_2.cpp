// Demostrating the concept of vector and their iterator

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){ 
    vector <int> v = {10, 15,11,21,12};
    vector <int> :: iterator i = v.begin();
    cout << (*i) << " ";
    i++;
    cout << (*i) << " ";
    i = v.end();
    i--;
    cout <<(*i) << " ";
    return 0;
}