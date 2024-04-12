class Solution {
public:
    int trap(vector<int>&nums) {
        int n=nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        
        int maxi=0;
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        
        for(int i=1;i<n;i++){
           maxi=max(prefix[i-1],nums[i]);
           prefix[i]=maxi;
        }
      
        suffix.push_back(nums[n-1]);
        for(int i=n-2;i>=0;i--){
            int maxi=max(suffix[i+1],nums[i]);
            suffix[i]=maxi;
        }  
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+(min(prefix[i],suffix[i])-nums[i]);
        }

        return sum;

    }
};