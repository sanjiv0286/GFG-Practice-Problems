//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
public:
    int facDigits(int n){
        //code here
         double val=0.0;
        for(int i=1;i<=n;i++){
             val += log10(i);
        }
        int res = floor(val)+1;
        return res;
    }
};




//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.facDigits(n)<<"\n";
       
        
    }
    return 0;
}
// } Driver Code Ends