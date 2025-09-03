class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        vector<vector<int>>adj(V);
        for(auto &x:edges){
            auto u = x.first;
            auto  v = x.second;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        return adj;
    }
};