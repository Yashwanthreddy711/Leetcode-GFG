class Solution {
public:

   void recursion(int ind,vector<int>&nums,int k,int target,vector<int>&v,vector<vector<int>>&ans){
       if(ind>nums.size())return ;
       if(v.size()>k)return ;
       if(v.size()==k){
           if(target==0){
               ans.push_back(v);
               return;
           }
          return ;
       }
       
          v.push_back(nums[ind]);
          recursion(ind+1,nums,k,target-nums[ind],v,ans);
          v.pop_back();
          recursion(ind+1,nums,k,target,v,ans);
       return ; 
   }
    vector<vector<int>> combinationSum3(int k, int target) {
        vector<int>nums;
        for(int i=1;i<=9;i++){
            nums.push_back(i);
        }
        vector<vector<int>>ans;
        vector<int>v;
        recursion(0,nums,k,target,v,ans);
        return ans;

    }
};