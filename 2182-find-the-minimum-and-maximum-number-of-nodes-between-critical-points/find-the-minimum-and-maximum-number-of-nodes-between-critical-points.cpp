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
  vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    vector<int> v;
    if (!head || !head->next || !head->next->next) return {-1, -1};
    
    ListNode* curr = head->next;
    ListNode* prev = head;
    ListNode* nextnode = head->next->next;
    
    int count = 1;
    
    while (nextnode != NULL) {
        if ((curr->val > nextnode->val && curr->val > prev->val) ||
            (curr->val < nextnode->val && curr->val < prev->val)) {
            v.push_back(count + 1);
        }
        curr = curr->next;
        prev = prev->next;
        nextnode = nextnode->next;
        count++;
    }

    if (v.size() < 2) return {-1, -1};
    
    sort(v.begin(), v.end());
    int n = v.size();
    int minDist = v[1] - v[0];
    for (int i = 1; i < n - 1; ++i) {
        minDist = min(minDist, v[i+1] - v[i]);
    }
    
    return {minDist, v[n-1] - v[0]};
}
};