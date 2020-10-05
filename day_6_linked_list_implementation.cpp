#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
};

Node* newNode(int val){
Node* temp=new Node();
temp->data=val;
temp->next=NULL;
return temp;
}

void traverse(Node* head){
    Node* temp=head;

    while(temp){
        cout<<temp->data<<'\n';
        temp=temp->next;
    }
}

Node* insertInBeginning(Node* head,int val){
    Node* node = newNode(val);
    node->next=head;
    head=node;
    //cout<<head->data;
    return head;
}
int main(){
Node * head;
head=NULL;
//Node* temp=head;
head =insertInBeginning(head,1);
head =insertInBeginning(head,2);
head =insertInBeginning(head,3);
head =insertInBeginning(head,4);
head =insertInBeginning(head,5);
head =insertInBeginning(head,6);
head =insertInBeginning(head,7);
head =insertInBeginning(head,8);
traverse(head);
//cout<<head->data;
return 0;
}
