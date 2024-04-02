class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        unordered_map<char,char>mp2;
        int n=s.size();
        mp[s[0]]=t[0];
        mp2[t[0]]=s[0];
        for(int i=1;i<n;i++){
          if(mp.find(s[i])!=mp.end()){
            if(mp[s[i]]!=t[i])return false;
          }  
          else{
           mp[s[i]]=t[i];
          }
          if(mp2.find(t[i])!=mp2.end()){
            if(mp2[t[i]]!=s[i])return false;
          }  
          else{
           mp2[t[i]]=s[i];
          }
          
        }
        return true;
    }
};