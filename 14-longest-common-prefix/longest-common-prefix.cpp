class Solution {
public:

   
    void check(string str1,string str2,string &ans)
    {
        
        string temp="";
        int s1=0;
        int s2=0;
        while(s1<str1.size() && s2<str2.size()){
           
            if(str1[s1]==str2[s2]){
                temp+=str1[s1];
            }
            else{
                break;
            }
            s1++;
            s2++;
        }
         if(ans != temp ){
              if(temp.size()<ans.size()){
                  ans=temp;
              }
        }
        return ;
    }
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.size()==1){
            return strs[0];
        }
       string ans="";
        int s1=0;
        int s2=0;
        string str1=strs[0];
        string str2=strs[1];
        while(s1<str1.size() && s2<str2.size()){
           
            if(str1[s1]==str2[s2]){
                ans+=str1[s1];
            }
            else{
                break;
            }
            s1++;
            s2++;
        }
       
          for(int i=1;i<strs.size()-1;i++){

               check(strs[i],strs[i+1],ans);
          }
        return ans;
    }
};

