//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
void recursion(int ind, int sum, int n, vector<int>& ans, const vector<int>& arr) {
    if (ind > n) {
        ans.push_back(sum);
        return;
    }
    recursion(ind + 1, sum + arr[ind], n, ans, arr);
    recursion(ind + 1, sum, n, ans, arr);
    return;
}

vector<int> subsetSums(vector<int> arr, int N) {
    vector<int> ans;
    recursion(0, 0, N - 1, ans, arr);
    sort(ans.begin(), ans.end());
    return ans;
}

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends