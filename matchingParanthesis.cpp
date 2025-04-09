#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

    bool match(char a, char b) {
        return (a == '(' && b == ')') || 
               (a == '{' && b == '}') || 
               (a == '[' && b == ']');
    }

void isMatching(string &str){
    if(str.empty()==true){
        cout<<"Empty String"<<endl;
        return ;
    }
        stack<char> s;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i]=='(' || str[i]=='{' || str[i]=='['){
                s.push(str[i]);
            }
            else if (str[i]==')' || str[i]=='}' || str[i]==']') {
                if (s.empty() || !match(s.top(), str[i])) {
                    cout << "Not Matching String" << endl;
                    return;  
                }
                s.pop();
            }
        }
        if(s.empty()){
            cout<< "Matching.";
            }  
            else {
                cout << "Not Matching String" << endl;
            }
}
    
int main(){
    string str;
    cout<<"Enter the parathesis: ";
    getline(cin,str);
    isMatching(str);
    return 0;
}