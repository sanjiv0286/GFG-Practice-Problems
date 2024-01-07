//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	int power(int x, int y)
	{
	    long long int  res = 1;      // Initialize result

	    x = x % 9;  // Update x if it is more than or
	                // equal to p

	    while (y > 0)
	    {
	        // If y is odd, multiply x with result
	        if (y & 1)
	            res = (res*x) % 9;

	        // y must be even now
	        y = y>>1; // y = y/2
	        x = (x*x) % 9;
	    }
	    return res;
	}
	int SumofDigits(int A, int B)
	{
		int x = power(A, B);
		if(x == 0)
			return 9;
		return x;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int A, B;
		cin >> A >> B;
		Solution ob;
		int ans = ob.SumofDigits(A, B);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends