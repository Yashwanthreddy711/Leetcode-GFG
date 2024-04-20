class Node{
    public:
    string val;
    Node* prev=NULL;
    Node* next=NULL;
    Node(string data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};


class BrowserHistory {
public:
    Node* head=NULL;
    BrowserHistory(string homepage) {
        Node *newnode=new Node(homepage);
        head=newnode;
    }
    
    void visit(string url) {
        Node* newnode=new Node(url);
        head->next=newnode;
        newnode->prev=head;
        head=newnode;
        
    }
    
    string back(int steps) {
        while(head->prev && steps>0){
           head=head->prev;
           steps--;
        }
        return head->val;
    }
    
    string forward(int steps) {
         while(head->next && steps>0){
           head=head->next;
           steps--;
        }
        return head->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */