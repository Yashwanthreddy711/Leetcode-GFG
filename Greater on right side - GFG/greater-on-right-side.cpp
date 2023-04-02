//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) {
	   
	    int max=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=max)
	        {
	              max=0;
	            for(int j=i+1;j<n;j++)
	            {
	                if(arr[j]>max)
	                {
	                    max=arr[j];
	                }
	            }
	            arr[i]=max;
	        }
	        else {
	            
	            arr[i]=max;
	        }
	    }
	    arr[n-1]=-1;
	}


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.nextGreatest(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends