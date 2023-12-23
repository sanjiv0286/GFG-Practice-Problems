//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// int m = 1000000007;

// class Solution{
// public:
  
//     long long fact(int num){
//         if(num==0 || num==1){
//             return 1;
//         }
//       long long   res =1;
//         for(int i=2;i<=num;i++){
//             res = (res * i )%m;
//         }
//       return res;
//     }
    
//      vector<long long> factorial(vector<long long> a, int n) {
//          vector<long long >v;
         
//          for(int i=0;i<n;i++){
//              long long number= fact(a[i]);
//              v.push_back(number);
             
//          }
//          return v;
        
//     }
// };



class Solution{
public:
    vector<long long> factorial(vector<long long> a, int n) {
        int MAX = 1e5;
        int i;
        long long fac[MAX + 1], mod = 1e9 + 7;
        fac[0] = 1;
        for (i = 1; i <= MAX; i++) {
            fac[i] = (fac[i - 1] *i) % mod;
        }
        
        // vector<long long> ans(n);
        vector<long long> ans;

        for (i = 0; i < n; i++) {
            // ans[i] = fac[a[i]];
            int fact = fac[a[i]];
            ans.push_back(fact);
        }
        return ans;
    }
};





//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<long long> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends