class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int cnt=0;
        int n=tickets.size();
        while(tickets[k]!=0){
            for(int i=0;i<n;i++){
                if(tickets[k]==0)break;
                if(tickets[i]>0){
                    tickets[i]--;
                    cnt++;
                    
                }
            }
        }
        return cnt;
    }
};