#include<iostream>
#include<stack>
#include<string>
using namespace std;
int evaluate(string s){
    stack<int> ch;
    for(int index=0;index<s.length();index++){
        if(s[index]!='*'and s[index]!='+'and s[index]!='-'){
            ch.push(s[index]-'0');
            //cout<<s[index]-'0'<<'\n';

}
        else if(s[index]=='*'or s[index]=='+'or s[index]=='-'){
            int op1=(int)ch.top();
            ch.pop();
            int op2=(int)ch.top();
            ch.pop();
            int result;
            if(s[index]=='*')
                result=op1*op2;
            if(s[index]=='+')
                result=op1+op2;
            if(s[index]=='-')
                result=op2-op1;
            ch.push(result);
            //cout<<result<<'\n';
        }

    }
    return ch.top();
}
int main(){

    string s;
    cin>>s;

    cout<<evaluate(s);
return 0;
}
