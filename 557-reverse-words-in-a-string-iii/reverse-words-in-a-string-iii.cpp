class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(str.begin(),str.end());
                ans+=str;
                ans+=" ";
                str="";
            }
            else{
                str.push_back(s[i]);
            }
        }
        reverse(str.begin(),str.end());
        ans+=str;
        return ans;
    }
};