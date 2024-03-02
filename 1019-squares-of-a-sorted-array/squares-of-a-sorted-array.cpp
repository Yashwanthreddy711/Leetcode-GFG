class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int en=n-1;
        vector<int>ans(n);
        for(int i=n-1;i>=0 && st<n && en>=0;i--)
        {
           int sm=nums[st]*nums[st];
           int lg=nums[en]*nums[en];
           if(sm>lg){
               ans[i]=sm;
               st++;
           }
           else{
               ans[i]=lg;
               en--;
           }
        }
    
      return ans;
    }
};