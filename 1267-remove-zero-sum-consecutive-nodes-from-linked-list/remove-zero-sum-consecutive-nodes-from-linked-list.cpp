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

   
    ListNode* removeZeroSumSublists(ListNode* head) {
           
           unordered_map<int,ListNode*>mp;

           ListNode* dummy=new ListNode();
           dummy->next=head;
           mp[0]=dummy;
           int prefix=0;
           while(head!=NULL){
             prefix=prefix+head->val;
             if(mp.find(prefix)!=mp.end()){

                ListNode* start=mp[prefix];
                ListNode* temp=start;
                int sum=prefix;
                while(temp!=head){
                    temp=temp->next;
                    sum+=temp->val;
                    if(temp!=head){
                        mp.erase(sum);
                    }
                }
  
              start->next=head->next;


             }
             else{
                mp[prefix]=head;
             }
             head=head->next;
           }

           return dummy->next;
    }
};