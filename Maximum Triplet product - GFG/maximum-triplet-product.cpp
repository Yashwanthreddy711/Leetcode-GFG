//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long nums[], int n)
    {
    	// Complete the function
    // 	int i=0;
    // 	long long maxi=INT_MIN;
    // 	sort(nums,nums+n);
    	
    // 	for(int i=0;i<n;i++)
    // 	{
    // 	    int j=i+1;
    // 	    int k=n-1;
    // 	    while(j<k)
    // 	    {
    // 	        long long prod=nums[i]*nums[j]*nums[k];
    // 	        if(prod>=maxi)
    // 	        {
    // 	            maxi=prod;
    // 	            j++;
    // 	        }
    // 	        if(prod<maxi)
    // 	        {
    // 	            k--;
    // 	        }
    // 	    }
    // 	}
    
    sort(nums,nums+n);
   long long first=nums[n-1];
    long long  second=nums[n-2];
  long long  third=nums[n-3];
   long long  nfirst=nums[0];
   long long  nsecond=nums[1];
    
    return max((first*second*third),(first*nfirst*nsecond));
    
   
    	
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends