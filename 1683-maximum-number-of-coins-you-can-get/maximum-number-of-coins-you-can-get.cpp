class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int i=0;
        int j=n-2;
        int k=n-1;
        int ans=0;
        while(i<j && i<k){
         ans=ans+piles[j];
         i++;
         k=k-2;
         j=j-2;
        }
        return ans;
    }
};

/// 2 7 8   -7
// 1 2 2 4  7 8

//1 2 3 4 5 6 7 8 9
//1 8 9
//2 6 7
//3 4 5