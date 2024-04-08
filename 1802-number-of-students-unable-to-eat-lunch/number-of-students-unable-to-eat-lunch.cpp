class Solution {
public:
    int countStudents(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        queue<int>q;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=m-1;i>=0;i--){
            st.push(nums2[i]);
        }
        for(int i=0;i<n;i++){
            q.push(nums1[i]);
        }
        int cnt=0;
        while(!q.empty() && !st.empty() && (cnt<q.size())){
            int top=q.front();
            q.pop();
            if(st.top()!=top){
               q.push(top);
               cnt++;
            }
            else{
                st.pop();
                cnt=0;
            }
            
        }
        return q.size();

    }
};