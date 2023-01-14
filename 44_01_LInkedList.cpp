#include <iostream>
#include <iomanip>
using namespace std;

class Node
{

public:
    int data;
    Node *next;


    // Data Set krne ke liye bannaya hai.
    Node (int data){
        this->data=data;
        this->next=NULL;
    }
};

// Insert At head:
void insertAtHead(Node* &head, int data){

    // New node Create:
     Node* temp=new Node(data);


     temp-> next=head;
     head=temp;
}

void insertAtTail(Node* &tail,int data){

    
    // New node Create:
     Node* temp=new Node(data);

     tail->next =temp; 
 
     tail=temp;


}

void insertPosition(Node* &tail, Node* &head, int position, int data){

    // agar first position pr hi dalna hai.
    if(position==1){
        insertAtHead(head,data);
        return;
    }



    // Traverse krne ke liye:
    Node* temp=head;
    // pahle hum 1st position pr rhenge:
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    // Inserting last position:
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }

    // create Node for d:
    Node * nodeToInsert= new Node(data);
    nodeToInsert->next= temp->next;
    temp->next= nodeToInsert;

}

// Printing Linked List:
void printLL(Node* &head){

    Node* temp=head;
   
    while (temp!=NULL)
    {
        cout<<temp->data<< " ";
        temp= temp->next;

    }
    cout<<endl;
    
}


int main()
{

    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head=node1;
/* 
    // Insertion At head:

    printLL(head);
    insertAtHead(head,12);
    printLL(head);
    insertAtHead(head,15);
    printLL(head);
                       */

    Node *tail= node1;
    // Insertion at tail:
    printLL(head);
    insertAtTail(tail,12);
    printLL(head);
    insertAtTail(tail,15);
    printLL(head);

    // Insertion at given position:
    // insertPosition(head,3,22);
    // printLL(head);
    // insertPosition(head,1,22);
    // printLL(head);
    insertPosition(tail,head,4,22);
    printLL(head);

    cout << head->data << endl;
    cout << tail->data << endl;

    return 0;
}