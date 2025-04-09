#include<iostream>
#include<stack>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

// Reverse of string using Stack...

// void reverseString(string &str){
//     stack<char> s;
//    for(int i =0; i<str.length(); i++){
//         s.push(str[i]);
//    }
//     cout<<"Reverse of the String : ";
//     for(int i =0; i<str.length(); i++){
//         cout<<s.top();
//         s.pop();
//    }

// }


int main(){
    string s;
    cout<<"Enter the String : ";
    getline(cin, s);
    vector<char> v;
    for(int i =0; i<s.length();i++)
        v.push_back(s[i]);
    // One line code for the reverse of the string in cpp..
    reverse(v.begin(),v.end());
    cout<<"Reverse of the String : ";
    for(auto x : v)
        cout<<x;
    return 0;
}