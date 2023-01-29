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

    // Destructor:
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;

        }
        cout<<"memory free for the node data:"<<value<<endl;
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

void removeDuplicate(Node *head)
{

    if (head == NULL)
    {
        return ;
    }

    Node *curr = head;

    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodeTodelete = curr->next;
            delete (nodeTodelete);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
    
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    cout << "this is sorted linked list:" << endl;

    insertAtTail(tail, head, 34);
    insertAtTail(tail, head, 34);
    insertAtTail(tail, head, 35);
    insertAtTail(tail, head, 35);
    insertAtTail(tail, head, 36);
    insertAtTail(tail, head, 37);
    printLL(head);
    removeDuplicate(head);
    cout<<head->data<<endl;
    printLL(head);


    return 0;
}