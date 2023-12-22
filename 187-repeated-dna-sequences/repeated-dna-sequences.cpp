class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int>mp;
        int  k=10;
        string str="";
        for(int i=0;i<k;i++){
            str.push_back(s[i]);
            mp[str]++;
        }
        int j=k-1;
        while(j<s.size()){
           j++;
           str.push_back(s[j]);
           str.erase(str.begin());
           mp[str]++;
        }
     vector<string>ans;
        for(auto it:mp){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};