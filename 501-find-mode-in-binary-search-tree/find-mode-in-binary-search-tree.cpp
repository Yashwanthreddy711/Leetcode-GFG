/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void recursion(TreeNode* root,unordered_map<int,int>&mp){
    if(root==NULL)return ;
    else{
        mp[root->val]++;
    }
    if(root->left){
        recursion(root->left,mp);
    }
    if(root->right){
        recursion(root->right,mp);
    }
    return ;
}
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>mp;
        recursion(root,mp);
        vector<int>ans;

        int freq=0;
         
        for(auto it = mp.begin() ; it != mp.end() ; it++)
        {
            // cout<<it->first<<" "<<it->second<<endl ;
            if(it->second > freq)
            {
                ans.clear() ;
                ans.push_back(it->first) ;
                freq = it->second ;
            }
            else if(it->second == freq)
                ans.push_back(it->first) ; 
        }
        return ans ;
       
       
    }
};