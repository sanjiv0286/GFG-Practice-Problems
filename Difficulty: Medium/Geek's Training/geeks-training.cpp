//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    
    
    public: 
    
        int dp[100000][3]; // max 1000 rows, prev ∈ {-1,0,1,2} → mapped as 3,0,1,2

    int calculateMaximumPoints(int i, int prev, vector < vector < int >> & mat,int n)
    {
        if (i >= n) return 0;
                int p = (prev == -1) ? 3 : prev;

         if (dp[i][p] != -1)
            return dp[i][p];
        int maxi = 0;
        for (int j = 0; j < 3; j++) {
            if (j != prev) {
                maxi = max(maxi, mat[i][j] + calculateMaximumPoints(i + 1, j, mat,n));
            }
        }
        return dp[i][p] = maxi;

    }

    int maximumPoints(vector < vector < int >> & mat) {
        int n = mat.size();
                memset(dp, -1, sizeof(dp));

        return calculateMaximumPoints(0, -1, mat,n);
    }

};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            arr.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends