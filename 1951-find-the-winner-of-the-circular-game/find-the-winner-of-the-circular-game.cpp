class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        int top=1;
        while(q.size()>1){
            int ele=q.front();
            q.pop();
            if(top==k){
                top=0;
            }
            else{
                q.push(ele);
            }
            top++;
        }
        return q.front();
    }
};