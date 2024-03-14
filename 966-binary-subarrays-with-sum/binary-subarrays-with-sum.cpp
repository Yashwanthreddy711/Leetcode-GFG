class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        int n= nums.size();
       int count=0;
       int sum=0;
       unordered_map<int,int>prevsum;
       for(int i=0;i<n;i++)
       {
             sum=sum+nums[i];
             if(sum==k)
             {
                 count++;
             }
             if(prevsum.find(sum-k) != prevsum.end())
             {
                 count=count+prevsum[sum-k];
             }
             prevsum[sum]++;
           
       }
       return count;
    }
};