class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> adj[n+1];
        for(auto it : times) {
            adj[it[0]].push_back({it[1], it[2]});
        }
        vector<int> t(n+1, 1e9);
        t[k] = 0;
        queue<pair<int,int>> q;
        q.push({k, 0});
        while(!q.empty()) {
            int node = q.front().first;
            int time = q.front().second;
            q.pop();
            for(auto neighbor : adj[node]) {
                int nextNode = neighbor.first;
                int nextTime = neighbor.second + time;
                if(nextTime < t[nextNode]) {
                    t[nextNode] = nextTime;
                    q.push({nextNode, nextTime});
                }
            }
        }
        int maxTime = 0;
        for(int i = 1; i <= n; i++) {
            maxTime = max(maxTime, t[i]);
        }
        return (maxTime == 1e9) ? -1 : maxTime;
    }
};