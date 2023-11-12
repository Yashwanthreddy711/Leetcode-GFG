class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int a=0;
        int b=0;
        for(auto it:mp){
            auto temp=mp.find(target-it.first);
            if(temp!=mp.end()){
                a=it.first;
                 b=temp->first;
                 break;
            }
        }
        cout<<a<<"  "<<b<<endl;
        vector<int>v;
        bool a1=0;
        bool a2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==a && !a1){
                v.push_back(i);
                a1=1;
            }
            else if(nums[i]==b && !a2){
                v.push_back(i);
            }
        }
        return v;
    }
};