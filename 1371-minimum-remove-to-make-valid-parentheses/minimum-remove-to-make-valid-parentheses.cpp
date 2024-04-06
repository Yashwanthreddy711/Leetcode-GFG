class Solution {
public:
   string minRemoveToMakeValid(string s) {
    int cnt=0;//counting the opening brackets
    vector<char>v(s.begin(),s.end());
    for(int i=0;i<v.size();i++){
        if(v[i]=='(')cnt++;
        if(v[i]==')'){
            if(cnt==0)v[i]='*';
            else cnt--;
        }
    }
    for(int i=v.size()-1;i>=0;i--){
        if(cnt>0 && v[i]=='('){

        v[i]='*';
        cnt--;
        }
    }
    string str="";
    for(int i=0;i<v.size();i++){
        if(v[i]!='*'){
            str+=v[i];
        }
    }
    return str;
}

};