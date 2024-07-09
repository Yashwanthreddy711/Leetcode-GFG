class Solution {
public:
    int findMin(vector<int>& nums) {
        int st=0;
        int en=nums.size()-1;
        int mini=INT_MAX;
        while(st<=en){
            int mid=(st+en)/2;
        
            if(nums[st]<=nums[mid]){

                mini=min(mini,nums[st]);
                st=mid+1;
            }
            else{
               
               mini=min(mini,nums[mid]);
               en=mid-1;
            }
        }
        return mini;
    }
};