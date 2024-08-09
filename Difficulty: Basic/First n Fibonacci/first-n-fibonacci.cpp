//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
     long long dp[85];
    //Function to return list containing first n fibonacci numbers.
    void solve(int n,vector<long long>&res){
         dp[1]=1;
        dp[2]=1;
        if(n==1){
            res.push_back(dp[1]);
            return ;
        }
         if(n==2){
            res.push_back(dp[1]);
             res.push_back(dp[2]);
            return ;
        }
       
        res.push_back(dp[1]);
        res.push_back(dp[2]);
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
            res.push_back(dp[i]);
        }
        r
    
        
    }
    
    vector<long long> printFibb(int n) 
    {
        //code here
       
        memset(dp,-1,sizeof(dp));
        vector<long long>res;
         solve(n,res);
         return res;
        
    }
};



//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends