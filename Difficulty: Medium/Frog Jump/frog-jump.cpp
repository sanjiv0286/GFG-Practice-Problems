//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
//   int dp[]
    int solve(vector<int>&h,int n,int dp[] ){
        if(n<0) return 0;
        if(dp[n]!=-1){
            return dp[n];
        }
        if(n==0){
            return 0;
        }
        
        int l = solve(h,n-1,dp)+ abs(h[n]-h[n-1]);
        int r = (n > 1) ? solve(h, n - 2,dp) + abs(h[n] - h[n - 2]) : INT_MAX;
        return dp[n] =  min(l,r);
    }
    int minCost(vector<int>& h) {
        int n = h.size();
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        return solve(h,n-1,dp);
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends