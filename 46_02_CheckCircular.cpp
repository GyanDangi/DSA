#include <iostream>
#include <iomanip>
using namespace std;

class Node {
    public:
    int data;
    Node *next;


    // Constructor:
   Node(int data){
    this->data=data;
    this->next=NULL;
   }

};

void insertCricular(Node *&tail, int data, int element){

    if(tail==NULL){
        Node *newNode=new Node(data);
        tail=newNode;
        newNode->next=newNode;
    }

    else{
        
        
        Node*curr=tail;
        while (curr->data!=element)
        {
            curr=curr->next;
        }
        // element found:
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
        

    }
}
void printLL(Node *tail){

    if(tail==NULL){
        cout<<"empty linked list"<<endl;
        return;
    }

    Node*temp=tail;
   do
   {
  cout<<tail->data<<" ";
  tail=tail->next;
   } while (tail!=temp);
   cout<<endl;
}

// check is Circular linked list:
bool isCircularList(Node *head){
    // check empty list:
    if (head==NULL){
        return true;
    }

    Node *temp=head->next;

    while (temp!=NULL && temp!=head)
    {
        temp=temp->next;
    }
    if(temp==NULL){
        return false;
    }
   return true;
}
int main() {
    Node *tail=NULL;
    // insertCricular(tail,5,3);
    // insertCricular(tail,18,5);
    // insertCricular(tail,15,5);
    // insertCricular(tail,20,18);
    // insertCricular(tail,90,18);
    // insertCricular(tail,24,90);
    printLL(tail);
    // cout<<tail->data<<endl;
    // cout<<tail->next->data<<endl;
    // cout<<tail->next->next->data<<endl;
    if(isCircularList(tail)){
        cout<<"circular Linked list"<<endl;
    }
    else{
        cout<<"Non-circular list"<<endl;
    }
return 0;
}