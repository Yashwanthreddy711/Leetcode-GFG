class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
       for(int i=0;i<s.size();i++){
           mp[s[i]]++;
       }
       int cnt=0;
       int oddcnt=0;
       for(auto it:mp){
          if(it.second%2==0){
             cnt=cnt+it.second;
          }
          else if(it.second%2!=0){
            if(it.second==1){
                oddcnt++;
            }
            else{
                cnt=cnt+it.second-1;
                oddcnt++;
            }

          }
          
       }
       if(oddcnt>0)cnt++;
       return cnt;
    }
};