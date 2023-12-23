//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// int m = 1e9+7;

// class Solution{
// 	public:
	
//   	int Nth_term(int a, int r, int n){
//   	    // Code here
//   	    int res = ((a)*(pow(r,n-1)));
//   	    return res%m;
   	    
//   	}    
// };

const int m = 1e9 + 7;

class Solution {
public:
    long long power(long long x, long long y) {
        long long res = 1;
        x = x % m;

        while (y > 0) {
            if (y & 1) {
                res = (res * x) % m;
            }

            y = y >> 1;
            x = (x * x) % m;
        }

        return res;
    }

    int Nth_term(int a, int r, int n) {
        // Code here
        long long res = (a * power(r, n - 1)) % m;
        return static_cast<int>(res);
    }
};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, r, n;
		cin >> a >> r >> n;
		Solution ob;
		int ans = ob.Nth_term(a, r, n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends