class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int en=s.size()-1;
        while(st<=en){
           char temp=s[en];
           s[en]=s[st];
           s[st]=temp;
           st++;
           en--;
        }
    }
};