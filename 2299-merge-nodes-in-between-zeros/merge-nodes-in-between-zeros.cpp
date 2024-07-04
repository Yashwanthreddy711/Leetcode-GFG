/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        ListNode* dummy=new ListNode();
        ListNode* tdummy=dummy;
        int sum=0;
        bool b=false;
        while(temp!=NULL){
           if(temp->val==0){
             b=true;
           }
           if(b){
            sum=sum+temp->val;
           }
           if(b && temp->next && temp->next->val==0){
              ListNode* newnode= new ListNode(sum);
              tdummy->next=newnode;
              tdummy=newnode;
              sum=0;
           }
           temp=temp->next;
        }
        return dummy->next;
    }
};