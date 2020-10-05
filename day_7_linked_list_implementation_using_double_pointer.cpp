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

void insertInBeginning(Node** head,int val){
    Node* node = newNode(val);
    node->next=*head;
    *head=node;
    //cout<<head->data;
    return;
}
int main(){
Node * head;
head=NULL;
insertInBeginning(&head,1);
insertInBeginning(&head,2);
insertInBeginning(&head,3);
insertInBeginning(&head,4);
insertInBeginning(&head,5);
insertInBeginning(&head,6);
insertInBeginning(&head,7);
insertInBeginning(&head,8);
traverse(head);

return 0;
}

