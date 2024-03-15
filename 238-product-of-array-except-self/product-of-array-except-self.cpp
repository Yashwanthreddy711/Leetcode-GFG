class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix;
        vector<int>suffix;
        int n=nums.size();
        int pro=1;
        for(int i=0;i<n;i++){
            pro=pro*nums[i];
            prefix.push_back(pro);
        }
        pro=1;
        for(int i=n-1;i>=0;i--){
            pro=pro*nums[i];
            suffix.push_back(pro);
        }
        reverse(suffix.begin(),suffix.end());

        vector<int>ans;
        for(int i=0;i<n;i++){
            if(i==0){
                ans.push_back(suffix[1]);
            }
            else if(i==n-1){
                ans.push_back(prefix[i-1]);
            }
            else{
                ans.push_back(prefix[i-1]*suffix[i+1]);
            }
        }
        return ans;
    }
};