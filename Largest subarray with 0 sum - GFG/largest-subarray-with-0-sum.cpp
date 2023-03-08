//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    // void recursion(vector<int>&A,vector<int>&v,int n,int index,int &max,int target,int sum)
    // {
    //     if(sum==target)
    //     {
    //         if(v.size()>max)
    //       {
    //           max=v.size();
    //       }
    //         return;
    //     }
    //     if(index==n)
    //     {
    //       return;
    //     }
    //     v.push_back(A[index]);
    //     recursion(A,v,n,index+1,max,target,sum-A[index]);
    //     v.pop_back();
    // }
   int maxLen(vector<int>& A, int n)
{  
    map<int,int> mp;
    int maxLength = 0;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += A[i];
        if (sum == 0) {
            maxLength = i + 1;
        } else if (mp.find(sum) != mp.end()) {
            maxLength = max(maxLength, i - mp[sum]);
        } else {
            mp[sum] = i;
        }
    }
    return maxLength;


        // int index=0;
        // int max=0;
        // int target=0;
        // int sum=0;
        // vector<int>v;
        // recursion(A,v,n-1,index,max,target,sum);
        // return max;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends