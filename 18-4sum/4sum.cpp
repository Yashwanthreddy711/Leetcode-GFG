class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        vector<vector<int>>ans;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int s1=j+1;
                int e1=n-1;
                long long sum=(long long)target- (long long)nums[i]-(long long)nums[j];
                while(s1<e1){
                    if(nums[s1]+nums[e1]<sum){
                            s1++;
                    }
                    else if(nums[s1]+ nums[e1]>sum){
                        e1--;
                    }
                    else{
                        st.insert({nums[i],nums[j],nums[s1],nums[e1]});
                        s1++;
                        e1--;
                    }
                }
            }
        }
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};