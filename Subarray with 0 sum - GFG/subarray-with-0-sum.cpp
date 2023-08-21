//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        vector<int>v;
        int curr=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                return true;
            }
            
            curr=curr+arr[i];
            if(curr==0){
                return true;
            }
            v.push_back(curr);
            
        }
        unordered_map<int,int>mp;
        for(auto it:v){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second>1){
                return true;
            }
        }
        return false;
        
       
       
         }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends