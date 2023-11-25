class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<int>prefix;
        int sum=0;
        for(int i=0;i<n;i++){
           sum=sum+nums[i];
           prefix.push_back(sum);
        }
        for(int i=0;i<n;i++){
            int leftsum=prefix[i]-nums[i];
            int rightsum=prefix[n-1]-prefix[i];
            int leftcount=i;
            int rightcount=n-i-1;
            int leftans=leftcount*nums[i]-leftsum;
            int rightans=rightsum-rightcount*nums[i];
            ans.push_back(leftans+rightans);
        }
        return ans;
    }
};