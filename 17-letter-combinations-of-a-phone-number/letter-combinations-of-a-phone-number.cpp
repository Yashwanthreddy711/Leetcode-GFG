class Solution {
public:

   void recursion(int ind,vector<string>&nums,vector<string>&ans,string &str){
   
     if(ind==nums.size()){
         return ;
     }
     if(ind==nums.size()-1){
         for(int i=0;i<nums[ind].size();i++){
             str.push_back(nums[ind][i]);
             if(str.size()==nums.size()){
                 ans.push_back(str);
             }
             str.pop_back();
         }
         return ;
     }
     else{
         for(int i=0;i<nums[ind].size();i++){
             str.push_back(nums[ind][i]);
             recursion(ind+1,nums,ans,str);
             str.pop_back();
         }
         return ;
     }

      
   }
    vector<string> letterCombinations(string digits) {
        map<char,string>mp;
        for(int i=0;i<digits.size();i++){
            if(digits[i]=='2'){
                mp['2']="abc";
            }
            if(digits[i]=='3'){
                mp['3']="def";
            }
            if(digits[i]=='4'){
                mp['4']="ghi";
            }
            if(digits[i]=='5'){
                mp['5']="jkl";
            }
            if(digits[i]=='6'){
                mp['6']="mno";
            }
            if(digits[i]=='7'){
                mp['7']="pqrs";
            }
            if(digits[i]=='8'){
                mp['8']="tuv";
            }
            if(digits[i]=='9'){
                mp['9']="wxyz";
            }
        }
        vector<string>nums;
        for(auto it:digits){
            nums.push_back(mp[it]);
        }
        vector<string>ans;
        string str="";
        recursion(0,nums,ans,str);
        return ans;
    }
};