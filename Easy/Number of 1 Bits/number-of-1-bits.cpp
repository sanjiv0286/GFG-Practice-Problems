//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        // return __builtin_popcount(N);
         int ct = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((N & (1 << i)) != 0)
        {
            ct++;
        }
    }
    return ct;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends