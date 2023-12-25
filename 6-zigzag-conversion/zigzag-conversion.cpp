class Solution {
public:
    string convert(string s, int n) {
        vector<string>ans(n);
        int i=0;
        bool flag=false;
        if(n==1){
            return s;
        }
        for(auto it:s){
            ans[i]+=it;
            if(i==0 || i==n-1){
                flag=!flag;
            }
            if(flag){
                i+=1;
            }
            else{
                i-=1;
            }
        }
        string str="";
        for(auto it:ans){
            str+=it;
        }
        return str;

    }
};