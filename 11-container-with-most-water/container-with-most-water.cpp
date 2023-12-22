class Solution {
public:
    int maxArea(vector<int>& nums) {
       
       int maxi=0;
       
       int index=0;
       int n=nums.size();
       int i=0;
       int j=nums.size()-1;
       while(i<j){
           int dis=j-i;
           int mini=min(nums[i],nums[j]);
           maxi=max(maxi,dis*mini);
           if(nums[i]>nums[j]){
               j--;
           }
           else{
               i++;
           }
       }
       return maxi;
     
    

    }
};