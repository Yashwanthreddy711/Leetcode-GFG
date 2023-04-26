//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
  int findFloor(vector<long long> v, long long n, long long target){
    long long st = 0;
    long long en = n - 1;
    int index = -1;
    
    while(st <= en) {
        int mid = (st + en) / 2;
        if(v[mid] == target) {
            return mid;
        }
        if(v[mid] < target) {
            index = max(index, mid);
            st = mid + 1;
        } else {
            en = mid - 1;
        }
    }
    return index;
}

};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends