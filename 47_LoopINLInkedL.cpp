#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

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
void printLL(Node *head)
{
    if (head == NULL)
    {
        cout << "linked list empty" << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//  Approach:01
bool detectLoop(Node *head)
{

    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "Loop present at:" << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

// Approach: 02 Floyd's Algorithm

Node *floyDetectLoop(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
        if (slow == fast)
        {
            cout << "Loop present at data:" << slow->data << endl;
            return slow;
        }
    }

    return NULL;
}

Node*  getStartingNode(Node *head){
    if (head==NULL){
        return NULL;    
    }

    Node *intersection=floyDetectLoop(head);
    Node * slow=head;

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }

    return slow;
}

void removeLoop(Node *head){

    if(head==NULL){
        return ;
    }

    Node *StartingNode=getStartingNode(head);
    Node*temp=StartingNode;
    while(temp->next!=StartingNode){
        temp=temp->next;
    }
    temp->next=NULL;
}
int main()
{

    Node *head = new Node(10);
    Node *tail = head;
    insertAtHead(head, tail, 12);
    insertAtHead(head, tail, 15);
    insertAtHead(head, tail, 22);
    insertAtTail(tail, head, 43);
    tail->next = head->next;
    cout << head->next->data << endl;

    // printLL(head);
    /*
    if(detectLoop(head)){
        cout<<"Loop is present"<<endl;
    }

    else{
        cout<<"loop is not present"<<endl;
    }

    */
    if (floyDetectLoop(head) != NULL)
    {
        cout << "Loop is present" << endl;
    }

    else
    {
        cout << "loop is not present" << endl;
    }

    // Getting starting node of the loop:

    // Node *loop =getStartingNode(head);
    // cout<<"Loop starts at:"<<loop->data<<endl;

    removeLoop(head);
    printLL(head);
    return 0;
}