class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;

        for(auto it:s){
            mp[it]++;
        }
      vector<pair<int,char>>v;
        for(auto it:mp){
           v.push_back({it.second,it.first});
        }
        string str="";
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--){
            while(v[i].first--){
                str.push_back(v[i].second);
            }
        }
      return str;

    }
};