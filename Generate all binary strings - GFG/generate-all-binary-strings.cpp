//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void recursion(int ind,int nums,string str,char last)
{
       if(ind==nums)
       {
           cout<<str<<" ";
           return ;
       }
       str.push_back('0');
       recursion(ind+1,nums,str,'0');
       str.pop_back();
       
       if(last != '1')
       {
           str.push_back('1');
           recursion(ind+1,nums,str,'1');
       }
       
       return ;
}
    void generateBinaryStrings(int nums){
        char last='0';
        recursion(0,nums,"",last);
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends