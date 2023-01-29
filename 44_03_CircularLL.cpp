#include <iostream>
#include <iomanip>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    // Constructor:
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    // Destructor:
    ~Node(){
        int val=this->data;
        if (this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory is free of the data:"<<val<<endl;
        
    }
};

void insertNode(Node *&tail, int element, int data){

    // Empty List:
    if(tail==NULL){

        Node *newNode= new Node(data);
        tail=newNode;
        newNode->next=newNode;
    }

    else{
        //Non-empty list

        Node*curr=tail;
        while (curr->data!=element)
        {
            curr=curr->next;
        }
        // Element found:
        Node *temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void printCL(Node* tail){
    Node*temp=tail;

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}



int main() {


    Node *tail=NULL;

    insertNode(tail,5,3);
    printCL(tail);
    insertNode(tail,3,5);
    printCL(tail);
    insertNode(tail,5,9);
    printCL(tail);
    insertNode(tail,5,10);
    printCL(tail);
    cout<<tail->data<<endl;

return 0;
}