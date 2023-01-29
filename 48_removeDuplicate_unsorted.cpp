#include <bits/stdc++.h>
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

    // Destructor:
    ~Node(){
        // int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        // cout<<"memory free for the node data:"<<value<<endl;
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

void removeDuplicates(Node *head)
{   
   unordered_set<int> seen;
   Node*curr=head;
   Node*prev=NULL;

   while(curr!=NULL){
       if(seen.find(curr->data)!=seen.end()){
           prev->next=curr->next;
           delete(curr);
       }
       else{
           seen.insert(curr->data);
           prev=curr;
       }
       curr=prev->next;
   }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    cout << "this is sorted linked list:" << endl;

    insertAtTail(tail, head, 34);
    insertAtTail(tail, head, 35);
    insertAtTail(tail, head, 35);
    insertAtTail(tail, head, 34);
    insertAtTail(tail, head, 36);
    insertAtTail(tail, head, 37);
    printLL(head);
    // removeDuplicate(head);
    removeDuplicates(head);
    // cout<<head->data<<endl;
    printLL(head);


    return 0;
}