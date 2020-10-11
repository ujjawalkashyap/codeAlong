#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool checkParenthesis(string s){
    stack<char> ch;
    for(int index=0;index<s.length();index++){
        if(s[index]=='{'or s[index]=='{'or s[index]=='{'){
            ch.push(s[index]);
        }
        else if(ch.empty()||s[index]!=ch.top() ){
            return false;
        }
        else
            ch.pop();
    }
    return ch.empty();
}
int main(){
    string s;
    cin>>s;
    cout<<checkParenthesis(s);
return 0;
}
