#include<iostream>
using namespace std;
int topindex=-1;
int st[50]={0};
void push(int val){
    st[++topindex]=val;
}
void pop(){
    topindex--;
}
int top(){
    return st[topindex];
}

bool isEmpty(){
    if(topindex==-1)
        return true;
    else
        return false;
}
int main(){
    cout<<isEmpty();
push(1);
push(2);
push(3);
   cout<<isEmpty();
push(4);
cout<<top();
pop();
cout<<top();
return 0;
}
