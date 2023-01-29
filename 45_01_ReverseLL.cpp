#include <iostream>
#include <iomanip>
#include <bits/stdc++.h> 
using namespace std;
class Node{

    public:
    int data;
    Node* next;

    // Constructor:
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertAtHead(Node* &head, int data){

    // Empty LinkedLit:
    if(head==NULL){
        Node*temp=new Node(data);
        head=temp;
    }

    else{
        // Non-empty linked list:
        Node*temp=new Node(data);
        temp->next=head;
        head=temp;
    }
}

void PrintLL(Node* head){

    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
// Approach: 01

Node* RecursiveReverse(Node* head){
    if(head==NULL|| head->next==NULL){
        return head;
    }
    Node* chotahead=head->next;
    head->next->next=head;
    head->next=NULL;

    return chotahead;
}
// Approach: 02

void Reverse(Node* &head, Node *curr, Node*prev){

    // Base Case:
    if(curr==NULL){
        head=prev;
        return ;
    }

    Node*forward=curr->next;
    Reverse(head,forward,curr);
    curr->next=prev;
}

// Approach 3:
Node* reverseLinkedList(Node *head)
{
    // Write your code here
	// Base condition:
	if(head==NULL|| head->next==NULL){
		return head;
	}

	Node* prev=NULL;
	Node* curr=head;
	Node* forward=NULL;

	while(curr!=NULL){
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	}

	return prev;
}



int main() {

    Node *head=NULL;
    PrintLL(head);
    insertAtHead(head,67);
    insertAtHead(head,34);
    insertAtHead(head,24);
    insertAtHead(head,14);
    insertAtHead(head,74);
    insertAtHead(head,44);
    insertAtHead(head,54);
    insertAtHead(head,89);
    PrintLL(head);
    // reverseLinkedList(head);
    Node*curr=head;
    Node*prev=NULL;
    Reverse(head,curr,prev);
    PrintLL(head);

    // insertAtHead(head,89);

return 0;
}