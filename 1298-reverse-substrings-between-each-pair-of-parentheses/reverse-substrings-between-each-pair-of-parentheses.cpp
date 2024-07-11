class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        queue<char>q;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
             while(!st.empty() && st.top()!='('){
                char t=st.top();
                cout<<t;
                st.pop();
               q.push(t);
             }  
             st.pop();
             while(!q.empty()){
                st.push(q.front());
                q.pop();
             }
            }
            else{
                  st.push(s[i]);
            }
        
        }
        string str;
        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;

    }
};