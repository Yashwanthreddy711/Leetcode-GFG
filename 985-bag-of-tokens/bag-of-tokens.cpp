class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        int st=0;
        int en=n-1;
        int cnt=0;
        bool b=0;
        int maxi=0;
        if(n==0)return 0;
        if(n==1){
            if(power>=tokens[0])return 1;
            else return 0;
        }
    
        
        sort(tokens.begin(),tokens.end());
        if(power<tokens[0])return 0;
        while(st<=en){
            if(power>=tokens[st]){
                power=power-tokens[st];
                st++;
                cnt++;
            }
            else{
                 
                 if(cnt>0){
                        power=power+tokens[en];
                        en--;
                       cnt--;
                      
                 }
            }
            maxi=max(maxi,cnt);
          
          
        }
        return maxi;
    
    }
};