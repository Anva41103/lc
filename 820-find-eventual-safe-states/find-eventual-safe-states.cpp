class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int> inc(v, 0);
        vector<vector<int>> adj(v), adji(v);
        
        for (int u = 0; u < v; u++) {
            for (int i = 0; i < graph[u].size(); i++) {
                int v = graph[u][i];
                adj[u].push_back(v);
                adji[v].push_back(u);
                inc[u]++;
            }
        }
        
        queue<int> q;
        for (int i = 0; i < v; i++) {
            if (inc[i] == 0) q.push(i);
        }
        
        vector<int> topo;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            topo.push_back(u);
            for (int v : adji[u]) {
                inc[v]--;
                if (inc[v] == 0) q.push(v);
            }
        }
        
        sort(topo.begin(), topo.end());
        return topo;
    }
};