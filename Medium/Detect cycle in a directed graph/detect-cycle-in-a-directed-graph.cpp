//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
   bool dfs(vector<int>adj[],vector<int>&vis,vector<int>&recst,int s){
       vis[s]=true;
       recst[s]=true;
       for(auto &x:adj[s]){
           if(!vis[x]){
                 if(dfs(adj,vis,recst,x)==true)
                return true;
           }
           else if(recst[x]==true){
               return true;
           }
       }
       recst[s]=false;
       return false ;
   }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,false);
        vector<int>recst(V,false);
        for(int i=0;i<V;i++){
            if(vis[i]==false){
                if(dfs(adj,vis,recst,i)==true)
                return true;
            }
        }
        return false;
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends