#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
};

Node* newNode(int val){
    Node* temp= new Node();
    temp->data=val;
    temp->prev=NULL;
    temp->next=NULL;
}

Node* insertNode(Node* head, int val){
    Node* node = newNode(val);
    Node* temp=head;
    if(temp==NULL){
        head=node;
        return head;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=node;
    return head;
}
void traverse(Node* head){
    Node* temp= head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
Node* head;
head=NULL;
Node* temp=head;

temp=insertNode(temp,1);
temp=insertNode(temp,2);
temp=insertNode(temp,3);
temp=insertNode(temp,4);
//cout<<temp->next;
traverse(temp);

return 0;
}
