//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        Node* temp=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return temp;
    }
    Node* addOne(Node *head) 
    {
        if(head==NULL)
        {
            return NULL;
        }
      Node* root= reverse(head);  
      Node* temp=root;
      int carry=1;
      while(temp != NULL)
      {
         int sum = temp->data + carry;
        temp->data = sum % 10;
        carry = sum / 10;
        temp = temp->next;

      }
      if(carry==1)
      {
          Node* newnode = new Node(1);
        newnode->next = NULL;
        temp = root;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
      }
      head=reverse(root);
      return head;
      
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends