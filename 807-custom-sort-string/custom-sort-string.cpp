class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        
        for(auto it:s){
            mp[it]++;
        }
        string str="";
        for(int i=0;i<order.size();i++){
            if(mp.find(order[i])!=mp.end()){

                int cnt=mp[order[i]];
                while(cnt--){
                   str+=order[i];
                }
                
                mp.erase(order[i]);
                
            }
        }
        for(auto it:mp){
            if(it.second>1){
                int cnt=it.second;
                while(cnt--){
                    str+=it.first;
                }
                }
            else{
              str+=it.first;
            }
            
        }

        return str;
    }
};