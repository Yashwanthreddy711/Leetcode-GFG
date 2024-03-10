class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
           unordered_map<int,int>mp;
           set<int>st;
           for(auto it:nums1){
               mp[it]++;
           }
           for(auto it:nums2){
              if(mp.find(it)!=mp.end()){
                  st.insert(it);
              }
           }
           vector<int>v(st.begin(),st.end());
           return v;
    }
};