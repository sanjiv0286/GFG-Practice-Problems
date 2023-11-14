//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
 bool dfs(vector<int> adj[],vector<bool>&vis,int s,int par){
     
     vis[s]=true;
     for(auto &x:adj[s]){
         if(!vis[x]){
             if(dfs(adj,vis,x,s)==true){
                 return true;
             }
         }
         else if(x!=par){
             return true;
         }
     }
     return false ;
      
    }
    
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(vis[i]==false){
                if(dfs(adj,vis,i,-1)==true){
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