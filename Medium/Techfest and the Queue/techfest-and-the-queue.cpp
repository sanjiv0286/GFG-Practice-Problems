//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:

    int prime_factor(int n){
         int ct = 0;
    vector<int> prime_factors;
    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            ct++;
            // prime_factors.push_back(i);
            n /= i;
        }
    }
    // This is right for 36 = 2*2*3*3  😊😊
    // But This is wrong for 24 = 2*2*2*3 . so we use

    if (n > 1)
    {
        // prime_factors.push_back(n);
        ct++;
    }
    return ct;
    // for (int prime : prime_factors)
    // {
    //     cout << prime << " ";
    // }
        
    }

	int sumOfPowers(int a, int b){
	    // Code here
	   // vecto<int>store;
	    int res= 0;
	   // unordered_map<int,int>m;
	    for(int i=a;i<=b;i++){
	       int total =  prime_factor(i);
	       res = res+total;
	    }
	    return res;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends