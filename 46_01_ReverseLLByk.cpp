#include <iostream>
#include <iomanip>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    // constructor:
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void InsertLL(Node* &head, int data){

    // Empty Linked list:
    if(head==NULL){
        Node*temp=new Node(data);
        head=temp;
    }

    else{
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;

    }
}

void PrintLL(Node* head){

    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node * kReverse(Node* head, int k){

    if(head==NULL){
        return NULL;
    }

    Node *forward=NULL;
    Node *curr= head;
    Node *prev=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }

    if(forward!=NULL){
        head->next=kReverse(forward, k);
    }

    return prev;

}
int main() {
    Node *head=new Node(10);
    InsertLL(head, 90);
    kReverse(head,2);
    PrintLL(head);
return 0;
}