//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

// class Solution
// {
//     public:
//     // vector<vector<int>>memo;
//     int S = 1+1e3;
//   int  memo[S][S];
    
//     int logestcs(int n , int m , string &s1,string &s2){
         
//         if(m==0 || n==0){
//             return 0;
//         }
//         if(memo[n][m]==-1){
//             return memo[n][m];
//         }
//         else{
//              if(s1[n-1]==s2[m-1]){
//             return 1+lcs(n-1,m-1,s1,s2);
//         }
//         else{
//             return max(lcs(n-1,m,s1,s2),lcs(n,m-1,s1,s2));
//         }
            
//         }
//         return memo[n][m];
        
//     } 
    
    
//     //Function to find the length of longest common subsequence in two strings.
//     int lcs(int n, int m, string s1, string s2)
//     {
//         // your code here
//         memo.assign(n+1,vector<int>(m+1,-1));
        
//         return logestcs(n,m,s1,s2);
       
       
//     }
// };


class Solution {
public:
    static const int S = 1001; // Define S as a constant

    int memo[S][S];

    int logestcs(int n, int m, string &s1, string &s2) {
        if (m == 0 || n == 0) {
            return 0;
        }
        if (memo[n][m] == -1) {
            if (s1[n - 1] == s2[m - 1]) {
                memo[n][m] = 1 + logestcs(n - 1, m - 1, s1, s2);
            } else {
                memo[n][m] = max(logestcs(n - 1, m, s1, s2), logestcs(n, m - 1, s1, s2));
            }
        }
        return memo[n][m];
    }

    int lcs(int n, int m, string s1, string s2) {
        // Initialize memo array with -1
        memset(memo, -1, sizeof(memo));
        return logestcs(n, m, s1, s2);
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends