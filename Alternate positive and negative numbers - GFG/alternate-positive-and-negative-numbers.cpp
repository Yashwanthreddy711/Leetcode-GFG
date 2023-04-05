//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int N) {
	   vector<int>even;
	   vector<int>odd;
	   
	   int e=0;
	   int o=0;
	   for(int i=0;i<N;i++)
	   {
	       if(arr[i]>=0)
	       {
	           even.push_back(arr[i]);
	       }
	       else
	       {
	           odd.push_back(arr[i]);
	       }
	   }
	   
	   int n=even.size();
	   int m=odd.size();
	   
	   for(int i=0;i<N;i++)
	   {
	       if(n && m)
	       {
	           
	       if(i%2==0)
	       {
	           arr[i]=even[e];
	           e++;
	           n--;
	       }
	       else
	       {
	           arr[i]=odd[o];
	           o++;
	           m--;
	       }
	       
	       }
	       else if(m)
	       {
	           arr[i]=odd[o];
	           o++;
	           m--;
	           
	       }
	       else if(n)
	       {
	           arr[i]=even[e];
	           e++;
	           n--;
	           
	       }
	   }
	   
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends