#include <iostream>
#include <iomanip>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // Data Set krne ke liye bannaya hai.
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Insert At head:
void insertAtHead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {

        // New node Create:
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int data)
{

    // for empty Linked list:
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {

        // New node Create:
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

void insertPosition(Node *&tail, Node *&head, int position, int data)
{

    // agar first position pr hi dalna hai.
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    // Traverse krne ke liye:
    Node *temp = head;
    // pahle hum 1st position pr rhenge:
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Inserting last position:
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, data);
        return;
    }

    // create Node for d:
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Printing Linked List:
void printLL(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void sort_0_1_2(Node* head){

    int zeroCount=0;
    int oneCount =0;
    int twoCount =0;
    
    Node* temp=head;

    // Count store krwa liya:
    while(temp!=NULL){

        if(temp->data==0){
            zeroCount++;
        }
        else if(temp->data==1){
            oneCount++;
        }
        else if(temp->data==2){
            twoCount++;
        }

        temp=temp->next;
    }

    // Replace kr denge: vapas se temp ko head kr do.
    temp=head;
    while (temp!=NULL)
    {
        if(zeroCount!=0){
            temp->data=0;
            zeroCount--;
        }
        else if(oneCount!=0){
            temp->data=1;
            oneCount--;
        }
        else if(twoCount!=0){
            temp->data=2;
            twoCount--;
        }
        temp=temp->next;
    }
    
}
// Approach 2: sort 0,1,2, in linked list:
void InsertTail(Node *&tail,Node *curr){

    tail->next=curr;
    tail=curr;
}
void sort012(Node*head){

    // dummy node
    Node *zeroHead=new Node(-1);
    Node *zeroTail=zeroHead;
    Node *oneHead =new Node(-1);
    Node *oneTail=oneHead;
    Node *twoHead =new Node(-1);
    Node *twoTail=twoHead;

    Node* curr=head;

    while(curr!=NULL){

        int val=curr->data;
        if(val==0){
            InsertTail(zeroTail, curr);
        }
        else if(val==1){
            InsertTail(oneTail,curr);

        }
        else if(val==2){
            InsertTail(twoTail,curr);
        }

        curr=curr->next;
    }

    // Merge kr denge tino sub list ko:
    
    // List empty nahi hai 1 wali.
    if(oneHead->next!=NULL){
        zeroTail->next=oneHead->next;
    }
    else{
        zeroTail->next=twoHead;
    }
    oneTail->next=twoHead->next;
    twoTail->next=NULL;

    head=zeroHead->next;

    // delete Dummy Node:
    delete(zeroHead);
    delete(oneHead);
    delete(twoHead);
}
int main()
{

    // Node *node1 = new Node(10);
    // // cout << node1->data << endl;
    // // cout << node1->next << endl;

    // Node *head = node1;
    /*
        // Insertion At head:

        printLL(head);
        insertAtHead(head,12);
        printLL(head);
        insertAtHead(head,15);
        printLL(head);
                           */

    // Node *tail = node1;

/*
    Node *head=NULL;
    Node *tail=NULL;
    // Insertion at tail:
    printLL(head);
    insertAtTail(tail, head, 12);
    printLL(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    insertAtTail(tail, head, 15);
    printLL(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;

    insertAtHead(head, tail, 89);
    printLL(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;

    // Insertion at given position:
    // insertPosition(head,3,22);
    // printLL(head);
    // insertPosition(head,1,22);
    // printLL(head);
    insertPosition(tail, head, 4, 22);
    printLL(head);

    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;

    */


   Node *head=NULL;
   Node *tail=NULL;
   insertAtTail(tail, head, 2);
   insertAtTail(tail, head, 1);
   insertAtTail(tail, head, 2);
   insertAtTail(tail, head, 0);
   insertAtTail(tail, head, 0);
   insertAtTail(tail, head, 1);
   insertAtTail(tail, head, 2);
   insertAtTail(tail, head, 0);
   cout<<"before sort:"<<endl;
   printLL(head);
   cout<<"After sort:"<<endl;
   sort_0_1_2(head);
   printLL(head);
   sort012(head);
   cout<<"sort using approach 2"<<endl;
   printLL(head);
    return 0;
}