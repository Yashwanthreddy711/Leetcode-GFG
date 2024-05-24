class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=-1;
        int mid=0;
        while(s<=e){
               mid=(s+e)/2;
              if(nums[mid]==target)return mid;
              if(nums[s]<=nums[mid]){
                if(nums[s]<=target && target<=nums[mid]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
              }
              else{
                if(nums[mid]<=target && target<=nums[e]){
                   s=mid+1;
                }
                else{
                    e=mid-1;
                }
              }

    }
    return -1;
    }
};


//find the middle element 
//if the first element and last element of search space is grateer than the elemet 
