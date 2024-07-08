class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int mini=INT_MAX;
        int maxi=INT_MIN;
        
        int st=0;
        int en=nums.size()-1;
        while(st<=en){
            int mid=(st+en)/2;
            if(nums[mid]==target){
                mini=min(mini,mid);
                en=mid-1;
            }
            else if(target<nums[mid]){
                en=mid-1;
            }
            else{
                st=mid+1;
            }
        }
          st=0;
        en=nums.size()-1;
    
        while(st<=en){
            int mid=(st+en)/2;
            if(nums[mid]==target){
                maxi=max(maxi,mid);
                st=mid+1;
            }
            else if(target<nums[mid]){
                en=mid-1;
            }
            else{
                st=mid+1;
            }
        }

     if(maxi==INT_MIN && mini==INT_MAX)return {-1,-1};


        return {mini,maxi};
        
    }
};