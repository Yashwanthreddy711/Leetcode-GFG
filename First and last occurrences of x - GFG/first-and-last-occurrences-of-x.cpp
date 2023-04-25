//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
  int first = 0;
int last = 0;
int st = 0;
int en = n - 1;
vector<int>ans;

while(st <= en) {
  int mid = (st + en) / 2;
  if(arr[mid] == x) {
    ans.push_back(mid); // Update the value of first
    en = mid - 1;
  }
  if(arr[mid]> x) {
     en=mid-1;
  } 
  else if(arr[mid]<x){
    st=mid+1;
  }
}

st = 0;
en = n - 1;

while(st <= en) {
  int mid = (st + en) / 2;
  if(arr[mid] == x) {
    ans.push_back(mid); // Update the value of first
    st = mid + 1;
  }
  if(arr[mid]> x) {
      en=mid-1;
  } 
  else if(arr[mid]<x) {
    st=mid+1;
  }
}
  if(ans.size()==0)
  {
      return {-1,-1};
  }
  
  sort(ans.begin(),ans.end());
//   for(auto it:ans)
//   {
//       cout<<it<<" ";
//   }
//   cout<<endl;
//   vector<int>v;
//   v.push_back(ans[0]);
//   cout<<"last is"<<ans[n-1]<<endl;
//   v.push_back(ans[n-1]);
   return {ans[0],ans[ans.size()-1]};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends