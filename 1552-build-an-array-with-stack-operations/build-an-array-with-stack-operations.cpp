class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<int>nums;
        vector<string>ans;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        int i=0;
        int j=0;
        while(j<target.size() && i<n)
        {
          ans.push_back("Push");
          if(nums[i]==target[j]){
             i++;j++;
          }       
         else if(nums[i]!=target[j]){
              ans.push_back("Pop");
              i++;
          }
        }
    return ans;
    }
};