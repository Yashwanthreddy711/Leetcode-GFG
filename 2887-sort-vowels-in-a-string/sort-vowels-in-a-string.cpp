class Solution {
public:
    string sortVowels(string s) {
        string str="";
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                str.push_back(s[i]);
            }
        }
        sort(str.begin(),str.end());
        
         for (char c : str) {
           st.push(c);
           }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                s[i]=st.top();
                st.pop();
            }
        }
        return s;
    }
};