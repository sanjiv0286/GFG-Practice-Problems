//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// User function Template for C++
class Solution {
  public:
    const long long mod = 1e9+7;
    
    long long power(long long  x , long long n){
        if (n==0){
            return 1;
        }
        long long temp = power(x,n/2);
        temp = (temp*temp)%mod;
        if(n%2==0){
            return temp;
            
        }
        return (temp *x)%mod;
    }
    
    long long count(int n) {
        // your code here
        
        long long x = (n*(n-1))/2;
        
        return pow(2,x);
    }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.count(n) << "\n";
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends