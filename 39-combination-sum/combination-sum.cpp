class Solution {
public:
void recursion(int ind,int sum,int target,vector<int>&nums,vector<int>&v,vector<vector<int>>&ans){
    if(ind>=nums.size())return ;
    if(sum>target){
        return ;
    }
    if(sum==target){
        ans.push_back(v);
        return ;
    }

    v.push_back(nums[ind]);
    recursion(ind,sum+nums[ind],target,nums,v,ans);
    v.pop_back();
    recursion(ind+1,sum,target,nums,v,ans);
    return ;
    
}
    vector<vector<int>> combinationSum(vector<int>&nums,int target) {
        vector<vector<int>>ans;
        vector<int>v;
        recursion(0,0,target,nums,v,ans);
        return ans;
    }
};