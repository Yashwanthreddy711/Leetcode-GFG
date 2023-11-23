class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            vector<int>v;
            for(int j=l[i];j<=r[i];j++){
                v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
            for(auto it:v){
                cout<<it<<" ";
            }
            cout<<endl;
            int diff=v[1]-v[0];
            int boo=0;
            for(int i=2;i<v.size();i++){
                if(v[i]-v[i-1]!=diff){
                     boo=1;
                     break;
                }
            }
            if(boo){
                ans.push_back(false);
            }
            else{
                ans.push_back(true);
            }
        }
        return ans;
    }
};