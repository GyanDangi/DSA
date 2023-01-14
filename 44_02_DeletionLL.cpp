#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int data;
    Node *next;


    // Data set krne ke liye:
    Node(int data)
    {

        this->data = data;
        this->next = NULL;
    }

    // Destructor for deleting node:
    ~ Node(){
        int value= this->data;
        // pointer ko delete krne ke liye hai.
        if(this->next!=NULL){
            delete next;
            this->next= NULL;
        }
        cout<<"Memory is free for data:"<<value<<endl;
    }
};

void insertAtHead(Node *&head, int data)
{

    // Create  New node to insert:
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void PrintLL(Node *&head)
{

    // Create temp Node to traverse:
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(Node* &head, int position){

        

        // Deletion of first or Start Node:
        if (position==1){
            
            // temp me store krwa kr ke temp ko delete kr denge:
            Node *temp=head;
            head=head->next;
            // heap me dynamically allocate kiya hai isliye destructor se manually delete krna padega:
            temp->next=NULL;
            delete temp;
        }
        else{
            // deleting any middle node or last node:

            Node *curnt=head;
            Node *prev=NULL;
            int cnt=1;
            while (cnt<position)
            {
                prev=curnt;
                curnt=curnt->next;
                cnt++;
            }
            prev->next=curnt->next;
            curnt->next=NULL;
            delete curnt;
            
        }

      
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    // PrintLL(head);
    insertAtHead(head, 12);
    insertAtHead(head, 15);
    insertAtHead(head, 22);
    insertAtHead(head, 45);

    PrintLL(head);
    cout << head->data <<endl;
    deleteNode(head,1);
    PrintLL(head);
    cout << head->data <<endl;
    return 0;
}