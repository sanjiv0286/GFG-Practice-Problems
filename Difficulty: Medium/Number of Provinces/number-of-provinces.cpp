//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution {
  public:
    // int numProvinces(vector<vector<int>> connect, int V) {
    //     // code here
        
    // }
    
     void dfs(vector<vector<int>>& adj, int u, vector<bool>& vis) {
        vis[u] = true;
        for (auto& v : adj[u]) {
            if (vis[v] == false) {
                dfs(adj, v, vis);
            }
        }
    }
    int numProvinces(vector<vector<int>>& isConnected,int  n ) {
        // int n = isConnected.size();
        vector<vector<int>> adj(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int ct = 0;
        vector<bool> vis(n, false);
        for (int i = 0; i < n; i++) {
            if (vis[i] == false) {
                dfs(adj, i, vis);
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
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends