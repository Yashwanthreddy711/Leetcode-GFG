class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int st=0;
        int en=n-1;
        int maxi=0;
        while(st<en){
            if(s[st]==s[en]){
                char temp=s[st];
                while(s[st]==temp && st<=en){
                    st++;
                }
                while(s[en]==temp && en>=st){
                    en--;
                }
            }
            else{
                 break;
            }
        }
        
        return en-st+1;
    }
};