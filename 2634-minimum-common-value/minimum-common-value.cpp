class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
      map<int,int>mp;
      for(auto it:nums1){
          mp[it]++;
      }
      int mini=INT_MAX;
      for(auto it:nums2){
          if(mp.find(it)!=mp.end()){
              mini=min(mini,it);
          }
      }
      if(mini==INT_MAX)return -1;
      return mini;
    }
};