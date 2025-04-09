#include<iostream>
using namespace std;
template <typename T>
T max_fun(T x, T y){
    return (x>y) ? x : y ;
}

int main(){
    cout << max_fun<int>(4,6) << endl;
    cout << max_fun<char>('c','a') << endl;
    return 0;
}