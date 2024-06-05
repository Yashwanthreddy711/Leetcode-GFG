class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>commonChar(26,INT_MAX);
        vector<string>ans;
        for(auto c:words){
            vector<int>cnt(26,0);
            for(auto it:c){
                cnt[it-'a']++;
            }
            for(int i=0;i<26;i++){
                commonChar[i]=min(commonChar[i],cnt[i]);
            }
        }
        for(int i=0;i<26;i++){
            for(int j=0;j<commonChar[i];j++){
               ans.push_back(string(1,i+'a'));
            }
        }
        return ans;
    }
};