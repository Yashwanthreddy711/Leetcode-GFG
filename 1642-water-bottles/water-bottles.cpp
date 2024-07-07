class Solution {
public:
    int numWaterBottles(int num, int count) {
        int ans=num;
        int empty=num;
        while(empty>=count){
            if(empty>=count){
            empty=empty-count;
                ans++;
                empty++;
            }
        }

        return ans;
        
    }
};