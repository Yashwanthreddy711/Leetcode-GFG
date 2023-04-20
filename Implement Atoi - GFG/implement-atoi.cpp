//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int n=str.length();
        int sum=0;
        bool b=false;
        
        
        for(int i=0;i<n;i++)
        {
            if(str[i]-'0'>=0 && str[i]-'0'<=9)
            {
                sum=sum*10 + str[i]-'0';
            }
            else if(str[i]-'0'>9)
            {
                return -1;
            }
            else if(str[i]=='+')
            {
                return -1;
            }
            else if(i!=0 && str[i]=='-' )
            {
                return -1;
            }
           
        }
        
        if(str[0]=='-')
        {
            return sum*-1;
        }
        else
        {
            return sum;
        }
        
        
        
        // int sum=0;
        // for(int i=0;i<=count;i++)
        // {
            
        //     sum=sum*pow(10,count)+str[i]-'0';
            
        // }
        
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends