#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    // Constructor:
    Node(int data)
    {

        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }   
};

void printLL(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int getLength(Node *head)
{

    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
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
        // create New node to insert:
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }

    else
    {
        // Create a Node to insert:
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtposition(Node *&head, Node *&tail, int position, int data)
{

    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // To insert at last position:
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, data);
        return;
    }

    // Creating a node to insert:
    Node *NodetoInsert = new Node(data);

    NodetoInsert->next = temp->next;
    temp->next->prev = NodetoInsert;
    temp->next = NodetoInsert;
    NodetoInsert->prev = temp;
}

void deleteNode(Node *&head, int position){

    // deleting first or start node:
    if(position==1){
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }

    else{
        // Middle or last position delete:
        
    }
}

int main()
{

    // Node *node1 = new Node(10);
    // Node *head = node1;
    // Node *tail = node1;

    Node *head = NULL;
    Node *tail = NULL;

    // cout << "head:" << head->data << endl;
    // cout << "tail:" << tail->data << endl;

    insertAtHead(head, tail, 12);
    printLL(head);

    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;

    insertAtTail(tail, head, 13);
    printLL(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;

    insertAtposition(head, tail, 3, 56);
    printLL(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;

    insertAtposition(head, tail, 1, 100);
    printLL(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    insertAtposition(head, tail, 5, 110);
    printLL(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    return 0;
}