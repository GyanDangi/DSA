//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{   private:
    Node * reverse(Node* head){
        
        Node *prev=NULL;
        Node *curr=head;
        Node *forward=NULL;
        
        while(curr!=NULL){
            
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    
    void InsertAttail(Node * &head, Node * &tail, int digit){
        
        Node *temp=new Node(digit);
        // Empty list:
        if(head==NULL){
            head=temp;
            tail=temp;
            return ;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
    public:
    
    struct Node* add(struct Node* first, struct Node* second){
        int carry=0;
        
        Node * ansHead=NULL;
        Node * ansTail=NULL;
        while(first!=NULL || second!=NULL || carry!=0){
        int val1=0;
        if(first!=NULL){
            val1=first->data;
        }
        int  val2=0;
        if(second!=NULL){
            val2=second->data;
        }
        
        int sum= carry+val1+val2;
        
        int digit=sum%10;
        
        InsertAttail(ansHead, ansTail, digit);
        
        carry=sum/10;
        
        if(first!=NULL){
            first=first->next;
            
        }
        if(second!=NULL){
            second=second->next;
        }
      
    }
      return ansHead;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {   
        
        // Step:01    
       first=reverse(first);
       second=reverse(second);
       
       //Step 02:
       Node *ans=add(first, second);
       
       // Step:03 reverse ans:
       ans=reverse(ans);
       
       return ans;
    }
};


//{ Driver Code Starts.

int main()
{
   
        int n, m;
        cout<<"Enter the length of linked list:"<<endl;
        cin>>n;
        cout<<"enter the first linked list element:"<<endl;
        Node* first = buildList(n);
        cout<<"enter the size of second linked list:"<<endl;
        cin>>m;
        cout<<"enter the second linked list elements:"<<endl;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        cout<<"the sum of the linked list is:"<<endl;
        printList(res);
    return 0;
}

// } Driver Code Ends