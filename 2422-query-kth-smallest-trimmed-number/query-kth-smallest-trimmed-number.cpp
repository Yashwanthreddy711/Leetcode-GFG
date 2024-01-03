class Solution {
public:
    static bool comp(const pair<string, int>& a, const pair<string, int>& b) {
        if(a.first==b.first){
            return a.second<b.second;
        }
        return a.first < b.first;
    }
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        for(auto it:queries){
            vector<pair<string,int>>v;
            for(int i=0;i<nums.size();i++){
                string str=nums[i].substr(nums[i].size()-it[1]);
                v.push_back({str,i});
            }
            sort(v.begin(),v.end(),comp);
            // for(int i=0;i<v.size();i++){
            //     cout<<v[i].first<<endl;
            // }
            ans.push_back(v[it[0]-1].second);
        }
        return ans;
    }
    
};

