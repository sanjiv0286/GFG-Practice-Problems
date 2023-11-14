//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
   void dfs(  vector<bool>&vis,int s, vector<int>adj[] , vector<int>&res){
        vis[s]=true;
        res.push_back(s);
        for(auto &x:adj[s]){
            if(vis[x]==false){
                dfs(vis,x,adj,res);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>res;
        vector<bool>vis(V,false);
    //   int n = adj.size();
        for(int i=0;i<V;i++){
            if(vis[i]==false){
                dfs(vis,i,adj,res);
            }
        }
        return res;
        
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends