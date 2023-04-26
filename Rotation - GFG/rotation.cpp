//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int nums[], int n) {
	     int first=0;
        int last = n-1;
        int middle=0,prev=0,next=0;
        while (first<=last)
        {
            if (nums[first]<=nums[last])
            {
                return first;
            }
            middle= first + (last-first)/2;
            prev = ( middle - 1 + n ) % n;
            next = ( middle +1 ) % n;
            
            if (nums[middle] <= nums[next] && nums[middle] <= nums[prev])
            {
                return middle;
            }
            if (nums[first] <= nums[middle])
            {
                first = middle + 1;
            }
            if (nums[middle] <= nums[last])
            {
                last= middle-1;
            }
        }
        return -1 ; 
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends