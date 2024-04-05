class Solution {
public:
  
    string makeGood(string s) {
       stack<char>st;
       int i=0;
        for (char c : s) {
        if (!st.empty() && abs(st.top() - c) == 32) {
            st.pop(); // Remove the last element from stack
        } else {
            st.push(c); // Push current character onto stack
        }
    }
       string str="";
         while(!st.empty()){
            str.push_back(st.top());
            st.pop();
         }

         reverse(str.begin(),str.end());
         return str;
    }
};