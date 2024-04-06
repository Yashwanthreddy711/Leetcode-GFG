class Solution {
public:
   string minRemoveToMakeValid(string s) {
    stack<pair<char,int>> st;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') {
            st.push({'(',i});
        } else if(s[i] == ')') {
            if(!st.empty() && st.top().first == '(') {
                st.pop();
            } else {
                // If ')' without a matching '('
                st.push({')', i});
            }
        }
    }
    
    // Create a set of indexes to remove
    unordered_set<int> indexesToRemove;
    while(!st.empty()) {
        indexesToRemove.insert(st.top().second);
        st.pop();
    }
    
    string str = "";
    for(int i = 0; i < s.size(); i++) {
        if(indexesToRemove.find(i) == indexesToRemove.end()) {
            str.push_back(s[i]);
        }
    }
    
    return str;
}

};