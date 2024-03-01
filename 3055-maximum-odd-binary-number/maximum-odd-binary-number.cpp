class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int cnt=0;
        for(auto it:s){
           if(it=='1')cnt++;
        }
        string str="";
        n=n-1;
        while(n--){
         if(cnt>1){
             str.push_back('1');
             cnt--;
         }
         else{
             str.push_back('0');
         }
        }
        str.push_back('1');

        return str;
    }
};