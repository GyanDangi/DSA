#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

// Approach 1: array me sara nodes ka data copy kr lenge fir useme check kr lenge:


// Approach: 02
class Solution{
private:
 Node* getMiddle(Node * head){
     
     Node *slow=head;
     Node *fast=head->next;
     
     while(fast!=NULL && fast->next !=NULL){
         fast=fast->next->next;
         slow=slow->next;
     }
     
     return slow;
 }
 
 Node * reverse(Node *head){
     
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
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        
        if(head->next== NULL){
            return true;
        }
        
        // Step1 middle nikal lo
        Node *middle=getMiddle(head);
        
        // Step2 middle ke age ka reverse kr do
        
        Node *temp=middle->next;
        middle->next=reverse(temp);
        
        // Step3: compare both half:
        Node *head1=head;
        Node *head2=middle->next;
        
        while(head2!=NULL){
            if(head1->data!=head2->data){
                return false;
            }
            
            head1=head1->next;
            head2=head2->next;
        }

        // Step4 : jane se pahle ek baar fir se reverse kr do 
        temp=middle->next;
        middle->next=reverse(temp);
        return true;
    }
};

int main()
{
  int T,i,n,l,firstdata;
  cout<<"enter the number of testcase:";
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cout<<"enter the number of nodes:";
        cin>>n;
        // taking first data of LL
        cout<<"enter the node->data"<<endl;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends