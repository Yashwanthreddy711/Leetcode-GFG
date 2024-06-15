class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int i = 0, j = 0;
        int maxi = 0;
        
        while (j < s.size()) {
            if (mp.find(s[j]) == mp.end() || mp[s[j]] == 0) {
                mp[s[j]]++;
                j++;
                maxi = max(maxi, j - i);
            } else {
                mp[s[i]]--;
                i++;
            }
        }
        
        return maxi;
    }
};
