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
    void  recursion(TreeNode* root,int &sum,int &count){
        if(root==NULL)return;
        else{
            sum=sum+root->val;
            count++;
        }
        if(root->left){
            recursion(root->left,sum,count);
        }
        if(root->right){
            recursion(root->right,sum,count);
        }
        return ;
    }
    void helper(TreeNode* root,int &ans){
        if(root==NULL){
            return ;
        }
        if(root){
           int sum=0;
           int count=0;
           recursion(root,sum,count);
           if(sum/count==root->val){
               //cout<<root->val<<" "<<sum<<" "<<count;
               
               ans++;
           }
           cout<<endl;
        }
        if(root->left){
            helper(root->left,ans);
        }
        if(root->right){
            helper(root->right,ans);
        }
        return ;
    }
    int averageOfSubtree(TreeNode* root) {
        int ans=0;
        helper(root,ans);
       return ans;
    }
};