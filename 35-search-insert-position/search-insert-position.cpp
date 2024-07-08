class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0;
        int en=nums.size()-1;
        int index=-1;
        while(st<=en){
            int mid=(st+en)/2;
            if(nums[mid]==target)return mid;
            else if(target<nums[mid]){
                index=mid;
                en=mid-1;
            }
            else{
                index=mid;
                st=mid+1;
            }
        }
        
        return st;
    }
};