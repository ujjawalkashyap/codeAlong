#include<iostream>
#include<stack>
#include<string>
using namespace std;
stack<char> ch;

bool precidence(char first, char second){

    if(first=='-'&&second=='*'){
        return false;
    }
    else if(first=='+'&&second=='*'){
        return false;
    }
    else
        return true;
}
string evaluate(string s){
    stack<char> ch;
    string res="";
    for(int index=0;index<s.length();index++){
        if(s[index]!='*'and s[index]!='+'and s[index]!='-'){
            res+=s[index];
}
        else if(s[index]=='*'or s[index]=='+'or s[index]=='-'){
            while(!ch.empty()&&precidence(ch.top(),s[index])){
                res+=ch.top();
                ch.pop();
            }
            ch.push(s[index]);
        }

    }
    while(!ch.empty()){
         res+=ch.top();
                ch.pop();
    }
    return res;
}
int main(){

    string s;
    cin>>s;

    cout<<evaluate(s);
return 0;
}
