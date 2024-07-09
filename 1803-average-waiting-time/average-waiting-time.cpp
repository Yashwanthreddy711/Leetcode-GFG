class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& nums) {
        int count=0;
        int totalTime=0;
        double averageTime=0;
        while(count<nums.size()){
            if(totalTime<nums[count][0]){
                totalTime=nums[count][0];
            }
            totalTime=totalTime+nums[count][1];
            averageTime=averageTime+(totalTime-nums[count][0]);
            count++;
        }
        cout<<averageTime;
        double ans=(averageTime)/double(nums.size());
        return ans;
    }
};