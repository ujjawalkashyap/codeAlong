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

Node* insertAtNthPosition(Node* head,int n, int data){
    Node* temp= head;
    for(int i=0;i<n-2;i++){
        temp=temp->next;
    }

    Node* NodeToAdd = newNode(data);
    NodeToAdd->next = temp->next;
    temp->next = NodeToAdd;
    return head;
}

Node* deleteAtNthPosition(Node* head, int n){
    Node* temp= head;
    for(int i=0;i<n-2;i++){
        temp=temp->next;
    }

    Node* NodeTodelete = temp->next;
    temp->next=NodeTodelete->next;
    delete NodeTodelete;
    return head;

}

Node* reverse(Node* head){
Node* prev;
Node* curr;
Node* next;
prev=NULL;
curr=head;
while(curr){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr= next;
}
head=prev;
return head;
}

void forward_traversal(Node* temp){
    while(temp!=NULL){
        cout<<temp->data<<' ';
        temp=temp->next;
    }
    cout<<'\n';
}

void reverse_traversal(Node* temp){

    if(temp==NULL){
        return;
    }
    reverse_traversal(temp->next);
    cout<<temp->data<<' ';
    return;
}
Node* reverse_recursive(Node* temp){
    if(temp==NULL){

    }
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

head =insertAtNthPosition(head,2,11);
head =insertAtNthPosition(head,4,11);
head =insertAtNthPosition(head,6,11);
head =insertAtNthPosition(head,8,11);
head =deleteAtNthPosition(head,4);
//traverse(head);
//head=reverse(head);
//traverse(head);
//forward_traversal(head);
reverse_traversal(head);
//cout<<head->data;
return 0;
}
