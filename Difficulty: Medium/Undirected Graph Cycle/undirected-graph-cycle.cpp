//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:


  bool dfs(vector<bool>&vis,int p ,int s,vector<int> adj[]){
    vis[s]=true;
    for(auto &v:adj[s]){
        if(vis[v]==false){
            if(dfs(vis,s,v,adj)){
                return true;
            }
          
        }
          else if(v!=p){
                return true;
            }
    }
    return false;
}
    
bool isCycle(int n, vector<int> adj[]) {
    vector<bool>vis(n+1,false);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(dfs(vis,-1,i,adj)){
                return true;
            }
        }
    }
    return false;
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends