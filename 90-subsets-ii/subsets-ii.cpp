class Solution {
public:
void recursion(int ind,vector<int>&nums,vector<int>&v,vector<vector<int>>&ans){
    if(ind==nums.size()){
        vector<int>temp=v;
        sort(temp.begin(),temp.end());
        auto it= find(ans.begin(),ans.end(),temp);
        if(it==ans.end()){
            ans.push_back(temp);
        }
        return ;
    }

     v.push_back(nums[ind]);
     recursion(ind+1,nums,v,ans);
     v.pop_back();
     recursion(ind+1,nums,v,ans);
     return ;
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        recursion(0,nums,v,ans);
        return ans;
    }
};