class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& nums, int target) {
        
        vector<int>v;
        int n=nums.size();
      
        
        for(int i=0;i<n;i++){
            int a=nums[i][0];
        int b=nums[i][1];
        int c=nums[i][2];
        int d=nums[i][3];
            long long ans=0;
            long long temp=1;
           
          while(nums[i][1]--){
             temp=(temp*a)%10;
              
          }
            
            
               ans=1;
            
          
          while(nums[i][2]--){
             ans=(ans*temp)%d;
          }
            
          
            if(ans==target){
                v.push_back(i);
            }
            
        }
        return v;
    }
};