//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
       
       
       int *a= new int[2];
       map<int,int>mp;
      for(int i=0;i<n;i++)
       {
           mp[arr[i]]++;
       }
       
      
       for(auto it:mp){
           if(it.second==2)
           {
               a[0]=it.first;
           }
       }
       sort(arr,arr+n);

        int x=1;
        for(int i=0;i<n;i++)
        {
              
            if(arr[i]==x)
            {
                x++;
            }
            
        }
        a[1]=x;
  
      return a;
       
    }
        
        
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends