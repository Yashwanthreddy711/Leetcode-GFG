class Solution {
public:
    int pivotInteger(int n) {
        vector<int>prefix;
        vector<int>suffix;
        int sum=0;
        for(int i=1;i<=n;i++){
           sum=sum+i;
           prefix.push_back(sum);
        }
        sum=0;
        for(int i=n;i>=1;i--){
            sum=sum+i;
            suffix.push_back(sum);
        }
        reverse(suffix.begin(),suffix.end());
        for(auto it:prefix){
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it:suffix){
            cout<<it<<" ";
        }
        for(int i=0;i<prefix.size();i++){
            if(prefix[i]==suffix[i]){
                return i+1;
            }
        }
        return -1;
    }
};