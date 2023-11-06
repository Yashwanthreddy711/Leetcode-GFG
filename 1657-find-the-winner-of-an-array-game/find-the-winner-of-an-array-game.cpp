class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int cons=0;
        queue<int>q;
        int maxi=0;
        if(k>arr.size()){
          for(int i=0;i<arr.size();i++){
              maxi=max(maxi,arr[i]);
          }
          return maxi;
        }
        for(auto it:arr){
            q.push(it);
        }
        int temp=q.front();
        q.pop();
        while(cons!=k){
          int temp2=q.front();
          q.pop();
          if(temp>temp2){
             q.push(temp2);
             cons++;
          }
          else{
              q.push(temp);
              temp=temp2;
              cons=1;
          }
        }
        return temp;
    }
};