#include <iostream>
#include <iomanip>
using namespace std;
class Node
{

public:
    int data;
    Node *next;

    // Constructor:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int data)
{

    // Empty Linked list:
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    // Non-empty list:
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void PrintLL(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getlength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

// Approach 1:  using length:
int MiddleOFLL(Node *head)
{
    int len = getlength(head);
    int ans = (len / 2);
    Node *temp = head;
    int cnt = 0;
    while (cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }
    int value = temp->data;
    return value;
}

// Approach 2: using two pointer:
int getMiddle(Node *head)
{

    // Base Case:
    if (head == NULL || head->next == NULL)
    {   
        int value=head->data;
        return value;
    }

    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    int value=slow->data;
    return value;
}
int main()
{
    Node *head = NULL;
    PrintLL(head);
    InsertAtHead(head, 12);
    InsertAtHead(head, 13);
    InsertAtHead(head, 14);
    InsertAtHead(head, 15);
    InsertAtHead(head, 16);
    PrintLL(head);
    cout << getlength(head);
    cout << endl;
    cout << MiddleOFLL(head);
    cout << endl;
    cout<<getMiddle(head)<<endl;
    PrintLL(head);
    return 0;
}