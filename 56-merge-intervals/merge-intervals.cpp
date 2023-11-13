class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int>temp=intervals[0];
        int n=intervals.size();
        vector<vector<int>>ans;
        for(int i=1;i<n;i++){
           if(intervals[i][0]<=temp[1]){
               temp[1]=max(temp[1],intervals[i][1]);
           }
           else{
              ans.push_back(temp);
              temp=intervals[i];
           }
        }
        ans.push_back(temp);
        return ans;
    }
};