class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<vector<string>>> mp;
    map<string, int> mp2;

    for (int i = 0; i < strs.size(); i++) {
        string str = strs[i];
        sort(str.begin(), str.end());
        mp2[str]++;
              mp[str].push_back({}); 
    }

    for (int i = 0; i < strs.size(); i++) {
        string str = strs[i];
        sort(str.begin(), str.end());
        if (mp2.find(str) != mp2.end()) {
                mp[str][mp2[str] - 1].push_back(strs[i]);
        }
    }   

     vector<pair<string, int>> mapVector(mp2.begin(), mp2.end());
    auto comparator = [](const auto& a, const auto& b) {
        return a.second < b.second;
    };

    
    sort(mapVector.begin(), mapVector.end(), comparator);

    
    map<string, int> sortedMap(mapVector.begin(), mapVector.end());
vector<vector<string>>ans;
    for(auto it:sortedMap){
       ans.push_back(mp[it.first][mp[it.first].size()-1]);
    }


return ans;

  }
  
};