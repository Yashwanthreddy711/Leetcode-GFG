class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
      
      int mini=INT_MAX;
      int i=0,j=0;
       while(i<nums1.size() && j<nums2.size()){
           if(nums1[i]==nums2[j]){
               mini=min(mini,nums1[i]);
               i++;
               j++;
           }
           else if(nums1[i]<nums2[j]){
               i++;
           }
           else if(nums1[i]>nums2[j]){
               j++;
           }
       }
      if(mini==INT_MAX)return -1;
      return mini;
    }
};